﻿#include"mainWindow.h"
#include<Windows.h>
#include<ResourceIndexer.h>
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

namespace Calculator
{
	//=============================== Calculation Functions  ==============================================
	double mainWindow::Calc(double num, String ^oper_char)
	{
		double result = 0;
		if(oper_char->Contains("√"))
		{
			result = sqrt(num);
			tb_MainCalcText->Text = result.ToString();

			return result;
		}
		else if(oper_char->Contains("x²"))
		{
			result = num * num;
			tb_MainCalcText->Text = result.ToString();

			return result;
		}
		else if(oper_char->Contains("⅟"))
		{
			if(num == 0)
			{
				is_divide_by_zero = true;
				tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 22, System::Drawing::FontStyle::Bold);
				tb_MainCalcText->Text = "Cannot divide by zero";
				return result;
			}
			else
			{
				result = 1 / num;
				tb_MainCalcText->Text = result.ToString();
			}

			return result;
		}
		else
		{
			return 0.0;
		}
		tb_MainCalcText->Text = result.ToString();
	}

	double mainWindow::Calc(double num1, String ^oper_char, double num2)
	{
		double result = 0;
		if(oper_char == "+")
		{
			result = num1 + num2;
			tb_MainCalcText->Text = result.ToString();

			return result;
		}
		else if(oper_char == "-")
		{
			result = num1 - num2;
			tb_MainCalcText->Text = result.ToString();

			return result;
		}
		else if(oper_char == "×")
		{
			result = num1 * num2;
			tb_MainCalcText->Text = result.ToString();

			return result;
		}
		else if(oper_char == "÷")
		{
			if(num2 == 0)
			{
				is_divide_by_zero = true;
				tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 22, System::Drawing::FontStyle::Bold);
				tb_MainCalcText->Text = "Cannot divide by zero";
				return result;
			}
			else
			{
				is_divide_by_zero = false;
				result = num1 / num2;
				tb_MainCalcText->Text = result.ToString();
				return result;
			}
		}
		else if(oper_char->Contains("√"))
		{
			result = sqrt(num2);
			tb_MainCalcText->Text = result.ToString();

			return result;
		}
		else //if operator contains %
		{
			//(percent number)% * number 2
			num1 = num1 * 0.01;

			result = num1 * num2;;
			tb_MainCalcText->Text = result.ToString();
			return result;
		}
	}

	void mainWindow::mainWinSizeCheck()
	{}

	//=============================== END Calculation Functions ==============================================
	//============================== Hidding Carret From TextBox ===========================================================
	System::Void mainWindow::tb_MainCalcText_MouseClick(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		HWND Caret_MainCalcText;
		Caret_MainCalcText = (HWND)(tb_MainCalcText->Handle.ToPointer());

		//Had to cast Rich Text Box to HWND to hide caret from blinking, using static_cast<HWND>
		HideCaret(Caret_MainCalcText);
	}
	System::Void mainWindow::tb_MainCalcText_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		HWND Caret_MainCalcText;
		Caret_MainCalcText = (HWND)(tb_MainCalcText->Handle.ToPointer());

		//Had to cast Rich Text Box to HWND to hide caret from blinking, using static_cast<HWND>
		HideCaret(Caret_MainCalcText);
	}
	System::Void mainWindow::tb_smallWindow_MouseClick(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		HWND Caret_smallCalcText;
		Caret_smallCalcText = (HWND)(tb_smallWindow->Handle.ToPointer());

		HideCaret(Caret_smallCalcText);
	}
	System::Void mainWindow::tb_smallWindow_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		HWND Caret_smallCalcText;
		Caret_smallCalcText = (HWND)(tb_smallWindow->Handle.ToPointer());

		HideCaret(Caret_smallCalcText);
	}

	//============================== End Hidding Carret From TextBox===========================================================
	//
	//==============================Number Buttons===========================================================
	System::Void Calculator::mainWindow::number_Inputs(System::Object ^sender, System::EventArgs ^e)
	{
		number_in = safe_cast<Button ^>(sender);
		if(is_divide_by_zero)
		{
			btn_Clear_Click(btn_Equal, e->Empty);
			tb_MainCalcText->Text = number_in->Text;
		}
		else
		{
			if(!is_MainWindow_Modified)
			{
				if(!is_equal_clicked)
				{
					if(is_special_op_clicked)
					{
						tb_MainCalcText->Text = number_in->Text;
						is_special_op_clicked = false;
					}
					else
					{
						tb_MainCalcText->Text = number_in->Text;
					}
				}
				else //if(is_equal_clicked)
				{
					tb_MainCalcText->Text = number_in->Text;
					is_equal_clicked = false;
				}
			}
			else if(is_MainWindow_Modified)
			{
				if(is_equal_clicked)
				{
					tb_smallWindow->Clear();
					tb_MainCalcText->Text = number_in->Text;
					is_special_op_clicked = false;
					is_operator_clicked = false;
					is_equal_clicked = false;
				}
				else
				{
					if(is_special_op_clicked)
					{
						tb_MainCalcText->Text = number_in->Text;
						is_special_op_clicked = false;
					}
					else
					{
						tb_MainCalcText->Text += number_in->Text;
					}
				}
			}
		}

		is_MainWindow_Modified = true;
		tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 52, System::Drawing::FontStyle::Bold);
	}
	//========================================End Number buttons=====================================================

	//=============================Operator buttons +,-,*,^,/,. =====================================================
	System::Void Calculator::mainWindow::operation_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		btn_operator = safe_cast<Button ^>(sender);

		if(!is_MainWindow_Modified)
		{
			if(!is_operator_clicked)
			{
				oper_char = btn_operator->Text;
				num1 = double::Parse(tb_MainCalcText->Text);

				if(!is_special_op_clicked)
				{
					tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
				}
				else //if(is_special_op_clicked)
				{
					tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " ";
				}
			}
			else //if(is_operator_clicked)
			{
				oper_char = btn_operator->Text;

				if(!is_special_op_clicked)
				{
					tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
				}
				else //if(is_special_op_clicked)
				{
					tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " ";
				}
			}
		}
		else //if(is_MainWindow_Modified)
		{
			if(!is_operator_clicked)
			{
				oper_char = btn_operator->Text;

				if(special_oper_char != nullptr && special_oper_char->Contains("%"))
				{
					num1 = Double::Parse(tb_MainCalcText->Text);
					temp_string_num1 += "(" + num1.ToString() + ")";
					num1 = Calc(percent_num1, special_oper_char, num1);
					tb_smallWindow->Text = temp_string_num1 + " " + oper_char;
				}
				else
				{
					num1 = double::Parse(tb_MainCalcText->Text);
					if(!is_special_op_clicked)
					{
						tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
					}
					else //if(is_special_op_clicked)
					{
						tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " ";
					}
				}

				is_equal_clicked = false;
				is_divide_by_zero = false;
			}
			else //if(is_operator_clicked)
			{
				if(!is_equal_clicked)
				{
					num2 = double::Parse(tb_MainCalcText->Text);
					num1 = Calc(num1, oper_char, num2);
					oper_char = btn_operator->Text;
					tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
					is_special_op_clicked = false;
				}
				else //if(is_equal_clicked)
				{
					oper_char = btn_operator->Text;
					num1 = double::Parse(tb_MainCalcText->Text);
					tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
					is_equal_clicked = false;
				}
			}
		}
		is_MainWindow_Modified = false;
		is_operator_clicked = true;
		special_oper_char = nullptr;//////
	}
	//========================================End ===================================================================

	//========================================Special Number buttons=====================================================
	System::Void mainWindow::special_operation_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		btn_operator = safe_cast<Button ^>(sender);

		special_oper_char = btn_operator->Text;
		if(!is_MainWindow_Modified)
		{
			if(!is_operator_clicked)
			{
				if(!special_oper_char->Contains("%"))
				{
					num1 = Double::Parse(tb_MainCalcText->Text);
					//changing special operator character text to button operator acessible name(ex. x2 to sqr)
					temp_string_num1 = btn_operator->AccessibleName->ToString() + "(" + num1.ToString() + ")";
					tb_smallWindow->Text = temp_string_num1;
					num1 = Calc(num1, special_oper_char);
				}
			}
			else //if(is_operator_clicked)
			{
				if(!is_special_op_clicked)
				{
					if(special_oper_char->Contains("%"))
					{
						percent_num1 = Double::Parse(tb_MainCalcText->Text);
						temp_string_num2 = percent_num1.ToString() + special_oper_char;
						tb_smallWindow->Text = temp_string_num1 + oper_char + temp_string_num2;
						num2 = Calc(percent_num1, special_oper_char, num1);
					}
					else
					{
						num2 = Double::Parse(tb_MainCalcText->Text);

						//changing text from button operator acessible name if button contains one of the special characters to words instead of special character
						temp_string_num2 = btn_operator->AccessibleName->ToString() + "(" + num2.ToString() + ")";
						tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + temp_string_num2;
						num2 = Calc(num2, special_oper_char);
					}
				}
				else
				{
					num2 = Double::Parse(tb_MainCalcText->Text);

					//adding up special operators to small window
					temp_string_num2 = btn_operator->AccessibleName->ToString() + "(" + num2.ToString() + ")";
					tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " " + temp_string_num2;
					num2 = Calc(num2, special_oper_char);
				}
			}
			is_MainWindow_Modified = true;
		}
		else //if(is_MainWindow_Modified)
		{
			if(!is_operator_clicked)
			{
				if(!is_special_op_clicked)
				{
					if(special_oper_char->Contains("%"))
					{
						percent_num1 = Double::Parse(tb_MainCalcText->Text);
						temp_string_num1 = percent_num1.ToString() + special_oper_char;
						tb_smallWindow->Text = temp_string_num1;
					}
					else
					{
						num1 = Double::Parse(tb_MainCalcText->Text);
						temp_string_num1 = btn_operator->AccessibleName->ToString() + "(" + num1.ToString() + ")";
						tb_smallWindow->Text = temp_string_num1;
						num1 = Calc(num1, special_oper_char);
						is_equal_clicked = false;
					}
				}
				else //if(is_special_op_clicked)
				{
					if(!special_oper_char->Contains("%"))
					{
						//adding up special operators to small window
						num1 = Calc(num1, special_oper_char);
						temp_string_num1 = btn_operator->AccessibleName->ToString() + "(" + temp_string_num1 + ")";
						tb_smallWindow->Text = temp_string_num1;
					}
				}
				if(tb_MainCalcText->Text->Length >= 15)
				{
					tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 28, System::Drawing::FontStyle::Bold);
				}
			}
			else //if(is_operator_clicked)
			{
				if(!is_special_op_clicked)
				{
					if(temp_string_num1 != nullptr)
					{
						if(special_oper_char->Contains("%"))
						{
							percent_num2 = Double::Parse(tb_MainCalcText->Text);
							temp_string_num2 = percent_num2.ToString() + special_oper_char;
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + temp_string_num2;
							num2 = Calc(percent_num2, special_oper_char, num1);
						}
						else
						{
							num2 = Double::Parse(tb_MainCalcText->Text);
							temp_string_num2 = btn_operator->AccessibleName->ToString() + "(" + num2.ToString() + ")";
							tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " " + temp_string_num2;
							num2 = Calc(num2, special_oper_char);
						}
					}
					else
					{
						if(special_oper_char != nullptr && special_oper_char->Contains("%"))
						{
							percent_num2 = Double::Parse(tb_MainCalcText->Text);
							temp_string_num2 = percent_num2 + special_oper_char;
							tb_smallWindow->Text += temp_string_num2;
							num2 = Calc(percent_num2, special_oper_char, num1);
						}
						else
						{
							num2 = Double::Parse(tb_MainCalcText->Text);
							//changing text from button operator acessible name if button contains one of the special characters to words instead of special character
							temp_string_num2 = btn_operator->AccessibleName->ToString() + "(" + num2.ToString() + ")";
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + temp_string_num2;
							num2 = Calc(num2, special_oper_char);
						}
					}
				}
				else //if(is_special_op_clicked)
				{
					if(!is_equal_clicked)
					{
						//adding up special operators to small window
						if(temp_string_num1 != nullptr)
						{
							num2 = Calc(num2, special_oper_char);
							temp_string_num2 = btn_operator->AccessibleName->ToString() + "(" + temp_string_num2 + ")";
							tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " " + temp_string_num2;
						}
						else
						{
							num2 = Calc(num2, special_oper_char);
							temp_string_num2 = btn_operator->AccessibleName->ToString() + "(" + temp_string_num2 + ")";
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + temp_string_num2;
						}
					}
					else //if(is_equal_clicked)
					{
						num2 = Double::Parse(tb_MainCalcText->Text);
						temp_string_num1 = btn_operator->AccessibleName->ToString() + "(" + num1.ToString() + ")";//
						tb_smallWindow->Text = temp_string_num1;//
						num1 = Calc(num1, special_oper_char);
						is_equal_clicked = false;
						is_operator_clicked = false;
					}
				}
				if(tb_MainCalcText->Text->Length >= 15)
				{
					tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 28, System::Drawing::FontStyle::Bold);
				}
			}
		}

		is_special_op_clicked = true;
	}
	//================================================================================================================
	//================================================================================================================
	System::Void mainWindow::decimal_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		Button ^decimal_Button = safe_cast<Button ^>(sender);
		if(is_equal_clicked)
		{
			tb_smallWindow->Clear();
			tb_MainCalcText->Text = "0" + decimal_Button->Text;
			is_operator_clicked = false;
			is_equal_clicked = false;
		}
		else if(!is_MainWindow_Modified)
		{
			tb_MainCalcText->Text = "0" + decimal_Button->Text;
		}
		if(!tb_MainCalcText->Text->Contains(".") && !is_operator_clicked && !is_MainWindow_Modified)
		{
			tb_MainCalcText->Text += decimal_Button->Text;
		}
		else if(!tb_MainCalcText->Text->Contains("."))
		{
			tb_MainCalcText->Text += decimal_Button->Text;
		}
		is_MainWindow_Modified = true;
	}
	//================================================================================================================
	//================================================================================================================
	System::Void mainWindow::btn_BackSpace_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(!is_equal_clicked)
		{
			tb_MainCalcText->Text = tb_MainCalcText->Text->Remove(tb_MainCalcText->TextLength - 1);

			if(tb_MainCalcText->Text == "")
			{
				tb_MainCalcText->Text = "0";
			}
		}
		else
		{
			tb_smallWindow->Clear();
		}
	}
	//================================================================================================================
	//================================================================================================================
	System::Void mainWindow::btn_Clear_Click(System::Object ^sender, System::EventArgs ^e)
	{
		tb_MainCalcText->Clear();
		tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 52, System::Drawing::FontStyle::Bold);
		if(tb_MainCalcText->Text == "")
		{
			tb_MainCalcText->Text = "0";
		}
		tb_smallWindow->Text = "";
		num1 = 0;
		num2 = 0;
		oper_char = nullptr;
		special_oper_char = nullptr;
		temp_string_num1 = nullptr;
		temp_string_num2 = nullptr;
		is_operator_clicked = false;
		is_special_op_clicked = false;
		is_MainWindow_Modified = false;
		is_equal_clicked = false;
		is_divide_by_zero = false;
	}
	//================================================================================================================
	//================================================================================================================
	System::Void mainWindow::btn_CE_Click(System::Object ^sender, System::EventArgs ^e)
	{
		tb_MainCalcText->Clear();
		if(tb_MainCalcText->Text == "")
		{
			tb_MainCalcText->Text = "0";
			is_MainWindow_Modified = false;
			temp_string_num1 = nullptr;
			temp_string_num2 = nullptr;
			is_special_op_clicked = false;
		}
	}
	//=============================END Operator buttons +,-,*,^,/,. ==============================================

	//===================================Operator equality = =====================================================
	System::Void mainWindow::btn_Equal_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(is_divide_by_zero) //if error occur and will be clicked button equality again it will clear calculator values
		{
			btn_Clear_Click(btn_Equal, e->Empty);
		}
		else
		{
			if(!is_MainWindow_Modified)
			{
				if(!is_operator_clicked)
				{
					num1 = double::Parse(tb_MainCalcText->Text);
					tb_smallWindow->Text = num1.ToString() + " =";
				}
				else //if(is_operator_clicked)
				{
					if(!is_special_op_clicked)
					{
						num2 = double::Parse(tb_MainCalcText->Text);
						if(num2 < 0)
						{
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " (" + num2.ToString() + ") =";
						}
						else
						{
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
						}
						num1 = Calc(num1, oper_char, num2);

						is_MainWindow_Modified = true;
					}
					else //if(is_special_op_clicked)
					{
						if(temp_string_num1 != nullptr && temp_string_num2 != nullptr)
						{
							if(num2 != 0)
							{
								num1 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
								num1 = Calc(num1, oper_char, num2);
							}
							else
							{
								num2 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " " + temp_string_num2 + " =";
								num1 = Calc(num1, oper_char, num2);
							}
						}
						else if(temp_string_num1 != nullptr)
						{
							if(num2 != 0)
							{
								num1 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
								num1 = Calc(num1, oper_char, num2);
							}
							else
							{
								num2 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " " + num2.ToString() + " =";
								num1 = Calc(num1, oper_char, num2);
							}
						}
						else if(temp_string_num2 != nullptr)
						{
							if(num2 != 0)
							{
								num1 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
								num1 = Calc(num1, oper_char, num2);
							}
							else
							{
								num2 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + temp_string_num2 + " =";
								num1 = Calc(num1, oper_char, num2);
							}
						}
					}
				}
			}
			else if(is_MainWindow_Modified)
			{
				if(!is_equal_clicked)
				{
					if(!is_operator_clicked)
					{
						if(special_oper_char != nullptr && special_oper_char->Contains("%"))
						{
							num1 = Double::Parse(tb_MainCalcText->Text);
							temp_string_num1 += "(" + num1.ToString() + ") =";
							num1 = Calc(percent_num1, special_oper_char, num1);
							tb_smallWindow->Text = temp_string_num1;
						}
						else
						{
							if(num2 != 0)
							{
								num1 = Double::Parse(tb_MainCalcText->Text);
								if(num2 < 0)
								{
									tb_smallWindow->Text = num1.ToString() + " " + oper_char + " (" + num2.ToString() + ") =";
								}
								else
								{
									tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
								}
								num1 = Calc(num1, oper_char, num2);
							}
							else
							{
								num1 = double::Parse(tb_MainCalcText->Text);
								tb_smallWindow->Text = num1.ToString() + " =";
								is_MainWindow_Modified = false;
							}
						}
					}
					else if(is_operator_clicked)
					{
						if(!is_special_op_clicked)
						{
							if(special_oper_char != nullptr && special_oper_char->Contains("%"))//////
							{
								num2 = double::Parse(tb_MainCalcText->Text);
								num2 = Calc(percent_num2, special_oper_char, num2);
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
								num1 = Calc(num1, oper_char, num2);
							}
							else
							{
								if(temp_string_num1 != nullptr)
								{
									num2 = double::Parse(tb_MainCalcText->Text);
									tb_smallWindow->Text = temp_string_num1 + " " + oper_char + " " + num2.ToString() + " =";
								}
								else
								{
									num2 = Double::Parse(tb_MainCalcText->Text);
									if(num2 < 0)
									{
										tb_smallWindow->Text = num1.ToString() + " " + oper_char + " (" + num2.ToString() + ") =";
									}
									else
									{
										tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
									}
								}
								num1 = Calc(num1, oper_char, num2);
							}
							is_MainWindow_Modified = true;
						}
						else if(is_special_op_clicked)
						{
							if(special_oper_char->Contains("%"))
							{
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
								num1 = Calc(num1, oper_char, num2);
								temp_string_num1 = nullptr;
								temp_string_num2 = nullptr;
								special_oper_char = nullptr;
								is_MainWindow_Modified = true;
							}
							else
							{
								num2 = Double::Parse(tb_MainCalcText->Text);

								tb_smallWindow->Text += " =";
								num1 = Calc(num1, oper_char, num2);
								is_MainWindow_Modified = true;
							}
						}
					}
				}
				else if(is_equal_clicked)
				{
					if(!is_operator_clicked)
					{
						if(special_oper_char != nullptr && special_oper_char->Contains("%"))
						{
							tb_smallWindow->Text = num1.ToString() + " =";
							percent_num1 = 0;
							temp_string_num1 = nullptr;
							temp_string_num2 = nullptr;
							special_oper_char = nullptr;
							is_special_op_clicked = false;
							is_MainWindow_Modified = false;
						}
						else
						{
							num1 = double::Parse(tb_MainCalcText->Text);
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
							num1 = Calc(num1, oper_char, num2);
							is_operator_clicked = true;
						}
					}
					else if(is_operator_clicked)
					{
						if(num2 != 0)
						{
							num1 = Double::Parse(tb_MainCalcText->Text);
							if(num2 < 0)
							{
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " (" + num2.ToString() + ") =";
							}
							else
							{
								tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
							}
							num1 = Calc(num1, oper_char, num2);
						}
						else
						{
							num2 = double::Parse(tb_MainCalcText->Text);
							tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
							num1 = Calc(num1, oper_char, num2);
						}
					}
				}
			}
			temp_string_num1 = nullptr;
			temp_string_num2 = nullptr;
			special_oper_char = nullptr;
			is_equal_clicked = true;
		}
	}
	//============================== END Operator equality = =====================================================
	System::Void mainWindow::negative_Button_Click(System::Object ^sender, System::EventArgs ^e)
	{
		double temp_num;
		temp_num = double::Parse(tb_MainCalcText->Text);
		temp_num *= (-1);

		tb_MainCalcText->Text = temp_num.ToString();
	}
}