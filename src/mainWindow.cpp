#include"mainWindow.h"
#include<Windows.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

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
	double mainWindow::Calc(double num1, String ^oper_char, double num2)
	{
		if(oper_char == "+")
		{
			return num1 += num2;
		}
		else if(oper_char == "-")
		{
			return num1 -= num2;
		}
		else if(oper_char == "*")
		{
			return num1 *= num2;
		}
		else if(oper_char == "/")
		{
			return num1 /= num2;
		}
		else
		{
			return num1;
		}
	}

	//=============================== END Calculation Functions ==============================================
	//=============================== Dragging Window ==============================================
	System::Void Calculator::mainWindow::tbl_TitleBar_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		is_dragging = true;
		//getting mouse cursor position
		drag_Cursor_point = Cursor->Position;
		//getting this(mainWindow) form location
		drag_WindowForm_Point = mainWindow::Location;
	}

	System::Void mainWindow::tbl_TitleBar_MouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		//Only if left mouse button down on window form clicked
		if(e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			Point new_position = Point::Subtract(Cursor->Position, System::Drawing::Size(drag_Cursor_point));
			mainWindow::Location = Point::Add(drag_WindowForm_Point, System::Drawing::Size(new_position));
		}
	}

	System::Void Calculator::mainWindow::tbl_TitleBar_MouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		is_dragging = false;
	}
	//=============================== END  Dragging Window ==============================================

	//============================== Window Buttons  ===========================================================
	System::Void Calculator::mainWindow::window_Action_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		//tabindex:
		// 0 - close window
		// 1 - maximize
		// 2 - minimize

		Button ^action_Btn = safe_cast<Button ^>(sender);
		if(action_Btn->TabIndex == 0)
		{
			this->Close();
		}
		if(action_Btn->TabIndex == 1)
		{
		}
		if(action_Btn->TabIndex == 2)
		{
		}
	}
	//============================== End Window Buttons  ===========================================================

	//============================== Hidding Carret From TextBox ===========================================================
	System::Void mainWindow::tb_MainCalcText_MouseClick(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		HWND Caret;
		Caret = (HWND)(tb_MainCalcText->Handle.ToPointer());

		//Had to cast Rich Text Box to HWND to hide caret from blinking, using static_cast<HWND>
		HideCaret(Caret);
	}
	System::Void mainWindow::tb_MainCalcText_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		HWND Caret;
		Caret = (HWND)(tb_MainCalcText->Handle.ToPointer());

		//Had to cast Rich Text Box to HWND to hide caret from blinking, using static_cast<HWND>
		HideCaret(Caret);
	}

	//============================== End Hidding Carret From TextBox===========================================================
	//
	//==============================Number Buttons===========================================================
	System::Void Calculator::mainWindow::number_Inputs(System::Object ^sender, System::EventArgs ^e)
	{
		number_in = safe_cast<Button ^>(sender);
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Text = number_in->Text;
			tb_MainCalcText->Modified = true;
		}
		else if(is_operator == true)
		{
			if(is_operator == true && tb_MainCalcText->Modified == true)
			{
				tb_MainCalcText->Text += number_in->Text;
				tb_MainCalcText->Modified = true;
			}
			else
			{
				tb_MainCalcText->Text = number_in->Text;
				tb_MainCalcText->Modified = true;
			}
		}
		else
		{
			tb_MainCalcText->Text += number_in->Text;
		}
	}
	//========================================End Number buttons=====================================================
	//=============================Operator buttons +,-,*,^,/,. =====================================================

	System::Void Calculator::mainWindow::operation_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		btn_operator = safe_cast<Button ^>(sender);

		if(!is_operator)
		{
			oper_char = btn_operator->Text;
			num1 = double::Parse(tb_MainCalcText->Text);
			tb_smallWindow->Text = num1.ToString() + " " + oper_char + " ";
			is_operator = true;
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

		if(!tb_MainCalcText->Text->Contains(".") && !is_operator && !tb_MainCalcText->Modified)
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
		tb_MainCalcText->Text = tb_MainCalcText->Text->Remove(tb_MainCalcText->TextLength - 1);

		if(tb_MainCalcText->Text == "")
		{
			tb_MainCalcText->Text = "0";
		}
		tb_MainCalcText->Modified = true;
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
		is_operator = false;
		return System::Void();
	}
	System::Void mainWindow::btn_CE_Click(System::Object ^sender, System::EventArgs ^e)
	{
		tb_MainCalcText->Clear();
		if(tb_MainCalcText->Text == "")
		{
			tb_MainCalcText->Text = "0";
		}
		return System::Void();
	}
	//=============================END Operator buttons +,-,*,^,/,. ==============================================

	//===================================Operator equality = =====================================================
	System::Void mainWindow::btn_Equal_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Modified)
		{
			num2 = double::Parse(tb_MainCalcText->Text);
			tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
			num1 = Calc(num1, oper_char, num2);
			tb_MainCalcText->Text = num1.ToString();
		}
		else
		{
			tb_smallWindow->Text = num1.ToString() + " " + oper_char + " " + num2.ToString() + " =";
			num1 = Calc(num1, oper_char, num2);
			tb_MainCalcText->Text = num1.ToString();
		}

		return System::Void();
	}
	//============================== END Operator equality = =====================================================
}