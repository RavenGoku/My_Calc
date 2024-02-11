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
			Control::DefaultFont->Size.Equals(54);
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
	private:
		System::ComponentModel::IContainer ^components;
		System::Windows::Forms::Button ^btn_Add;
		System::Windows::Forms::Button ^btn_BackSpace;
		System::Windows::Forms::Button ^btn_CE;
		System::Windows::Forms::Button ^btn_Clear;
		System::Windows::Forms::Button ^btn_Division;
		System::Windows::Forms::Button ^btn_Eight;
		System::Windows::Forms::Button ^btn_Equal;
		System::Windows::Forms::Button ^btn_Five;
		System::Windows::Forms::Button ^btn_Four;
		System::Windows::Forms::Button ^btn_Multiply;
		System::Windows::Forms::Button ^btn_Negative;
		System::Windows::Forms::Button ^btn_Nine;
		System::Windows::Forms::Button ^btn_One;
		System::Windows::Forms::Button ^btn_Percent;
		System::Windows::Forms::Button ^btn_Period;
		System::Windows::Forms::Button ^btn_Seven;
		System::Windows::Forms::Button ^btn_Six;
		System::Windows::Forms::Button ^btn_Substract;
		System::Windows::Forms::Button ^btn_Three;
		System::Windows::Forms::Button ^btn_Two;
		System::Windows::Forms::Button ^btn_Zero;
	private: System::Windows::Forms::Button ^btn_OneDivBy;

	private: System::Windows::Forms::Button ^btn_SqrPower;

		   System::Windows::Forms::Button ^btn_SqrRoot;
	private: System::Windows::Forms::TableLayoutPanel ^tbl_LayoutButtons;

		   System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel2;
		   System::Windows::Forms::TableLayoutPanel ^tableLayoutPanel4;
		   System::Windows::Forms::TextBox ^tb_MainCalcText;
		   System::Windows::Forms::TextBox ^tb_smallWindow;
	private: System::Windows::Forms::TableLayoutPanel ^tbl_LayoutWindows;

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
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_BackSpace = (gcnew System::Windows::Forms::Button());
			this->btn_CE = (gcnew System::Windows::Forms::Button());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->btn_Division = (gcnew System::Windows::Forms::Button());
			this->btn_Eight = (gcnew System::Windows::Forms::Button());
			this->btn_Equal = (gcnew System::Windows::Forms::Button());
			this->btn_Five = (gcnew System::Windows::Forms::Button());
			this->btn_Four = (gcnew System::Windows::Forms::Button());
			this->btn_Multiply = (gcnew System::Windows::Forms::Button());
			this->btn_Negative = (gcnew System::Windows::Forms::Button());
			this->btn_Nine = (gcnew System::Windows::Forms::Button());
			this->btn_One = (gcnew System::Windows::Forms::Button());
			this->btn_Percent = (gcnew System::Windows::Forms::Button());
			this->btn_Period = (gcnew System::Windows::Forms::Button());
			this->btn_Seven = (gcnew System::Windows::Forms::Button());
			this->btn_Six = (gcnew System::Windows::Forms::Button());
			this->btn_Substract = (gcnew System::Windows::Forms::Button());
			this->btn_Three = (gcnew System::Windows::Forms::Button());
			this->btn_Two = (gcnew System::Windows::Forms::Button());
			this->btn_Zero = (gcnew System::Windows::Forms::Button());
			this->btn_OneDivBy = (gcnew System::Windows::Forms::Button());
			this->btn_SqrPower = (gcnew System::Windows::Forms::Button());
			this->btn_SqrRoot = (gcnew System::Windows::Forms::Button());
			this->tbl_LayoutButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbl_LayoutWindows = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tb_smallWindow = (gcnew System::Windows::Forms::TextBox());
			this->tb_MainCalcText = (gcnew System::Windows::Forms::TextBox());
			this->tbl_LayoutButtons->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tbl_LayoutWindows->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Add
			// 
			this->btn_Add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->btn_Add->Location = System::Drawing::Point(355, 301);
			this->btn_Add->Margin = System::Windows::Forms::Padding(1);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(116, 73);
			this->btn_Add->TabIndex = 1;
			this->btn_Add->Text = L"+";
			this->btn_Add->UseVisualStyleBackColor = true;
			this->btn_Add->Click += gcnew System::EventHandler(this, &mainWindow::operation_Buttons);
			// 
			// btn_BackSpace
			// 
			this->btn_BackSpace->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_BackSpace->Font = (gcnew System::Drawing::Font(L"Segoe Fluent Icons", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->btn_BackSpace->Location = System::Drawing::Point(355, 1);
			this->btn_BackSpace->Margin = System::Windows::Forms::Padding(1);
			this->btn_BackSpace->Name = L"btn_BackSpace";
			this->btn_BackSpace->Size = System::Drawing::Size(116, 73);
			this->btn_BackSpace->TabIndex = 23;
			this->btn_BackSpace->Text = L"";
			this->btn_BackSpace->UseVisualStyleBackColor = true;
			this->btn_BackSpace->Click += gcnew System::EventHandler(this, &mainWindow::btn_BackSpace_Click);
			// 
			// btn_CE
			// 
			this->btn_CE->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_CE->Font = (gcnew System::Drawing::Font(L"MS PGothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->btn_CE->Location = System::Drawing::Point(119, 1);
			this->btn_CE->Margin = System::Windows::Forms::Padding(1);
			this->btn_CE->Name = L"btn_CE";
			this->btn_CE->Size = System::Drawing::Size(116, 73);
			this->btn_CE->TabIndex = 21;
			this->btn_CE->Text = L"CE";
			this->btn_CE->UseVisualStyleBackColor = true;
			this->btn_CE->Click += gcnew System::EventHandler(this, &mainWindow::btn_CE_Click);
			// 
			// btn_Clear
			// 
			this->btn_Clear->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Clear->Font = (gcnew System::Drawing::Font(L"MS PGothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->btn_Clear->Location = System::Drawing::Point(237, 1);
			this->btn_Clear->Margin = System::Windows::Forms::Padding(1);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(116, 73);
			this->btn_Clear->TabIndex = 22;
			this->btn_Clear->Text = L"C";
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &mainWindow::btn_Clear_Click);
			// 
			// btn_Division
			// 
			this->btn_Division->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Division->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->btn_Division->Location = System::Drawing::Point(355, 76);
			this->btn_Division->Margin = System::Windows::Forms::Padding(1);
			this->btn_Division->Name = L"btn_Division";
			this->btn_Division->Size = System::Drawing::Size(116, 73);
			this->btn_Division->TabIndex = 4;
			this->btn_Division->Text = L"÷";
			this->btn_Division->UseVisualStyleBackColor = true;
			this->btn_Division->Click += gcnew System::EventHandler(this, &mainWindow::operation_Buttons);
			// 
			// btn_Eight
			// 
			this->btn_Eight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Eight->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->btn_Eight->Location = System::Drawing::Point(119, 151);
			this->btn_Eight->Margin = System::Windows::Forms::Padding(1);
			this->btn_Eight->Name = L"btn_Eight";
			this->btn_Eight->Size = System::Drawing::Size(116, 73);
			this->btn_Eight->TabIndex = 5;
			this->btn_Eight->Text = L"8";
			this->btn_Eight->UseVisualStyleBackColor = true;
			this->btn_Eight->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Equal
			// 
			this->btn_Equal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Equal->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->btn_Equal->Location = System::Drawing::Point(355, 376);
			this->btn_Equal->Margin = System::Windows::Forms::Padding(1);
			this->btn_Equal->Name = L"btn_Equal";
			this->btn_Equal->Size = System::Drawing::Size(116, 76);
			this->btn_Equal->TabIndex = 0;
			this->btn_Equal->Text = L"=";
			this->btn_Equal->UseVisualStyleBackColor = true;
			this->btn_Equal->Click += gcnew System::EventHandler(this, &mainWindow::btn_Equal_Click);
			// 
			// btn_Five
			// 
			this->btn_Five->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Five->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->btn_Five->Location = System::Drawing::Point(119, 226);
			this->btn_Five->Margin = System::Windows::Forms::Padding(1);
			this->btn_Five->Name = L"btn_Five";
			this->btn_Five->Size = System::Drawing::Size(116, 73);
			this->btn_Five->TabIndex = 9;
			this->btn_Five->Text = L"5";
			this->btn_Five->UseVisualStyleBackColor = true;
			this->btn_Five->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Four
			// 
			this->btn_Four->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Four->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->btn_Four->Location = System::Drawing::Point(1, 226);
			this->btn_Four->Margin = System::Windows::Forms::Padding(1);
			this->btn_Four->Name = L"btn_Four";
			this->btn_Four->Size = System::Drawing::Size(116, 73);
			this->btn_Four->TabIndex = 8;
			this->btn_Four->Text = L"4";
			this->btn_Four->UseVisualStyleBackColor = true;
			this->btn_Four->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Multiply
			// 
			this->btn_Multiply->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Multiply->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->btn_Multiply->Location = System::Drawing::Point(355, 151);
			this->btn_Multiply->Margin = System::Windows::Forms::Padding(1);
			this->btn_Multiply->Name = L"btn_Multiply";
			this->btn_Multiply->Size = System::Drawing::Size(116, 73);
			this->btn_Multiply->TabIndex = 3;
			this->btn_Multiply->Text = L"×";
			this->btn_Multiply->UseVisualStyleBackColor = true;
			this->btn_Multiply->Click += gcnew System::EventHandler(this, &mainWindow::operation_Buttons);
			// 
			// btn_Negative
			// 
			this->btn_Negative->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Negative->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->btn_Negative->Location = System::Drawing::Point(1, 376);
			this->btn_Negative->Margin = System::Windows::Forms::Padding(1);
			this->btn_Negative->Name = L"btn_Negative";
			this->btn_Negative->Size = System::Drawing::Size(116, 76);
			this->btn_Negative->TabIndex = 7;
			this->btn_Negative->Text = L"⁺/₋";
			this->btn_Negative->UseVisualStyleBackColor = true;
			this->btn_Negative->Click += gcnew System::EventHandler(this, &mainWindow::negative_Button_Click);
			// 
			// btn_Nine
			// 
			this->btn_Nine->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Nine->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->btn_Nine->Location = System::Drawing::Point(237, 151);
			this->btn_Nine->Margin = System::Windows::Forms::Padding(1);
			this->btn_Nine->Name = L"btn_Nine";
			this->btn_Nine->Size = System::Drawing::Size(116, 73);
			this->btn_Nine->TabIndex = 6;
			this->btn_Nine->Text = L"9";
			this->btn_Nine->UseVisualStyleBackColor = true;
			this->btn_Nine->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_One
			// 
			this->btn_One->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_One->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->btn_One->Location = System::Drawing::Point(1, 301);
			this->btn_One->Margin = System::Windows::Forms::Padding(1);
			this->btn_One->Name = L"btn_One";
			this->btn_One->Size = System::Drawing::Size(116, 73);
			this->btn_One->TabIndex = 1;
			this->btn_One->Text = L"1";
			this->btn_One->UseVisualStyleBackColor = true;
			this->btn_One->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Percent
			// 
			this->btn_Percent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Percent->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->btn_Percent->Location = System::Drawing::Point(1, 1);
			this->btn_Percent->Margin = System::Windows::Forms::Padding(1);
			this->btn_Percent->Name = L"btn_Percent";
			this->btn_Percent->Size = System::Drawing::Size(116, 73);
			this->btn_Percent->TabIndex = 5;
			this->btn_Percent->Text = L"%";
			this->btn_Percent->UseVisualStyleBackColor = true;
			this->btn_Percent->Click += gcnew System::EventHandler(this, &mainWindow::special_operation_Buttons);
			// 
			// btn_Period
			// 
			this->btn_Period->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Period->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->btn_Period->Location = System::Drawing::Point(237, 376);
			this->btn_Period->Margin = System::Windows::Forms::Padding(1);
			this->btn_Period->Name = L"btn_Period";
			this->btn_Period->Size = System::Drawing::Size(116, 76);
			this->btn_Period->TabIndex = 6;
			this->btn_Period->Text = L".";
			this->btn_Period->UseVisualStyleBackColor = true;
			this->btn_Period->Click += gcnew System::EventHandler(this, &mainWindow::decimal_Buttons);
			// 
			// btn_Seven
			// 
			this->btn_Seven->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Seven->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->btn_Seven->Location = System::Drawing::Point(1, 151);
			this->btn_Seven->Margin = System::Windows::Forms::Padding(1);
			this->btn_Seven->Name = L"btn_Seven";
			this->btn_Seven->Size = System::Drawing::Size(116, 73);
			this->btn_Seven->TabIndex = 4;
			this->btn_Seven->Text = L"7";
			this->btn_Seven->UseVisualStyleBackColor = true;
			this->btn_Seven->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Six
			// 
			this->btn_Six->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Six->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->btn_Six->Location = System::Drawing::Point(237, 226);
			this->btn_Six->Margin = System::Windows::Forms::Padding(1);
			this->btn_Six->Name = L"btn_Six";
			this->btn_Six->Size = System::Drawing::Size(116, 73);
			this->btn_Six->TabIndex = 10;
			this->btn_Six->Text = L"6";
			this->btn_Six->UseVisualStyleBackColor = true;
			this->btn_Six->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Substract
			// 
			this->btn_Substract->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Substract->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->btn_Substract->Location = System::Drawing::Point(355, 226);
			this->btn_Substract->Margin = System::Windows::Forms::Padding(1);
			this->btn_Substract->Name = L"btn_Substract";
			this->btn_Substract->Size = System::Drawing::Size(116, 73);
			this->btn_Substract->TabIndex = 2;
			this->btn_Substract->Text = L"-";
			this->btn_Substract->UseVisualStyleBackColor = true;
			this->btn_Substract->Click += gcnew System::EventHandler(this, &mainWindow::operation_Buttons);
			// 
			// btn_Three
			// 
			this->btn_Three->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Three->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->btn_Three->Location = System::Drawing::Point(237, 301);
			this->btn_Three->Margin = System::Windows::Forms::Padding(1);
			this->btn_Three->Name = L"btn_Three";
			this->btn_Three->Size = System::Drawing::Size(116, 73);
			this->btn_Three->TabIndex = 14;
			this->btn_Three->Text = L"3";
			this->btn_Three->UseVisualStyleBackColor = true;
			this->btn_Three->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Two
			// 
			this->btn_Two->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Two->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->btn_Two->Location = System::Drawing::Point(119, 301);
			this->btn_Two->Margin = System::Windows::Forms::Padding(1);
			this->btn_Two->Name = L"btn_Two";
			this->btn_Two->Size = System::Drawing::Size(116, 73);
			this->btn_Two->TabIndex = 13;
			this->btn_Two->Text = L"2";
			this->btn_Two->UseVisualStyleBackColor = true;
			this->btn_Two->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_Zero
			// 
			this->btn_Zero->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_Zero->Font = (gcnew System::Drawing::Font(L"Narkisim", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->btn_Zero->Location = System::Drawing::Point(119, 376);
			this->btn_Zero->Margin = System::Windows::Forms::Padding(1);
			this->btn_Zero->Name = L"btn_Zero";
			this->btn_Zero->Size = System::Drawing::Size(116, 76);
			this->btn_Zero->TabIndex = 17;
			this->btn_Zero->Text = L"0";
			this->btn_Zero->UseVisualStyleBackColor = true;
			this->btn_Zero->Click += gcnew System::EventHandler(this, &mainWindow::number_Inputs);
			// 
			// btn_OneDivBy
			// 
			this->btn_OneDivBy->AccessibleName = L"1/";
			this->btn_OneDivBy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_OneDivBy->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->btn_OneDivBy->Location = System::Drawing::Point(1, 76);
			this->btn_OneDivBy->Margin = System::Windows::Forms::Padding(1);
			this->btn_OneDivBy->Name = L"btn_OneDivBy";
			this->btn_OneDivBy->Size = System::Drawing::Size(116, 73);
			this->btn_OneDivBy->TabIndex = 0;
			this->btn_OneDivBy->Text = L"⅟";
			this->btn_OneDivBy->UseVisualStyleBackColor = true;
			this->btn_OneDivBy->Click += gcnew System::EventHandler(this, &mainWindow::special_operation_Buttons);
			// 
			// btn_SqrPower
			// 
			this->btn_SqrPower->AccessibleName = L"sqr";
			this->btn_SqrPower->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_SqrPower->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->btn_SqrPower->Location = System::Drawing::Point(119, 76);
			this->btn_SqrPower->Margin = System::Windows::Forms::Padding(1);
			this->btn_SqrPower->Name = L"btn_SqrPower";
			this->btn_SqrPower->Size = System::Drawing::Size(116, 73);
			this->btn_SqrPower->TabIndex = 1;
			this->btn_SqrPower->Text = L"x²";
			this->btn_SqrPower->UseVisualStyleBackColor = true;
			this->btn_SqrPower->Click += gcnew System::EventHandler(this, &mainWindow::special_operation_Buttons);
			// 
			// btn_SqrRoot
			// 
			this->btn_SqrRoot->AccessibleName = L"√";
			this->btn_SqrRoot->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_SqrRoot->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->btn_SqrRoot->Location = System::Drawing::Point(237, 76);
			this->btn_SqrRoot->Margin = System::Windows::Forms::Padding(1);
			this->btn_SqrRoot->Name = L"btn_SqrRoot";
			this->btn_SqrRoot->Size = System::Drawing::Size(116, 73);
			this->btn_SqrRoot->TabIndex = 2;
			this->btn_SqrRoot->Text = L"√";
			this->btn_SqrRoot->UseVisualStyleBackColor = true;
			this->btn_SqrRoot->Click += gcnew System::EventHandler(this, &mainWindow::special_operation_Buttons);
			// 
			// tbl_LayoutButtons
			// 
			this->tbl_LayoutButtons->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																								  | System::Windows::Forms::AnchorStyles::Left)
																								 | System::Windows::Forms::AnchorStyles::Right));
			this->tbl_LayoutButtons->ColumnCount = 4;
			this->tbl_LayoutButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tbl_LayoutButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tbl_LayoutButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tbl_LayoutButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tbl_LayoutButtons->Controls->Add(this->btn_BackSpace, 3, 0);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Clear, 2, 0);
			this->tbl_LayoutButtons->Controls->Add(this->btn_CE, 1, 0);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Equal, 3, 5);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Period, 2, 5);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Zero, 1, 5);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Negative, 0, 5);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Add, 3, 4);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Three, 2, 4);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Two, 1, 4);
			this->tbl_LayoutButtons->Controls->Add(this->btn_One, 0, 4);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Substract, 3, 3);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Six, 2, 3);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Five, 1, 3);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Four, 0, 3);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Multiply, 3, 2);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Nine, 2, 2);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Eight, 1, 2);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Seven, 0, 2);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Division, 3, 1);
			this->tbl_LayoutButtons->Controls->Add(this->btn_SqrRoot, 2, 1);
			this->tbl_LayoutButtons->Controls->Add(this->btn_SqrPower, 1, 1);
			this->tbl_LayoutButtons->Controls->Add(this->btn_OneDivBy, 0, 1);
			this->tbl_LayoutButtons->Controls->Add(this->btn_Percent, 0, 0);
			this->tbl_LayoutButtons->Location = System::Drawing::Point(0, 198);
			this->tbl_LayoutButtons->Margin = System::Windows::Forms::Padding(0);
			this->tbl_LayoutButtons->Name = L"tbl_LayoutButtons";
			this->tbl_LayoutButtons->RowCount = 6;
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbl_LayoutButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbl_LayoutButtons->Size = System::Drawing::Size(472, 453);
			this->tbl_LayoutButtons->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tbl_LayoutWindows, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 28.08168F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 71.91832F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(472, 194);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
																								  411)));
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(1, 1);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(470, 53);
			this->tableLayoutPanel4->TabIndex = 1;
			// 
			// tbl_LayoutWindows
			// 
			this->tbl_LayoutWindows->ColumnCount = 1;
			this->tbl_LayoutWindows->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  100)));
			this->tbl_LayoutWindows->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
																								  20)));
			this->tbl_LayoutWindows->Controls->Add(this->tb_smallWindow, 0, 0);
			this->tbl_LayoutWindows->Controls->Add(this->tb_MainCalcText, 0, 1);
			this->tbl_LayoutWindows->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbl_LayoutWindows->Location = System::Drawing::Point(1, 55);
			this->tbl_LayoutWindows->Margin = System::Windows::Forms::Padding(0);
			this->tbl_LayoutWindows->Name = L"tbl_LayoutWindows";
			this->tbl_LayoutWindows->RowCount = 2;
			this->tbl_LayoutWindows->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 26.26263F)));
			this->tbl_LayoutWindows->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 73.73737F)));
			this->tbl_LayoutWindows->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbl_LayoutWindows->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbl_LayoutWindows->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbl_LayoutWindows->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbl_LayoutWindows->Size = System::Drawing::Size(470, 138);
			this->tbl_LayoutWindows->TabIndex = 2;
			// 
			// tb_smallWindow
			// 
			this->tb_smallWindow->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_smallWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tb_smallWindow->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(0)));
			this->tb_smallWindow->Location = System::Drawing::Point(3, 3);
			this->tb_smallWindow->Name = L"tb_smallWindow";
			this->tb_smallWindow->ReadOnly = true;
			this->tb_smallWindow->Size = System::Drawing::Size(464, 25);
			this->tb_smallWindow->TabIndex = 3;
			this->tb_smallWindow->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tb_smallWindow->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tb_smallWindow_MouseClick);
			this->tb_smallWindow->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tb_smallWindow_MouseDown);
			// 
			// tb_MainCalcText
			// 
			this->tb_MainCalcText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																								| System::Windows::Forms::AnchorStyles::Left)
																							   | System::Windows::Forms::AnchorStyles::Right));
			this->tb_MainCalcText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_MainCalcText->Font = (gcnew System::Drawing::Font(L"MS Gothic", 52, System::Drawing::FontStyle::Bold));
			this->tb_MainCalcText->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->tb_MainCalcText->Location = System::Drawing::Point(0, 36);
			this->tb_MainCalcText->Margin = System::Windows::Forms::Padding(0);
			this->tb_MainCalcText->MaxLength = 5;
			this->tb_MainCalcText->Name = L"tb_MainCalcText";
			this->tb_MainCalcText->ReadOnly = true;
			this->tb_MainCalcText->Size = System::Drawing::Size(470, 87);
			this->tb_MainCalcText->TabIndex = 2;
			this->tb_MainCalcText->Text = L"0";
			this->tb_MainCalcText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->tb_MainCalcText->WordWrap = false;
			this->tb_MainCalcText->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tb_MainCalcText_MouseClick);
			this->tb_MainCalcText->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainWindow::tb_MainCalcText_MouseDown);
			// 
			// mainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(472, 651);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tbl_LayoutButtons);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(472, 651);
			this->Name = L"mainWindow";
			this->Text = L"Calculator";
			this->tbl_LayoutButtons->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tbl_LayoutWindows->ResumeLayout(false);
			this->tbl_LayoutWindows->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//***************************************************************************************
		//Variables that are needed to draging windows around if nedded
		//bool is_dragging = false;
		//Point drag_Cursor_point;
		//Point drag_WindowForm_Point;

		//Supporting numbers
		double num1{}, num2{};

		//Conditional operators
		bool is_operator_clicked = false;;
		bool is_special_op_clicked = false;
		bool is_MainWindow_Modified = false;
		bool is_divide_by_zero = false;
		bool is_equal_clicked = false;

		//Calculation functions
		double Calc(double, String ^);
		double Calc(double, String ^, double);
		void mainWinSizeCheck();
		String ^oper_char = nullptr; //operator char
		String ^special_oper_char = nullptr;
		String ^temp_string_num1 = nullptr;
		String ^temp_string_num2 = nullptr;
		Button ^number_in = nullptr;
		Button ^btn_operator = nullptr;

		// Draging window
	//private: System::Void tbl_TitleBar_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	//private: System::Void tbl_TitleBar_MouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	//private: System::Void tbl_TitleBar_MouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);

		// Carret Hide
	private:
		System::Void tb_MainCalcText_MouseClick(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
		System::Void tb_MainCalcText_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
		System::Void tb_smallWindow_MouseClick(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
		System::Void tb_smallWindow_MouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);

		// Number, Operational and Decimal Buttons
		System::Void number_Inputs(System::Object ^sender, System::EventArgs ^e);
		System::Void operation_Buttons(System::Object ^sender, System::EventArgs ^e);
		System::Void special_operation_Buttons(System::Object ^sender, System::EventArgs ^e);
		System::Void decimal_Buttons(System::Object ^sender, System::EventArgs ^e);
		// Other Buttons
		//System::Void window_Action_Buttons(System::Object ^sender, System::EventArgs ^e);
		System::Void btn_Clear_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void btn_CE_Click(System::Object ^sender, System::EventArgs ^e);
		System::Void btn_BackSpace_Click(System::Object ^sender, System::EventArgs ^e);
		//Equality button
		System::Void btn_Equal_Click(System::Object ^sender, System::EventArgs ^e);
		//Negative Button
		System::Void negative_Button_Click(System::Object ^sender, System::EventArgs ^e);
	};
}
