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
	private: System::Windows::Forms::Button ^btn_Add;

	private: System::Windows::Forms::Button ^btn_Three;

	private: System::Windows::Forms::Button ^btn_Two;
	private: System::Windows::Forms::Button ^btn_One;
	private: System::Windows::Forms::Button ^btn_Substract;

	private: System::Windows::Forms::Button ^btn_Six;

	private: System::Windows::Forms::Button ^btn_Five;
	private: System::Windows::Forms::Button ^btn_Four;
	private: System::Windows::Forms::Button ^btn_Multiply;

	private: System::Windows::Forms::Button ^btn_Nine;

	private: System::Windows::Forms::Button ^btn_Eight;

	private: System::Windows::Forms::Button ^btn_Seven;
	private: System::Windows::Forms::Button ^btn_Division;

	private: System::Windows::Forms::Button ^button3;
	private: System::Windows::Forms::Button ^button2;
	private: System::Windows::Forms::Button ^button1;
	private: System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel5;

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
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_Three = (gcnew System::Windows::Forms::Button());
			this->btn_Two = (gcnew System::Windows::Forms::Button());
			this->btn_One = (gcnew System::Windows::Forms::Button());
			this->btn_Substract = (gcnew System::Windows::Forms::Button());
			this->btn_Six = (gcnew System::Windows::Forms::Button());
			this->btn_Five = (gcnew System::Windows::Forms::Button());
			this->btn_Four = (gcnew System::Windows::Forms::Button());
			this->btn_Multiply = (gcnew System::Windows::Forms::Button());
			this->btn_Nine = (gcnew System::Windows::Forms::Button());
			this->btn_Eight = (gcnew System::Windows::Forms::Button());
			this->btn_Seven = (gcnew System::Windows::Forms::Button());
			this->btn_Division = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
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
			this->tableLayoutPanel1->Controls->Add(this->btn_Add, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_Three, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_Two, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_One, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn_Substract, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_Six, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_Five, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_Four, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn_Multiply, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_Nine, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_Eight, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_Seven, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn_Division, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 161);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.00001F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
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
			// btn_Add
			//
			this->btn_Add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Add->Location = System::Drawing::Point(265, 220);
			this->btn_Add->Margin = System::Windows::Forms::Padding(1);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(88, 71);
			this->btn_Add->TabIndex = 15;
			this->btn_Add->Text = L"+";
			this->btn_Add->UseVisualStyleBackColor = true;
			//
			// btn_Three
			//
			this->btn_Three->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Three->Location = System::Drawing::Point(177, 220);
			this->btn_Three->Margin = System::Windows::Forms::Padding(1);
			this->btn_Three->Name = L"btn_Three";
			this->btn_Three->Size = System::Drawing::Size(86, 71);
			this->btn_Three->TabIndex = 14;
			this->btn_Three->Text = L"3";
			this->btn_Three->UseVisualStyleBackColor = true;
			//
			// btn_Two
			//
			this->btn_Two->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Two->Location = System::Drawing::Point(89, 220);
			this->btn_Two->Margin = System::Windows::Forms::Padding(1);
			this->btn_Two->Name = L"btn_Two";
			this->btn_Two->Size = System::Drawing::Size(86, 71);
			this->btn_Two->TabIndex = 13;
			this->btn_Two->Text = L"2";
			this->btn_Two->UseVisualStyleBackColor = true;
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
			// btn_Substract
			//
			this->btn_Substract->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Substract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Substract->Location = System::Drawing::Point(265, 147);
			this->btn_Substract->Margin = System::Windows::Forms::Padding(1);
			this->btn_Substract->Name = L"btn_Substract";
			this->btn_Substract->Size = System::Drawing::Size(88, 71);
			this->btn_Substract->TabIndex = 11;
			this->btn_Substract->Text = L"-";
			this->btn_Substract->UseVisualStyleBackColor = true;
			//
			// btn_Six
			//
			this->btn_Six->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Six->Location = System::Drawing::Point(177, 147);
			this->btn_Six->Margin = System::Windows::Forms::Padding(1);
			this->btn_Six->Name = L"btn_Six";
			this->btn_Six->Size = System::Drawing::Size(86, 71);
			this->btn_Six->TabIndex = 10;
			this->btn_Six->Text = L"6";
			this->btn_Six->UseVisualStyleBackColor = true;
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
			// btn_Four
			//
			this->btn_Four->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Four->Location = System::Drawing::Point(1, 147);
			this->btn_Four->Margin = System::Windows::Forms::Padding(1);
			this->btn_Four->Name = L"btn_Four";
			this->btn_Four->Size = System::Drawing::Size(86, 71);
			this->btn_Four->TabIndex = 8;
			this->btn_Four->Text = L"4";
			this->btn_Four->UseVisualStyleBackColor = true;
			//
			// btn_Multiply
			//
			this->btn_Multiply->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->btn_Multiply->Location = System::Drawing::Point(265, 74);
			this->btn_Multiply->Margin = System::Windows::Forms::Padding(1);
			this->btn_Multiply->Name = L"btn_Multiply";
			this->btn_Multiply->Size = System::Drawing::Size(88, 71);
			this->btn_Multiply->TabIndex = 7;
			this->btn_Multiply->Text = L"*";
			this->btn_Multiply->UseVisualStyleBackColor = true;
			//
			// btn_Nine
			//
			this->btn_Nine->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Nine->Location = System::Drawing::Point(177, 74);
			this->btn_Nine->Margin = System::Windows::Forms::Padding(1);
			this->btn_Nine->Name = L"btn_Nine";
			this->btn_Nine->Size = System::Drawing::Size(86, 71);
			this->btn_Nine->TabIndex = 6;
			this->btn_Nine->Text = L"9";
			this->btn_Nine->UseVisualStyleBackColor = true;
			//
			// btn_Eight
			//
			this->btn_Eight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Eight->Location = System::Drawing::Point(89, 74);
			this->btn_Eight->Margin = System::Windows::Forms::Padding(1);
			this->btn_Eight->Name = L"btn_Eight";
			this->btn_Eight->Size = System::Drawing::Size(86, 71);
			this->btn_Eight->TabIndex = 5;
			this->btn_Eight->Text = L"8";
			this->btn_Eight->UseVisualStyleBackColor = true;
			//
			// btn_Seven
			//
			this->btn_Seven->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Seven->Location = System::Drawing::Point(1, 74);
			this->btn_Seven->Margin = System::Windows::Forms::Padding(1);
			this->btn_Seven->Name = L"btn_Seven";
			this->btn_Seven->Size = System::Drawing::Size(86, 71);
			this->btn_Seven->TabIndex = 4;
			this->btn_Seven->Text = L"7";
			this->btn_Seven->UseVisualStyleBackColor = true;
			//
			// btn_Division
			//
			this->btn_Division->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->btn_Division->Location = System::Drawing::Point(265, 1);
			this->btn_Division->Margin = System::Windows::Forms::Padding(1);
			this->btn_Division->Name = L"btn_Division";
			this->btn_Division->Size = System::Drawing::Size(88, 71);
			this->btn_Division->TabIndex = 3;
			this->btn_Division->Text = L"/";
			this->btn_Division->UseVisualStyleBackColor = true;
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
			// tableLayoutPanel2
			//
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.92357F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.38217F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.69427F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(354, 158);
			this->tableLayoutPanel2->TabIndex = 1;
			//
			// tableLayoutPanel3
			//
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  87.33766F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  12.66234F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
																								  36)));
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(1, 1);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(352, 24);
			this->tableLayoutPanel3->TabIndex = 0;
			//
			// tableLayoutPanel4
			//
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
																								  308)));
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(1, 26);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(352, 31);
			this->tableLayoutPanel4->TabIndex = 1;
			//
			// tableLayoutPanel5
			//
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(1, 58);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 26.26263F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 73.73737F)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(352, 99);
			this->tableLayoutPanel5->TabIndex = 2;
			//
			// mainWindow
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(354, 529);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(354, 529);
			this->Name = L"mainWindow";
			this->Text = L"mainWindow";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
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
