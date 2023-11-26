#pragma once

namespace Calculator
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	//==================================================================================

/// <summary>
/// Summary for mainWindow
/// </summary>
	public ref class mainWindow : public System::Windows::Forms::Form
	{
	public:
		mainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainWindow()
		{
			if(components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel1;
	private: System::Windows::Forms::Button ^btn_Equal;

	private: System::Windows::Forms::Button ^btn_Period;

	private: System::Windows::Forms::Button ^btn_Zero;

	private: System::Windows::Forms::Button ^btn_Negative;

	private: System::Windows::Forms::Button ^button16;
	private: System::Windows::Forms::Button ^button15;
	private: System::Windows::Forms::Button ^button14;
	private: System::Windows::Forms::Button ^btn_One;

	private: System::Windows::Forms::Button ^button12;
	private: System::Windows::Forms::Button ^button11;
	private: System::Windows::Forms::Button ^btn_Five;

	private: System::Windows::Forms::Button ^button9;
	private: System::Windows::Forms::Button ^button8;
	private: System::Windows::Forms::Button ^button7;
	private: System::Windows::Forms::Button ^button6;
	private: System::Windows::Forms::Button ^button5;
	private: System::Windows::Forms::Button ^button4;
	private: System::Windows::Forms::Button ^button3;
	private: System::Windows::Forms::Button ^button2;
	private: System::Windows::Forms::Button ^button1;
	private: System::Windows::Forms::TableLayoutPanel ^tbl_TitleBar;

	private: System::Windows::Forms::Button ^btn_Close;
	private: System::Windows::Forms::TextBox ^textBox1;

	private: System::ComponentModel::IContainer ^components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_Equal = (gcnew System::Windows::Forms::Button());
			this->btn_Period = (gcnew System::Windows::Forms::Button());
			this->btn_Zero = (gcnew System::Windows::Forms::Button());
			this->btn_Negative = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btn_One = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_Five = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbl_TitleBar = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_Close = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tbl_TitleBar->SuspendLayout();
			this->SuspendLayout();
			//
			// tableLayoutPanel1
			//
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
																								 | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->Controls->Add(this->btn_Equal, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_Period, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_Zero, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->btn_Negative, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button16, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button15, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button14, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_One, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button12, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_Five, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 161);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(354, 368);
			this->tableLayoutPanel1->TabIndex = 0;
			//
			// btn_Equal
			//
			this->btn_Equal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Equal->Location = System::Drawing::Point(265, 293);
			this->btn_Equal->Margin = System::Windows::Forms::Padding(1);
			this->btn_Equal->Name = L"btn_Equal";
			this->btn_Equal->Size = System::Drawing::Size(88, 74);
			this->btn_Equal->TabIndex = 19;
			this->btn_Equal->Text = L"=";
			this->btn_Equal->UseVisualStyleBackColor = true;
			//
			// btn_Period
			//
			this->btn_Period->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Period->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Period->Location = System::Drawing::Point(177, 293);
			this->btn_Period->Margin = System::Windows::Forms::Padding(1);
			this->btn_Period->Name = L"btn_Period";
			this->btn_Period->Size = System::Drawing::Size(86, 74);
			this->btn_Period->TabIndex = 18;
			this->btn_Period->Text = L".";
			this->btn_Period->UseVisualStyleBackColor = true;
			//
			// btn_Zero
			//
			this->btn_Zero->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Zero->Location = System::Drawing::Point(89, 293);
			this->btn_Zero->Margin = System::Windows::Forms::Padding(1);
			this->btn_Zero->Name = L"btn_Zero";
			this->btn_Zero->Size = System::Drawing::Size(86, 74);
			this->btn_Zero->TabIndex = 17;
			this->btn_Zero->Text = L"0";
			this->btn_Zero->UseVisualStyleBackColor = true;
			//
			// btn_Negative
			//
			this->btn_Negative->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Negative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Negative->Location = System::Drawing::Point(1, 293);
			this->btn_Negative->Margin = System::Windows::Forms::Padding(1);
			this->btn_Negative->Name = L"btn_Negative";
			this->btn_Negative->Size = System::Drawing::Size(86, 74);
			this->btn_Negative->TabIndex = 16;
			this->btn_Negative->Text = L"+/-";
			this->btn_Negative->UseVisualStyleBackColor = true;
			//
			// button16
			//
			this->button16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button16->Location = System::Drawing::Point(265, 220);
			this->button16->Margin = System::Windows::Forms::Padding(1);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(88, 71);
			this->button16->TabIndex = 15;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			//
			// button15
			//
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button15->Location = System::Drawing::Point(177, 220);
			this->button15->Margin = System::Windows::Forms::Padding(1);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(86, 71);
			this->button15->TabIndex = 14;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = true;
			//
			// button14
			//
			this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button14->Location = System::Drawing::Point(89, 220);
			this->button14->Margin = System::Windows::Forms::Padding(1);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(86, 71);
			this->button14->TabIndex = 13;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			//
			// btn_One
			//
			this->btn_One->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_One->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_One->Location = System::Drawing::Point(1, 220);
			this->btn_One->Margin = System::Windows::Forms::Padding(1);
			this->btn_One->Name = L"btn_One";
			this->btn_One->Size = System::Drawing::Size(86, 71);
			this->btn_One->TabIndex = 12;
			this->btn_One->Text = L"1";
			this->btn_One->UseVisualStyleBackColor = true;
			//
			// button12
			//
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button12->Location = System::Drawing::Point(265, 147);
			this->button12->Margin = System::Windows::Forms::Padding(1);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(88, 71);
			this->button12->TabIndex = 11;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			//
			// button11
			//
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button11->Location = System::Drawing::Point(177, 147);
			this->button11->Margin = System::Windows::Forms::Padding(1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(86, 71);
			this->button11->TabIndex = 10;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			//
			// btn_Five
			//
			this->btn_Five->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Five->Location = System::Drawing::Point(89, 147);
			this->btn_Five->Margin = System::Windows::Forms::Padding(1);
			this->btn_Five->Name = L"btn_Five";
			this->btn_Five->Size = System::Drawing::Size(86, 71);
			this->btn_Five->TabIndex = 9;
			this->btn_Five->Text = L"5";
			this->btn_Five->UseVisualStyleBackColor = true;
			//
			// button9
			//
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button9->Location = System::Drawing::Point(1, 147);
			this->button9->Margin = System::Windows::Forms::Padding(1);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 71);
			this->button9->TabIndex = 8;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			//
			// button8
			//
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(265, 74);
			this->button8->Margin = System::Windows::Forms::Padding(1);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 71);
			this->button8->TabIndex = 7;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = true;
			//
			// button7
			//
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button7->Location = System::Drawing::Point(177, 74);
			this->button7->Margin = System::Windows::Forms::Padding(1);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 71);
			this->button7->TabIndex = 6;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			//
			// button6
			//
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button6->Location = System::Drawing::Point(89, 74);
			this->button6->Margin = System::Windows::Forms::Padding(1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 71);
			this->button6->TabIndex = 5;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			//
			// button5
			//
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button5->Location = System::Drawing::Point(1, 74);
			this->button5->Margin = System::Windows::Forms::Padding(1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 71);
			this->button5->TabIndex = 4;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			//
			// button4
			//
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button4->Location = System::Drawing::Point(265, 1);
			this->button4->Margin = System::Windows::Forms::Padding(1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 71);
			this->button4->TabIndex = 3;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			//
			// button3
			//
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button3->Location = System::Drawing::Point(177, 1);
			this->button3->Margin = System::Windows::Forms::Padding(1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 71);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			//
			// button2
			//
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button2->Location = System::Drawing::Point(89, 1);
			this->button2->Margin = System::Windows::Forms::Padding(1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 71);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			//
			// button1
			//
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->button1->Location = System::Drawing::Point(1, 1);
			this->button1->Margin = System::Windows::Forms::Padding(1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			//
			// tbl_TitleBar
			//
			this->tbl_TitleBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							 | System::Windows::Forms::AnchorStyles::Left)
																							| System::Windows::Forms::AnchorStyles::Right));
			this->tbl_TitleBar->ColumnCount = 4;
			this->tbl_TitleBar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 66.48643F)));
			this->tbl_TitleBar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 11.17119F)));
			this->tbl_TitleBar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 11.17119F)));
			this->tbl_TitleBar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 11.17119F)));
			this->tbl_TitleBar->Controls->Add(this->btn_Close, 3, 0);
			this->tbl_TitleBar->Location = System::Drawing::Point(0, 0);
			this->tbl_TitleBar->Name = L"tbl_TitleBar";
			this->tbl_TitleBar->RowCount = 1;
			this->tbl_TitleBar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tbl_TitleBar->Size = System::Drawing::Size(354, 35);
			this->tbl_TitleBar->TabIndex = 2;
			this->tbl_TitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tbl_TitleBar_MouseDown);
			this->tbl_TitleBar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tbl_TitleBar_MouseMove);
			this->tbl_TitleBar->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tbl_TitleBar_MouseUp);
			//
			// btn_Close
			//
			this->btn_Close->BackColor = System::Drawing::Color::Transparent;
			this->btn_Close->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Close->Location = System::Drawing::Point(313, 0);
			this->btn_Close->Margin = System::Windows::Forms::Padding(0);
			this->btn_Close->Name = L"btn_Close";
			this->btn_Close->Size = System::Drawing::Size(41, 35);
			this->btn_Close->TabIndex = 0;
			this->btn_Close->Text = L"X";
			this->btn_Close->UseVisualStyleBackColor = false;
			this->btn_Close->Click += gcnew System::EventHandler(this, &mainWindow::button10_Click);
			//
			// textBox1
			//
			this->textBox1->AllowDrop = true;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Location = System::Drawing::Point(44, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->WordWrap = false;
			//
			// mainWindow
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(354, 529);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tbl_TitleBar);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(354, 529);
			this->Name = L"mainWindow";
			this->Text = L"mainWindow";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tbl_TitleBar->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//***************************************************************************************
	//Variables that needed to change draging from windows
		bool draging_Window = false;
		Point drag_Cursor_point;
		Point drag_WindowForm_Point;

	private: System::Void tbl_TitleBar_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		draging_Window = true;
		//getting mouse cursor position
		drag_Cursor_point = Cursor->Position;
		//getting this form location
		drag_WindowForm_Point = mainWindow::Location;

	}

	private: System::Void tbl_TitleBar_MouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		if(e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			Point new_position = Point::Subtract(Cursor->Position, System::Drawing::Size(drag_Cursor_point));
			mainWindow::Location = Point::Add(drag_WindowForm_Point, System::Drawing::Size(new_position));

		}

	}

	private: System::Void tbl_TitleBar_MouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
	{
		draging_Window = false;
	}

	private: System::Void button10_Click(System::Object ^sender, System::EventArgs ^e)
	{
		this->Close();
	}

	};
}
