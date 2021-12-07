#pragma once
#include "PolyCal.h"
#include <msclr\marshal_cppstd.h>


namespace PolynomialCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panheader;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  txtboxeq1;
	private: System::Windows::Forms::TextBox^  txtboxeq2;
	private: System::Windows::Forms::TextBox^  txtboxresult;



	private: System::Windows::Forms::LinkLabel^  linkLabel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panheader = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtboxeq1 = (gcnew System::Windows::Forms::TextBox());
			this->txtboxeq2 = (gcnew System::Windows::Forms::TextBox());
			this->txtboxresult = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panheader->SuspendLayout();
			this->SuspendLayout();
			// 
			// panheader
			// 
			this->panheader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panheader->Controls->Add(this->label10);
			this->panheader->Controls->Add(this->button10);
			this->panheader->Controls->Add(this->button9);
			this->panheader->Controls->Add(this->button15);
			this->panheader->Controls->Add(this->button13);
			this->panheader->Controls->Add(this->button11);
			this->panheader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panheader->ForeColor = System::Drawing::Color::White;
			this->panheader->Location = System::Drawing::Point(0, 0);
			this->panheader->Name = L"panheader";
			this->panheader->Size = System::Drawing::Size(700, 45);
			this->panheader->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Gainsboro;
			this->label10->Location = System::Drawing::Point(5, 8);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(199, 26);
			this->label10->TabIndex = 63;
			this->label10->Text = L"Polynomial Calculator";
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(581, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(36, 34);
			this->button10->TabIndex = 36;
			this->button10->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(539, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(36, 34);
			this->button9->TabIndex = 35;
			this->button9->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->Location = System::Drawing::Point(497, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(36, 34);
			this->button15->TabIndex = 34;
			this->button15->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->Location = System::Drawing::Point(665, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(32, 35);
			this->button13->TabIndex = 32;
			this->button13->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(642, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(17, 30);
			this->button11->TabIndex = 33;
			this->button11->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(18, 378);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"All license reserved";
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button14->Location = System::Drawing::Point(-5, 371);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(36, 34);
			this->button14->TabIndex = 31;
			this->button14->Text = L"\?";
			this->button14->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SeaShell;
			this->button1->Location = System::Drawing::Point(55, 296);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 41);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Summation";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::SeaShell;
			this->button2->Location = System::Drawing::Point(278, 296);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 41);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Substraction";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::SeaShell;
			this->button3->Location = System::Drawing::Point(508, 296);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 41);
			this->button3->TabIndex = 51;
			this->button3->Text = L"Multiplication";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtboxeq1
			// 
			this->txtboxeq1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtboxeq1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtboxeq1->ForeColor = System::Drawing::Color::Silver;
			this->txtboxeq1->Location = System::Drawing::Point(55, 68);
			this->txtboxeq1->Margin = System::Windows::Forms::Padding(2);
			this->txtboxeq1->Multiline = true;
			this->txtboxeq1->Name = L"txtboxeq1";
			this->txtboxeq1->PasswordChar = '*';
			this->txtboxeq1->Size = System::Drawing::Size(264, 34);
			this->txtboxeq1->TabIndex = 52;
			this->txtboxeq1->Text = L" First equation";
			this->txtboxeq1->UseSystemPasswordChar = true;
			// 
			// txtboxeq2
			// 
			this->txtboxeq2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtboxeq2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtboxeq2->ForeColor = System::Drawing::Color::Silver;
			this->txtboxeq2->Location = System::Drawing::Point(55, 137);
			this->txtboxeq2->Margin = System::Windows::Forms::Padding(2);
			this->txtboxeq2->Multiline = true;
			this->txtboxeq2->Name = L"txtboxeq2";
			this->txtboxeq2->PasswordChar = '*';
			this->txtboxeq2->Size = System::Drawing::Size(264, 34);
			this->txtboxeq2->TabIndex = 53;
			this->txtboxeq2->Text = L" Second equation";
			this->txtboxeq2->UseSystemPasswordChar = true;
			// 
			// txtboxresult
			// 
			this->txtboxresult->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtboxresult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtboxresult->ForeColor = System::Drawing::Color::Silver;
			this->txtboxresult->Location = System::Drawing::Point(55, 209);
			this->txtboxresult->Margin = System::Windows::Forms::Padding(2);
			this->txtboxresult->Multiline = true;
			this->txtboxresult->Name = L"txtboxresult";
			this->txtboxresult->PasswordChar = '*';
			this->txtboxresult->Size = System::Drawing::Size(264, 34);
			this->txtboxresult->TabIndex = 54;
			this->txtboxresult->Text = L"Result";
			this->txtboxresult->UseSystemPasswordChar = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(595, 375);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(104, 22);
			this->linkLabel1->TabIndex = 55;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Feedback";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(700, 400);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->txtboxresult);
			this->Controls->Add(this->txtboxeq2);
			this->Controls->Add(this->txtboxeq1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->panheader);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panheader->ResumeLayout(false);
			this->panheader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	Environment::Exit(0);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	txtboxresult->Clear();
	PolyCal p;
	System::String^ managed1 = txtboxeq1->Text;
	std::string unmanaged1 = msclr::interop::marshal_as<std::string>(managed1);

	System::String^ managed2 = txtboxeq2->Text;
	std::string unmanaged2 = msclr::interop::marshal_as<std::string>(managed2);

	std::string managed3 = p.Summation(unmanaged1, unmanaged2);
	System::String^ unmanaged3 = msclr::interop::marshal_as<System::String^>(managed3);


	txtboxresult->Text = unmanaged3;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtboxresult->Clear();
	PolyCal p;
	System::String^ managed1 = txtboxeq1->Text;
	std::string unmanaged1 = msclr::interop::marshal_as<std::string>(managed1);

	System::String^ managed2 = txtboxeq2->Text;
	std::string unmanaged2 = msclr::interop::marshal_as<std::string>(managed2);

	std::string managed3 = p.Subtraction(unmanaged1, unmanaged2);
	System::String^ unmanaged3 = msclr::interop::marshal_as<System::String^>(managed3);

	txtboxresult->Text = unmanaged3;

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	txtboxresult->Clear();
	PolyCal p;
	System::String^ managed1 = txtboxeq1->Text;
	std::string unmanaged1 = msclr::interop::marshal_as<std::string>(managed1);

	System::String^ managed2 = txtboxeq2->Text;
	std::string unmanaged2 = msclr::interop::marshal_as<std::string>(managed2);

	std::string managed3 = p.Multiplication(unmanaged1, unmanaged2);
	System::String^ unmanaged3 = msclr::interop::marshal_as<System::String^>(managed3);

	txtboxresult->Text = unmanaged3;

}
};
}
