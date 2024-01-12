#include"mainWindow.h"
#include<Windows.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

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
	double mainWindow::Calc(double, String ^)
	{
		double result = 0;
		if(oper_char == "√")
		{
			result = sqrt(num1);
			return result;
		}
		else if(oper_char == "x²")
		{
			return 0.0;
		}
		else if(oper_char == "⅟")
		{
			return 0.0;
		}
		else
		{
			return 0;
		}
	}

	double mainWindow::Calc(double num1, String ^oper_char, double num2)
	{
		double result = 0;
		if(oper_char == "+")
		{
			result = num1 + num2;

			return result;
		}
		else if(oper_char == "-")
		{
			result = num1 - num2;

			return result;
		}
		else if(oper_char == "×")
		{
			result = num1 * num2;

			return result;
		}
		else if(oper_char == "÷")
		{
			if(num2 == 0)
			{
				is_divide_by_zero = true;
				tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 24, System::Drawing::FontStyle::Bold);
				tb_MainCalcText->Text = "Cannot divide by zero";
				return result;
			}
			else
			{
				is_divide_by_zero = false;
				result = num1 / num2;
				return result;
			}
		}
		else
		{
			result = num1;
			return result;
		}
	}

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

		if(tb_MainCalcText->Text->Length < 16)
		{
			if(tb_MainCalcText->Text->Length == 9)
			{
				tb_MainCalcText->Font = gcnew System::Drawing::Font("MS Gothic", 24, System::Drawing::FontStyle::Bold);
			}
			if(tb_MainCalcText->Text == "0")
			{
				tb_MainCalcText->Text = number_in->Text;
				tb_MainCalcText->Modified = true;
			}
			else if(!tb_MainCalcText->Modified)
			{
				tb_MainCalcText->Text = number_in->Text;
				tb_MainCalcText->Modified = true;
			}
			else
			{
				tb_MainCalcText->Text += number_in->Text;
				tb_MainCalcText->Modified = true;
			}
		}
	}
	//========================================End Number buttons=====================================================
	//=============================Operator buttons +,-,*,^,/,. =====================================================

	System::Void Calculator::mainWindow::operation_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		btn_operator = safe_cast<Button ^>(sender);

		if(!is_operator_clicked)
		{
			oper_char = btn_operator->Text;
			if(oper_char == "√" || oper_char == "x²" || oper_char == "⅟")
			{
				num1 = double::Parse(tb_MainCalcText->Text);
				tb_smallWindow->Text += oper_char + "(" + num1.ToString() + ")";
				num1 = Calc(num1, oper_char);
				is_operator_clicked = true;
				tb_MainCalcText->Modified = false;
				tb_MainCalcText->Text = num1.ToString();
			}
			else
			{
				num1 = double::Parse(tb_MainCalcText->Text);
				tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
				is_operator_clicked = true;
				tb_MainCalcText->Modified = false;
			}
		}
		else if(!tb_MainCalcText->Modified)
		{
			oper_char = btn_operator->Text;
			tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
		}
		else if(tb_MainCalcText->Modified == true)
		{
			num2 = double::Parse(tb_MainCalcText->Text);
			num1 = Calc(num1, oper_char, num2);
			oper_char = btn_operator->Text;
			tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
			tb_MainCalcText->Text = num1.ToString();
		}
	}

	System::Void mainWindow::decimal_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		Button ^decimal_Button = safe_cast<Button ^>(sender);

		if(!tb_MainCalcText->Text->Contains(".") && !is_operator_clicked && !tb_MainCalcText->Modified)
		{
			tb_MainCalcText->Text += decimal_Button->Text;
		}
		else if(!tb_MainCalcText->Text->Contains("."))
		{
			tb_MainCalcText->Text += decimal_Button->Text;
			tb_MainCalcText->Modified = true;
		}
	}
	System::Void mainWindow::btn_BackSpace_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(!is_equal_clicked)
		{
			tb_MainCalcText->Text = tb_MainCalcText->Text->Remove(tb_MainCalcText->TextLength - 1);

			if(tb_MainCalcText->Text == "")
			{
				tb_MainCalcText->Text = "0";
			}
			tb_MainCalcText->Modified = true;
		}
		else
		{
			tb_smallWindow->Clear();
		}
	}
	System::Void mainWindow::btn_Clear_Click(System::Object ^sender, System::EventArgs ^e)
	{
		tb_MainCalcText->Clear();
		if(tb_MainCalcText->Text == "")
		{
			tb_MainCalcText->Text = "0";
		}
		tb_smallWindow->Text = "";
		num1 = 0;
		num2 = 0;
		oper_char = nullptr;
		is_operator_clicked = false;
		tb_MainCalcText->Modified = false;
	}
	System::Void mainWindow::btn_CE_Click(System::Object ^sender, System::EventArgs ^e)
	{
		tb_MainCalcText->Clear();
		if(tb_MainCalcText->Text == "")
		{
			tb_MainCalcText->Text = "0";
		}
	}
	//=============================END Operator buttons +,-,*,^,/,. ==============================================

	//===================================Operator equality = =====================================================
	System::Void mainWindow::btn_Equal_Click(System::Object ^sender, System::EventArgs ^e)
	{
		is_equal_clicked = true;
		if(tb_MainCalcText->Modified)
		{
			if(!is_operator_clicked)
			{
				num1 = double::Parse(tb_MainCalcText->Text);
				tb_smallWindow->Text = num1.ToString() + " =";
				tb_MainCalcText->Modified = false;
			}
			else if(is_operator_clicked)
			{
				num2 = double::Parse(tb_MainCalcText->Text);
				tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
				num1 = Calc(num1, oper_char, num2);
				if(!is_divide_by_zero)
				{
					tb_MainCalcText->Text = num1.ToString();
				}
				is_operator_clicked = false;
			}
		}
		else
		{
			if(num2 < 0)
			{
				tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + "(" + num2.ToString() + ")" + " =";
			}
			else
			{
				tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
			}
			num1 = Calc(num1, oper_char, num2);
			tb_MainCalcText->Text = num1.ToString();
		}

		//============================== END Operator equality = =====================================================
	}
	System::Void mainWindow::negative_Button_Click(System::Object ^sender, System::EventArgs ^e)
	{
		double temp_num;
		temp_num = double::Parse(tb_MainCalcText->Text);
		temp_num *= (-1);

		tb_MainCalcText->Text = temp_num.ToString();
	}
}