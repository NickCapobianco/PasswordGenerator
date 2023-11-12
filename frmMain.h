#pragma once
#include <iostream>
#include <time.h>

namespace WindowsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  genBtn;

	protected:





	private: System::Windows::Forms::TextBox^  txtOutput;

	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Label^  lblLength;

	private: System::Windows::Forms::CheckBox^  rdoSymbols;
	private: System::Windows::Forms::Label^  lblOutput;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->genBtn = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->lblLength = (gcnew System::Windows::Forms::Label());
			this->rdoSymbols = (gcnew System::Windows::Forms::CheckBox());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// genBtn
			// 
			this->genBtn->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genBtn->Location = System::Drawing::Point(479, 17);
			this->genBtn->Name = L"genBtn";
			this->genBtn->Size = System::Drawing::Size(91, 30);
			this->genBtn->TabIndex = 1;
			this->genBtn->Text = L"Generate";
			this->genBtn->UseVisualStyleBackColor = true;
			this->genBtn->Click += gcnew System::EventHandler(this, &frmMain::genBtn_Click);
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(77, 21);
			this->txtInput->Name = L"txtInput";
			this->txtInput->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtInput->Size = System::Drawing::Size(138, 22);
			this->txtInput->TabIndex = 0;
			this->txtInput->TextChanged += gcnew System::EventHandler(this, &frmMain::txtInput_TextChanged);
			this->txtInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMain::txtInput_KeyPress);
			// 
			// txtOutput
			// 
			this->txtOutput->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutput->Location = System::Drawing::Point(12, 53);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(573, 106);
			this->txtOutput->TabIndex = 3;
			// 
			// lblLength
			// 
			this->lblLength->AutoSize = true;
			this->lblLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLength->Location = System::Drawing::Point(12, 23);
			this->lblLength->Name = L"lblLength";
			this->lblLength->Size = System::Drawing::Size(56, 18);
			this->lblLength->TabIndex = 5;
			this->lblLength->Text = L"Length:";
			// 
			// rdoSymbols
			// 
			this->rdoSymbols->AutoSize = true;
			this->rdoSymbols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdoSymbols->Location = System::Drawing::Point(234, 21);
			this->rdoSymbols->Name = L"rdoSymbols";
			this->rdoSymbols->Size = System::Drawing::Size(88, 22);
			this->rdoSymbols->TabIndex = 6;
			this->rdoSymbols->Text = L"Symbols";
			this->rdoSymbols->UseVisualStyleBackColor = true;
			this->rdoSymbols->CheckedChanged += gcnew System::EventHandler(this, &frmMain::rdoSymbols_CheckedChanged);
			// 
			// lblOutput
			// 
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOutput->Location = System::Drawing::Point(15, 165);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(570, 89);
			this->lblOutput->TabIndex = 7;
			// 
			// frmMain
			// 
			this->AcceptButton = this->genBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 263);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->rdoSymbols);
			this->Controls->Add(this->lblLength);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->genBtn);
			this->Controls->Add(this->txtInput);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Password Generator v1.0";
			this->Activated += gcnew System::EventHandler(this, &frmMain::frmMain_Activated);
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void genBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if (txtInput->Text == "") {
			MessageBox::Show("Please enter a valid password length.", "Password Generator v1.0", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}*/
		unsigned long long amount = Convert::ToInt64(txtInput->Text);
		txtOutput->Clear();
		gen();
		txtOutput->Focus();
		txtOutput->Copy();
		txtInput->Clear();
		txtInput->Focus();
		/*msg();*/

		if (amount <= txtInput->MaxLength && amount > 0)
		{
			lblOutput->Text = "This password has been automatically copied to your clipboard.";
		}

		if (amount > txtInput->MaxLength)
		{
			lblOutput->Text = "Sorry, you are limited to " + Convert::ToString(txtInput->MaxLength) + " characters.";

		}

		if (amount > 999999999)
		{
			exit(0);
		}
	}

    public: System::Void gen() 
	{
				 String^ output = "";
				 unsigned long long amount;
				 amount = Convert::ToInt64(txtInput->Text);
				 int i = 0;

				 if (amount == 0 || amount < 0)
				 {
					 lblOutput->Text = "Please enter a valid number of characters that is greater than 0.";
				 }

				 if (amount > txtInput->MaxLength)
				 {
					 amount = 0;
				 }

				 if (amount == 1)
				 {
					int num = rand() % 10;
					 output = Convert::ToString(num);
				 }
				 for (i; i < (amount / 2); i++)
				 {
					 while (amount >= 0)
					 {
						 int num;
						 char letter = NULL;
						 char symbol = NULL;

						 if (amount <= 0)
						 {
							 break;
						 }

						 num = rand() % 10;
						 amount--;
						 output += Convert::ToString(num);

						 //if user requests symbols
						 if (rdoSymbols->Checked == true) 
						 {
							 if (amount % 5 == 0)
							 {
								 symbol = 33;
								 amount--;
								 output += Convert::ToChar(symbol);
							 }

							 if (amount % 13 == 0 && amount % 7 != 0 && amount % 5 != 0)
							 {
								 symbol = rand() % 4 + 35;
								 amount--;
								 output += Convert::ToChar(symbol);
							 }

							 if (amount % 7 == 0 && amount % 13 != 0 && amount % 5 != 0)
							 {
								 symbol = 63;
								 amount--;
								 output += Convert::ToChar(symbol);
							 }

						 }

						 if ((((amount / 2) - i) % 3) > 0)
						 {
							 letter = rand() % 26 + 65;
							 amount--;
							 output += Convert::ToChar(letter);
						 }

						 else
						 {
							 letter = rand() % 26 + 97;
							 amount--;
							 output += Convert::ToChar(letter);
						 }


						 if (amount == 1)
						 {
							 num = rand() % 10;
							 output += Convert::ToString(num);
							 break;
						 }
					 }
				 }
				 txtOutput->Text = output;
	}

private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) {
	time_t(t);
	srand((unsigned)(&t));
	txtInput->MaxLength = 256;
}

private: System::Void msg()
{
	MessageBox::Show("Password has been copied to the clipboard.", "Password generator v1.0", MessageBoxButtons::OK, MessageBoxIcon::Information);	
}

private: System::Void rdoSymbols_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtInput->Focus();
}

private: System::Void frmMain_Activated(System::Object^  sender, System::EventArgs^  e) {
		genBtn->Enabled = false;
}

private: System::Void txtInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txtInput->Text != "")
	{
		genBtn->Enabled = true;
	}

	else
	{
		genBtn->Enabled = false;
	}
}

private: System::Void txtInput_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	//// Allow negative numbers
	//if (e->KeyChar == '-') {
	//	if ((!System::String::IsNullOrWhiteSpace(this->txtInput->Text)) && !(this->txtInput->Text->IndexOf('-') == -1))
	//		e->Handled = true;
	//}
	// Accept only digits ".", "-" and the Backspace character
	/*if (!Char::IsDigit(e->KeyChar) && e->KeyChar == '.')
	{
		e->Handled = true;
	}*/

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}
