#pragma once

namespace Calculator
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button ^button20;
	private: System::Windows::Forms::Button ^button19;
	private: System::Windows::Forms::Button ^button18;
	private: System::Windows::Forms::Button ^button17;
	private: System::Windows::Forms::Button ^button16;
	private: System::Windows::Forms::Button ^button15;
	private: System::Windows::Forms::Button ^button14;
	private: System::Windows::Forms::Button ^button13;
	private: System::Windows::Forms::Button ^button12;
	private: System::Windows::Forms::Button ^button11;
	private: System::Windows::Forms::Button ^button10;
	private: System::Windows::Forms::Button ^button9;
	private: System::Windows::Forms::Button ^button8;
	private: System::Windows::Forms::Button ^button7;
	private: System::Windows::Forms::Button ^button6;
	private: System::Windows::Forms::Button ^button5;
	private: System::Windows::Forms::Button ^button4;
	private: System::Windows::Forms::Button ^button3;
	private: System::Windows::Forms::Button ^button2;
	private: System::Windows::Forms::Button ^button1;
	private: System::Windows::Forms::SplitContainer ^splitContainer1;
	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			//
			// tableLayoutPanel1
			//
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
																								  25)));
			this->tableLayoutPanel1->Controls->Add(this->button20, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->button19, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->button18, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->button17, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button16, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button15, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button14, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button13, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button12, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button9, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
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
			// button1
			//
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 67);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			//
			// button2
			//
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(91, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 67);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			//
			// button3
			//
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(179, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 67);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			//
			// button4
			//
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(267, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 67);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			//
			// button5
			//
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(3, 76);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 67);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			//
			// button6
			//
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(91, 76);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 67);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			//
			// button7
			//
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Location = System::Drawing::Point(179, 76);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(82, 67);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			//
			// button8
			//
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Location = System::Drawing::Point(267, 76);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 67);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			//
			// button9
			//
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->Location = System::Drawing::Point(3, 149);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(82, 67);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			//
			// button10
			//
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->Location = System::Drawing::Point(91, 149);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(82, 67);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			//
			// button11
			//
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Location = System::Drawing::Point(179, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(82, 67);
			this->button11->TabIndex = 10;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			//
			// button12
			//
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->Location = System::Drawing::Point(267, 149);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(84, 67);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			//
			// button13
			//
			this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button13->Location = System::Drawing::Point(3, 222);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(82, 67);
			this->button13->TabIndex = 12;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			//
			// button14
			//
			this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button14->Location = System::Drawing::Point(91, 222);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(82, 67);
			this->button14->TabIndex = 13;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			//
			// button15
			//
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->Location = System::Drawing::Point(179, 222);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(82, 67);
			this->button15->TabIndex = 14;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			//
			// button16
			//
			this->button16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button16->Location = System::Drawing::Point(267, 222);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(84, 67);
			this->button16->TabIndex = 15;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			//
			// button17
			//
			this->button17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button17->Location = System::Drawing::Point(3, 295);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 70);
			this->button17->TabIndex = 16;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			//
			// button18
			//
			this->button18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button18->Location = System::Drawing::Point(91, 295);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(82, 70);
			this->button18->TabIndex = 17;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			//
			// button19
			//
			this->button19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button19->Location = System::Drawing::Point(179, 295);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(82, 70);
			this->button19->TabIndex = 18;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			//
			// button20
			//
			this->button20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button20->Location = System::Drawing::Point(267, 295);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(84, 70);
			this->button20->TabIndex = 19;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			//
			// splitContainer1
			//
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			//
			// splitContainer1.Panel1
			//
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainWindow::splitContainer1_Panel1_Paint);
			this->splitContainer1->Size = System::Drawing::Size(354, 161);
			this->splitContainer1->SplitterDistance = 118;
			this->splitContainer1->TabIndex = 1;
			//
			// mainWindow
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(354, 529);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(354, 529);
			this->Name = L"mainWindow";
			this->Text = L"mainWindow";
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
		}
#pragma endregion
		//***************************************************************************************



	};
}
