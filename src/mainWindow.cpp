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
	//=============================== Dragging Window ==============================================

	System::Void Calculator::mainWindow::tbl_TitleBar_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		is_dragging = true;
		//getting mouse cursor position
		drag_Cursor_point = Cursor->Position;
		//getting this form location
		drag_WindowForm_Point = mainWindow::Location;
	}
	System::Void mainWindow::tbl_TitleBar_MouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		//Only if left mouse button clicked
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
			tb_MainCalcText->Text = "";
			tb_MainCalcText->Text += number_in->Text;
		} else
		{
			tb_MainCalcText->Text += number_in->Text;
		}
	}
	//=============================================End Number buttons=====================================================
	//=============================Operator buttons +,-,=,*,^,/,. =====================================================

	System::Void Calculator::mainWindow::operation_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		operator_char = safe_cast<Button ^>(sender);
		oper = operator_char->Text;

		if(tb_smallWindow->Text->EndsWith("+") || tb_smallWindow->Text->EndsWith("-") ||
		   tb_smallWindow->Text->EndsWith("*") || tb_smallWindow->Text->EndsWith("/") ||
		   tb_smallWindow->Text->EndsWith("^"))
		{
			tb_smallWindow->Text = tb_MainCalcText->Text->Remove(tb_MainCalcText->Text->Length - 1);
			num1 = double::Parse(tb_MainCalcText->Text);
		} else
		{
			num1 = double::Parse(tb_MainCalcText->Text);
		}
		if(tb_smallWindow->Text->EndsWith("+") || tb_smallWindow->Text->EndsWith("-") ||
		   tb_smallWindow->Text->EndsWith("*") || tb_smallWindow->Text->EndsWith("/") ||
		   tb_smallWindow->Text->EndsWith("^"))
		{
			tb_smallWindow->Text += tb_MainCalcText->Text->Remove(tb_MainCalcText->Text->Length - 1);
			tb_smallWindow->Text += oper;
		} else
		{
			tb_smallWindow->Text = num1.ToString() + oper;
		}
	}
	System::Void mainWindow::decimal_Buttons(System::Object ^sender, System::EventArgs ^e)
	{
		Button ^decimal_Button = safe_cast<Button ^>(sender);

		if(!tb_MainCalcText->Text->Contains("."))
		{
			tb_MainCalcText->Text += decimal_Button->Text;
		}
	}
	//=============================Operator buttons +,-,=,*,^,/ =====================================================
}