﻿#include "mainWindow.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

namespace Calculator
{
	//==============================Number Buttons===========================================================
	System::Void mainWindow::btn_Zero_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "0";
	}

	System::Void mainWindow::btn_One_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "1";
		return System::Void();
	}

	System::Void mainWindow::btn_Two_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "2";
		return System::Void();
	}

	System::Void mainWindow::btn_Three_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "3";
		return System::Void();
	}

	System::Void mainWindow::btn_Four_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "4";
		return System::Void();
	}

	System::Void mainWindow::btn_Five_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "5";
		return System::Void();
	}

	System::Void mainWindow::btn_Six_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "6";
		return System::Void();
	}

	System::Void mainWindow::btn_Seven_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "7";
		return System::Void();
	}

	System::Void mainWindow::btn_Eight_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "8";
		return System::Void();
	}

	System::Void mainWindow::btn_Nine_Click(System::Object ^sender, System::EventArgs ^e)
	{
		if(tb_MainCalcText->Text == "0")
		{
			tb_MainCalcText->Clear();
		}
		tb_MainCalcText->Text += "9";
		return System::Void();
	}
}