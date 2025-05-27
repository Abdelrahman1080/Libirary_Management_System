#pragma once

namespace ProjectV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Data;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel1->Hide();
			panel2->Hide();
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ studentbutton;
	private: System::Windows::Forms::Button^ booksbutton;
	private: System::Windows::Forms::Button^ ButtonSTSubmit;


	private: System::Windows::Forms::TextBox^ STpassword;
	private: System::Windows::Forms::TextBox^ STID;


	private: System::Windows::Forms::TextBox^ STname;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ButtonSTDelete;


	private: System::Windows::Forms::TextBox^ STdelete;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonSTubdate;
	private: System::Windows::Forms::TextBox^ STIDUbdate;








	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ STNewPass;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ minue1;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ minue2;


	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Button^ ButtonBookUpdate;
	private: System::Windows::Forms::TextBox^ BookUbdateName;





	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ ButtonBookdel;


	private: System::Windows::Forms::TextBox^ BookIDdel;



	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ ButtonBooksubmit;
	private: System::Windows::Forms::TextBox^ AuthorID;



	private: System::Windows::Forms::TextBox^ BookY;


	private: System::Windows::Forms::TextBox^ BookN;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ BookNewAdmin;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ BookNewAuthor;
	private: System::Windows::Forms::TextBox^ BookNewY;
private: System::Windows::Forms::Label^ label26;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ BookAdmin;
private: System::Windows::Forms::Button^ ButtonSeachAuthor;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ SearchAuthor;
private: System::Windows::Forms::Button^ STShow;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ bookISBN;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ BookNewISBN;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ BookID;

private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Button^ BookShow;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->STShow = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->minue1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->STNewPass = (gcnew System::Windows::Forms::TextBox());
			this->ButtonSTubdate = (gcnew System::Windows::Forms::Button());
			this->STIDUbdate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ButtonSTDelete = (gcnew System::Windows::Forms::Button());
			this->STdelete = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ButtonSTSubmit = (gcnew System::Windows::Forms::Button());
			this->STpassword = (gcnew System::Windows::Forms::TextBox());
			this->STID = (gcnew System::Windows::Forms::TextBox());
			this->STname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->studentbutton = (gcnew System::Windows::Forms::Button());
			this->booksbutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->BookShow = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->BookID = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->BookNewISBN = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bookISBN = (gcnew System::Windows::Forms::TextBox());
			this->ButtonSeachAuthor = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->SearchAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->BookAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->BookNewAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->BookNewAuthor = (gcnew System::Windows::Forms::TextBox());
			this->BookNewY = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->minue2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ButtonBookUpdate = (gcnew System::Windows::Forms::Button());
			this->BookUbdateName = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->ButtonBookdel = (gcnew System::Windows::Forms::Button());
			this->BookIDdel = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->ButtonBooksubmit = (gcnew System::Windows::Forms::Button());
			this->AuthorID = (gcnew System::Windows::Forms::TextBox());
			this->BookY = (gcnew System::Windows::Forms::TextBox());
			this->BookN = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->STShow);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->minue1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->STNewPass);
			this->panel1->Controls->Add(this->ButtonSTubdate);
			this->panel1->Controls->Add(this->STIDUbdate);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->ButtonSTDelete);
			this->panel1->Controls->Add(this->STdelete);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->ButtonSTSubmit);
			this->panel1->Controls->Add(this->STpassword);
			this->panel1->Controls->Add(this->STID);
			this->panel1->Controls->Add(this->STname);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(5, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1063, 539);
			this->panel1->TabIndex = 0;
			// 
			// STShow
			// 
			this->STShow->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->STShow->Location = System::Drawing::Point(737, 471);
			this->STShow->Name = L"STShow";
			this->STShow->Size = System::Drawing::Size(90, 40);
			this->STShow->TabIndex = 22;
			this->STShow->Text = L"Show";
			this->STShow->UseVisualStyleBackColor = true;
			this->STShow->Click += gcnew System::EventHandler(this, &MyForm::STShow_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(525, 437);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(377, 22);
			this->label3->TabIndex = 21;
			this->label3->Text = L"For Showing all  students  in The System";
			// 
			// minue1
			// 
			this->minue1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minue1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->minue1->Location = System::Drawing::Point(430, 223);
			this->minue1->Margin = System::Windows::Forms::Padding(3, 3, 7, 3);
			this->minue1->Name = L"minue1";
			this->minue1->Size = System::Drawing::Size(154, 55);
			this->minue1->TabIndex = 20;
			this->minue1->Text = L"    Back To Main Minue       ";
			this->minue1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->minue1->UseVisualStyleBackColor = true;
			this->minue1->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 362);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 18);
			this->label10->TabIndex = 19;
			this->label10->Text = L"ID";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(659, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"New Password";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(659, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 18);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Student  ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 18);
			this->label7->TabIndex = 16;
			this->label7->Text = L"ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(0, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 18);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(4, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 18);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Name";
			// 
			// STNewPass
			// 
			this->STNewPass->Location = System::Drawing::Point(810, 116);
			this->STNewPass->Name = L"STNewPass";
			this->STNewPass->Size = System::Drawing::Size(156, 22);
			this->STNewPass->TabIndex = 13;
			// 
			// ButtonSTubdate
			// 
			this->ButtonSTubdate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonSTubdate->Location = System::Drawing::Point(810, 159);
			this->ButtonSTubdate->Name = L"ButtonSTubdate";
			this->ButtonSTubdate->Size = System::Drawing::Size(75, 23);
			this->ButtonSTubdate->TabIndex = 12;
			this->ButtonSTubdate->Text = L"Update";
			this->ButtonSTubdate->UseVisualStyleBackColor = true;
			this->ButtonSTubdate->Click += gcnew System::EventHandler(this, &MyForm::ButtonSTubdate_Click);
			// 
			// STIDUbdate
			// 
			this->STIDUbdate->Location = System::Drawing::Point(810, 78);
			this->STIDUbdate->Name = L"STIDUbdate";
			this->STIDUbdate->Size = System::Drawing::Size(156, 22);
			this->STIDUbdate->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(654, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(364, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"For Updating a student enter student ID";
			// 
			// ButtonSTDelete
			// 
			this->ButtonSTDelete->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonSTDelete->Location = System::Drawing::Point(54, 381);
			this->ButtonSTDelete->Name = L"ButtonSTDelete";
			this->ButtonSTDelete->Size = System::Drawing::Size(75, 23);
			this->ButtonSTDelete->TabIndex = 9;
			this->ButtonSTDelete->Text = L"Delete";
			this->ButtonSTDelete->UseVisualStyleBackColor = true;
			this->ButtonSTDelete->Click += gcnew System::EventHandler(this, &MyForm::ButtonSTDelete_Click);
			// 
			// STdelete
			// 
			this->STdelete->Location = System::Drawing::Point(54, 354);
			this->STdelete->Name = L"STdelete";
			this->STdelete->Size = System::Drawing::Size(156, 22);
			this->STdelete->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(8, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(409, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"For deleting a student data select student ID";
			// 
			// ButtonSTSubmit
			// 
			this->ButtonSTSubmit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ButtonSTSubmit->Location = System::Drawing::Point(67, 149);
			this->ButtonSTSubmit->Name = L"ButtonSTSubmit";
			this->ButtonSTSubmit->Size = System::Drawing::Size(75, 23);
			this->ButtonSTSubmit->TabIndex = 5;
			this->ButtonSTSubmit->Text = L"Submit";
			this->ButtonSTSubmit->UseVisualStyleBackColor = true;
			this->ButtonSTSubmit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// STpassword
			// 
			this->STpassword->Location = System::Drawing::Point(115, 72);
			this->STpassword->Name = L"STpassword";
			this->STpassword->Size = System::Drawing::Size(156, 22);
			this->STpassword->TabIndex = 4;
			// 
			// STID
			// 
			this->STID->Location = System::Drawing::Point(115, 97);
			this->STID->Name = L"STID";
			this->STID->Size = System::Drawing::Size(156, 22);
			this->STID->TabIndex = 3;
			// 
			// STname
			// 
			this->STname->Location = System::Drawing::Point(115, 41);
			this->STname->Name = L"STname";
			this->STname->Size = System::Drawing::Size(156, 22);
			this->STname->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(3, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"for adding student information fill these data";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(134, 51);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(8, 19);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// studentbutton
			// 
			this->studentbutton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->studentbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentbutton->Location = System::Drawing::Point(93, 295);
			this->studentbutton->Name = L"studentbutton";
			this->studentbutton->Size = System::Drawing::Size(410, 47);
			this->studentbutton->TabIndex = 1;
			this->studentbutton->Text = L"Student Edit System";
			this->studentbutton->UseVisualStyleBackColor = false;
			this->studentbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// booksbutton
			// 
			this->booksbutton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->booksbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->booksbutton->Location = System::Drawing::Point(93, 357);
			this->booksbutton->Name = L"booksbutton";
			this->booksbutton->Size = System::Drawing::Size(410, 41);
			this->booksbutton->TabIndex = 2;
			this->booksbutton->Text = L"Books Edit System";
			this->booksbutton->UseVisualStyleBackColor = false;
			this->booksbutton->Click += gcnew System::EventHandler(this, &MyForm::booksbutton_Click);
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->BookShow);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->BookID);
			this->panel2->Controls->Add(this->flowLayoutPanel3);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->BookNewISBN);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->bookISBN);
			this->panel2->Controls->Add(this->ButtonSeachAuthor);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->SearchAuthor);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->BookAdmin);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->BookNewAdmin);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->BookNewAuthor);
			this->panel2->Controls->Add(this->BookNewY);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->minue2);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->ButtonBookUpdate);
			this->panel2->Controls->Add(this->BookUbdateName);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->ButtonBookdel);
			this->panel2->Controls->Add(this->BookIDdel);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->ButtonBooksubmit);
			this->panel2->Controls->Add(this->AuthorID);
			this->panel2->Controls->Add(this->BookY);
			this->panel2->Controls->Add(this->BookN);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->flowLayoutPanel2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(2, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1168, 546);
			this->panel2->TabIndex = 22;
			// 
			// BookShow
			// 
			this->BookShow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookShow->Location = System::Drawing::Point(455, 159);
			this->BookShow->Name = L"BookShow";
			this->BookShow->Size = System::Drawing::Size(141, 66);
			this->BookShow->TabIndex = 44;
			this->BookShow->Text = L"Show All Books";
			this->BookShow->UseVisualStyleBackColor = true;
			this->BookShow->Click += gcnew System::EventHandler(this, &MyForm::BookShow_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label29->Location = System::Drawing::Point(14, 33);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 18);
			this->label29->TabIndex = 43;
			this->label29->Text = L"ID";
			// 
			// BookID
			// 
			this->BookID->Location = System::Drawing::Point(118, 29);
			this->BookID->Name = L"BookID";
			this->BookID->Size = System::Drawing::Size(156, 22);
			this->BookID->TabIndex = 42;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Location = System::Drawing::Point(612, 269);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(8, 19);
			this->flowLayoutPanel3->TabIndex = 41;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->Location = System::Drawing::Point(717, 218);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(46, 18);
			this->label28->TabIndex = 40;
			this->label28->Text = L"ISBN";
			// 
			// BookNewISBN
			// 
			this->BookNewISBN->Location = System::Drawing::Point(865, 212);
			this->BookNewISBN->Name = L"BookNewISBN";
			this->BookNewISBN->Size = System::Drawing::Size(156, 22);
			this->BookNewISBN->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(9, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 18);
			this->label12->TabIndex = 38;
			this->label12->Text = L"ISBN";
			// 
			// bookISBN
			// 
			this->bookISBN->Location = System::Drawing::Point(118, 171);
			this->bookISBN->Name = L"bookISBN";
			this->bookISBN->Size = System::Drawing::Size(156, 22);
			this->bookISBN->TabIndex = 37;
			// 
			// ButtonSeachAuthor
			// 
			this->ButtonSeachAuthor->Location = System::Drawing::Point(717, 497);
			this->ButtonSeachAuthor->Name = L"ButtonSeachAuthor";
			this->ButtonSeachAuthor->Size = System::Drawing::Size(86, 24);
			this->ButtonSeachAuthor->TabIndex = 36;
			this->ButtonSeachAuthor->Text = L"seach";
			this->ButtonSeachAuthor->UseVisualStyleBackColor = false;
			this->ButtonSeachAuthor->Click += gcnew System::EventHandler(this, &MyForm::ButtonSeachAuthor_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label27->Location = System::Drawing::Point(593, 456);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(75, 18);
			this->label27->TabIndex = 35;
			this->label27->Text = L"Admin ID";
			// 
			// SearchAuthor
			// 
			this->SearchAuthor->Location = System::Drawing::Point(702, 456);
			this->SearchAuthor->Name = L"SearchAuthor";
			this->SearchAuthor->Size = System::Drawing::Size(156, 22);
			this->SearchAuthor->TabIndex = 34;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Olive;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::Control;
			this->label26->Location = System::Drawing::Point(527, 389);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(508, 26);
			this->label26->TabIndex = 33;
			this->label26->Text = L"showing Only the books of specific author(join)";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label24->Location = System::Drawing::Point(9, 143);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 18);
			this->label24->TabIndex = 31;
			this->label24->Text = L"Admin";
			// 
			// BookAdmin
			// 
			this->BookAdmin->Location = System::Drawing::Point(118, 143);
			this->BookAdmin->Name = L"BookAdmin";
			this->BookAdmin->Size = System::Drawing::Size(156, 22);
			this->BookAdmin->TabIndex = 30;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label23->Location = System::Drawing::Point(699, 191);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(92, 18);
			this->label23->TabIndex = 29;
			this->label23->Text = L"New Admin";
			// 
			// BookNewAdmin
			// 
			this->BookNewAdmin->Location = System::Drawing::Point(865, 184);
			this->BookNewAdmin->Name = L"BookNewAdmin";
			this->BookNewAdmin->Size = System::Drawing::Size(156, 22);
			this->BookNewAdmin->TabIndex = 28;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label22->Location = System::Drawing::Point(699, 138);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(95, 18);
			this->label22->TabIndex = 27;
			this->label22->Text = L"New Author";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label21->Location = System::Drawing::Point(680, 166);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(140, 18);
			this->label21->TabIndex = 26;
			this->label21->Text = L"New Publish Year";
			// 
			// BookNewAuthor
			// 
			this->BookNewAuthor->Location = System::Drawing::Point(865, 128);
			this->BookNewAuthor->Name = L"BookNewAuthor";
			this->BookNewAuthor->Size = System::Drawing::Size(156, 22);
			this->BookNewAuthor->TabIndex = 25;
			// 
			// BookNewY
			// 
			this->BookNewY->Location = System::Drawing::Point(865, 156);
			this->BookNewY->Name = L"BookNewY";
			this->BookNewY->Size = System::Drawing::Size(156, 22);
			this->BookNewY->TabIndex = 24;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->Location = System::Drawing::Point(4, 122);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(102, 18);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Publish Year";
			// 
			// minue2
			// 
			this->minue2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minue2->Location = System::Drawing::Point(455, 29);
			this->minue2->Name = L"minue2";
			this->minue2->Size = System::Drawing::Size(141, 66);
			this->minue2->TabIndex = 20;
			this->minue2->Text = L"Back To Main Minue";
			this->minue2->UseVisualStyleBackColor = true;
			this->minue2->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(67, 397);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 18);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(705, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 18);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Book  Name";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(60, 121);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 18);
			this->label14->TabIndex = 16;
			this->label14->Text = L"ID";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(4, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 18);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Author ID";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(13, 66);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 18);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Name";
			// 
			// ButtonBookUpdate
			// 
			this->ButtonBookUpdate->Location = System::Drawing::Point(864, 258);
			this->ButtonBookUpdate->Name = L"ButtonBookUpdate";
			this->ButtonBookUpdate->Size = System::Drawing::Size(75, 23);
			this->ButtonBookUpdate->TabIndex = 12;
			this->ButtonBookUpdate->Text = L"Update";
			this->ButtonBookUpdate->UseVisualStyleBackColor = true;
			this->ButtonBookUpdate->Click += gcnew System::EventHandler(this, &MyForm::ButtonBookUpdate_Click);
			// 
			// BookUbdateName
			// 
			this->BookUbdateName->Location = System::Drawing::Point(865, 91);
			this->BookUbdateName->Name = L"BookUbdateName";
			this->BookUbdateName->Size = System::Drawing::Size(156, 22);
			this->BookUbdateName->TabIndex = 11;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::Control;
			this->label17->Location = System::Drawing::Point(694, 23);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(356, 22);
			this->label17->TabIndex = 10;
			this->label17->Text = L"For Updating a Book Enter Book Name";
			// 
			// ButtonBookdel
			// 
			this->ButtonBookdel->Location = System::Drawing::Point(145, 442);
			this->ButtonBookdel->Name = L"ButtonBookdel";
			this->ButtonBookdel->Size = System::Drawing::Size(78, 26);
			this->ButtonBookdel->TabIndex = 9;
			this->ButtonBookdel->Text = L"Delete";
			this->ButtonBookdel->UseVisualStyleBackColor = true;
			this->ButtonBookdel->Click += gcnew System::EventHandler(this, &MyForm::ButtonBookdel_Click);
			// 
			// BookIDdel
			// 
			this->BookIDdel->Location = System::Drawing::Point(137, 399);
			this->BookIDdel->Name = L"BookIDdel";
			this->BookIDdel->Size = System::Drawing::Size(156, 22);
			this->BookIDdel->TabIndex = 8;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Location = System::Drawing::Point(8, 318);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(348, 24);
			this->label19->TabIndex = 6;
			this->label19->Text = L"For deleting a Book data select Name";
			// 
			// ButtonBooksubmit
			// 
			this->ButtonBooksubmit->Location = System::Drawing::Point(133, 206);
			this->ButtonBooksubmit->Name = L"ButtonBooksubmit";
			this->ButtonBooksubmit->Size = System::Drawing::Size(86, 24);
			this->ButtonBooksubmit->TabIndex = 5;
			this->ButtonBooksubmit->Text = L"Submit";
			this->ButtonBooksubmit->UseVisualStyleBackColor = true;
			this->ButtonBooksubmit->Click += gcnew System::EventHandler(this, &MyForm::ButtonBooksubmit_Click);
			// 
			// AuthorID
			// 
			this->AuthorID->Location = System::Drawing::Point(118, 93);
			this->AuthorID->Name = L"AuthorID";
			this->AuthorID->Size = System::Drawing::Size(156, 22);
			this->AuthorID->TabIndex = 4;
			// 
			// BookY
			// 
			this->BookY->Location = System::Drawing::Point(118, 118);
			this->BookY->Name = L"BookY";
			this->BookY->Size = System::Drawing::Size(156, 22);
			this->BookY->TabIndex = 3;
			// 
			// BookN
			// 
			this->BookN->Location = System::Drawing::Point(118, 62);
			this->BookN->Name = L"BookN";
			this->BookN->Size = System::Drawing::Size(156, 22);
			this->BookN->TabIndex = 2;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::Control;
			this->label20->Location = System::Drawing::Point(42, -3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(329, 26);
			this->label20->TabIndex = 1;
			this->label20->Text = L"for adding Book fill these data";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(171, 73);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(8, 19);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1070, 563);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->studentbutton);
			this->Controls->Add(this->booksbutton);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"  ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Show();
		studentbutton->Hide();
		booksbutton->Hide();
		 
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
 
 
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	studentbutton->Show();
	booksbutton->Show();
}
 
 
private: System::Void booksbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
	studentbutton->Hide();
	booksbutton->Hide();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	studentbutton->Show();
	booksbutton->Show();
}
 
 
 
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		SqlConnection^ con = gcnew SqlConnection(connectionString);

		con->Open();

		String^ sqlquery = "INSERT INTO Student (ST_Name, ST_passward, ST_ID) VALUES ('"
			+ this->STname->Text + "','"
			+ this->STpassword->Text + "','"
			+ this->STID->Text + "')";

		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);

		cmd->ExecuteNonQuery();
 
		con->Close();
 
		MessageBox::Show("Student Data Submitted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ sqlEx) {
		 
		MessageBox::Show("SQL error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		 
		MessageBox::Show("Failed to submit student data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
};
private: System::Void ButtonSTDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		 
		SqlConnection^ con = gcnew SqlConnection(connectionString);

		 
		con->Open();
 
		String^ sqlquery = "DELETE FROM Student WHERE ST_ID='" + this->STdelete->Text + "'";

		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);
 
		cmd->ExecuteNonQuery();
 
		con->Close();
 
		MessageBox::Show("Student Data deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ sqlEx) {
		 
		MessageBox::Show("SQL error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		 
		MessageBox::Show("Failed to delete student data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void ButtonSTubdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
    	SqlConnection^ con = gcnew SqlConnection(connectionString);

		con->Open();

		String^ newPass = this->STNewPass->Text;
		String^ studentId = this->STIDUbdate->Text;

		String^ sqlquery = "UPDATE Student SET ST_passward = @NewPass WHERE ST_ID = @StudentID";
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);

		cmd->Parameters->AddWithValue("@NewPass", newPass);
		cmd->Parameters->AddWithValue("@StudentID", studentId);

		cmd->ExecuteNonQuery();

		con->Close();
		MessageBox::Show("Student Data updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ sqlEx) {
		MessageBox::Show("SQL error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to update student data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void STShow_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		 
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		 
		con->Open();

		 
		String^ sqlquery = "SELECT * FROM Student";
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);

		 SqlDataReader^ reader = cmd->ExecuteReader();

		 
		String^ message = "Student Data:\n";
		while (reader->Read()) {
			 
			message += "ID: " + reader["ST_ID"]->ToString() + ", ";
			message += "Name: " + reader["ST_NAME"]->ToString() + ", ";
			message += "Password: " + reader["ST_passward"]->ToString() + "\n";
		}

		 
		reader->Close();
		con->Close();

		 
		MessageBox::Show(message, "Student Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		 
		MessageBox::Show("Failed to retrieve student data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void ButtonBooksubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ bookID = this->BookID->Text;
		String^ bookName = this->BookN->Text;
		String^ authorID = this->AuthorID->Text;
		String^ bookYear = this->BookY->Text;
		String^ bookAdmin = this->BookAdmin->Text;
		String^ bookISBN = this->bookISBN->Text;

		String^ checkAuthorQuery = "SELECT COUNT(*) FROM Author WHERE Author_ID = @AuthorID";
		SqlCommand^ checkAuthorCmd = gcnew SqlCommand(checkAuthorQuery, con);
		checkAuthorCmd->Parameters->AddWithValue("@AuthorID", authorID);
		int authorCount = (int)checkAuthorCmd->ExecuteScalar();

		if (authorCount == 0) {
			String^ insertAuthorQuery = "INSERT INTO Author (Author_ID) VALUES (@AuthorID)";
			SqlCommand^ insertAuthorCmd = gcnew SqlCommand(insertAuthorQuery, con);
			insertAuthorCmd->Parameters->AddWithValue("@AuthorID", authorID);
			insertAuthorCmd->ExecuteNonQuery();
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		String^ checkAdminQuery = "SELECT COUNT(*) FROM Admin WHERE AD_ID = @BookAdmin";
		SqlCommand^ checkAdminCmd = gcnew SqlCommand(checkAdminQuery, con);
		checkAdminCmd->Parameters->AddWithValue("@BookAdmin", bookAdmin);
		int adminCount = (int)checkAdminCmd->ExecuteScalar();

		if (adminCount == 0) {
			String^ insertAdminQuery = "INSERT INTO Admin (AD_ID) VALUES (@BookAdmin)";
			SqlCommand^ insertAdminCmd = gcnew SqlCommand(insertAdminQuery, con);
			insertAdminCmd->Parameters->AddWithValue("@BookAdmin",bookAdmin );
			insertAdminCmd->ExecuteNonQuery();
		}

		String^ insertBookQuery = "INSERT INTO Book (BName, BID, PublisherYear, AD_ID, ISBN, AuthorID) VALUES (@BookName, @BookID, @BookYear, @BookAdmin, @bookISBN, @AuthorID)";
		SqlCommand^ insertBookCmd = gcnew SqlCommand(insertBookQuery, con);
		insertBookCmd->Parameters->AddWithValue("@BookName", bookName);
		insertBookCmd->Parameters->AddWithValue("@BookID", bookID);
		insertBookCmd->Parameters->AddWithValue("@BookYear", bookYear);
		insertBookCmd->Parameters->AddWithValue("@BookAdmin", bookAdmin);
		insertBookCmd->Parameters->AddWithValue("@bookISBN", bookISBN);
		insertBookCmd->Parameters->AddWithValue("@AuthorID", authorID);
		insertBookCmd->ExecuteNonQuery();

		con->Close();

		MessageBox::Show("Book Data Submitted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ sqlEx) {
		MessageBox::Show("SQL error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to submit book data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void ButtonBookdel_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		SqlConnection^ con = gcnew SqlConnection(connectionString);

		con->Open();
		String^ bookIDdel = this->BookIDdel->Text;
		String^ sqlquery = "DELETE FROM Book WHERE BName = @BookIDdel";
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);

		cmd->Parameters->AddWithValue("@BookIDdel", bookIDdel);
		cmd->ExecuteNonQuery();

		con->Close();

		MessageBox::Show("Book Data Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ sqlEx) {
		MessageBox::Show("SQL error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to delete book data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}
private: System::Void ButtonBookUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ bookNewAdmin = this->BookNewAdmin->Text;
		String^ bookNewY = this->BookNewY->Text;
		String^ bookNewAuthor = this->BookNewAuthor->Text;
		String^ bookUpdateName = this->BookUbdateName->Text;
		String^ bookUpdateISBN = this->BookNewISBN->Text;

		String^ checkAuthorQuery = "SELECT COUNT(*) FROM Author WHERE Author_ID = @bookNewAuthor";
		SqlCommand^ checkAuthorCmd = gcnew SqlCommand(checkAuthorQuery, con);
		checkAuthorCmd->Parameters->AddWithValue("@bookNewAuthor", bookNewAuthor);
		int authorCount = (int)checkAuthorCmd->ExecuteScalar();

		if (authorCount == 0) {
			String^ insertAuthorQuery = "INSERT INTO Author (Author_ID) VALUES (@bookNewAuthor)";
			SqlCommand^ insertAuthorCmd = gcnew SqlCommand(insertAuthorQuery, con);
			insertAuthorCmd->Parameters->AddWithValue("@bookNewAuthor", bookNewAuthor);
			insertAuthorCmd->ExecuteNonQuery();
		}

		String^ checkAdminQuery = "SELECT COUNT(*) FROM Admin WHERE AD_ID = @bookNewAdmin";
		SqlCommand^ checkAdminCmd = gcnew SqlCommand(checkAdminQuery, con);
		checkAdminCmd->Parameters->AddWithValue("@bookNewAdmin", bookNewAdmin);
		int adminCount = (int)checkAdminCmd->ExecuteScalar();

		if (adminCount == 0) {
			String^ insertAdminQuery = "INSERT INTO Admin (AD_ID) VALUES (@bookNewAdmin)";
			SqlCommand^ insertAdminCmd = gcnew SqlCommand(insertAdminQuery, con);
			insertAdminCmd->Parameters->AddWithValue("@bookNewAdmin", bookNewAdmin);
			insertAdminCmd->ExecuteNonQuery();
		}

		String^ sqlquery = "UPDATE Book SET AD_ID = @bookNewAdmin, PublisherYear = @bookNewY, AuthorID = @bookNewAuthor WHERE BName = @bookUpdateName";
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);

		cmd->Parameters->AddWithValue("@bookNewAdmin", bookNewAdmin);
		cmd->Parameters->AddWithValue("@bookNewY", bookNewY);
		cmd->Parameters->AddWithValue("@bookNewAuthor", bookNewAuthor);
		cmd->Parameters->AddWithValue("@bookUpdateName", bookUpdateName);

		cmd->ExecuteNonQuery();

		con->Close();

		MessageBox::Show("Book Data Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ sqlEx) {
		MessageBox::Show("SQL error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to update book data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}
private: System::Void ButtonSeachAuthor_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ authorID = this->SearchAuthor->Text;
		String^ sqlquery = "SELECT Book.BName, Book.BID, Book.PublisherYear, Book.AD_ID, Book.ISBN FROM Book INNER JOIN Author ON Book.AuthorID = Author.Author_ID WHERE Author.Author_ID = @authorID";

		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);
		cmd->Parameters->AddWithValue("@authorID", authorID);

		SqlDataReader^ reader = cmd->ExecuteReader();

		String^ message = "Books by Author " + authorID + ":\n";
		while (reader->Read()) {
			message += "Book Name: " + reader["BName"]->ToString() + ", ";
			message += "Book ID: " + reader["BID"]->ToString() + ", ";
			message += "Year: " + reader["PublisherYear"]->ToString() + ", ";
			message += "Admin: " + reader["AD_ID"]->ToString() + ", ";
			message += "ISBN: " + reader["ISBN"]->ToString() + "\n";
		}

		reader->Close();
		con->Close();

		MessageBox::Show(message, "Books by Author", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to retrieve book data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


}



private: System::Void BookShow_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=msdb;Integrated Security=True;";

	try {

		SqlConnection^ con = gcnew SqlConnection(connectionString);

		con->Open();


		String^ sqlquery = "SELECT * FROM Book";
		SqlCommand^ cmd = gcnew SqlCommand(sqlquery, con);

		SqlDataReader^ reader = cmd->ExecuteReader();


		String^ message = "Book Data:\n";
		while (reader->Read()) {

			message += "ID: " + reader["BID"]->ToString() + ", ";
			message += "Book Name: " + reader["BName"]->ToString() + ", ";
			message += "Admin ID: " + reader["AD_ID"]->ToString() + ", ";
			message += "ISBN: " + reader["ISBN"]->ToString() + ", ";
			message += "Publisher Year: " + reader["PublisherYear"]->ToString() + ", ";
			message += "Author ID: " + reader["AuthorID"]->ToString() + "\n";
		}


		reader->Close();
		con->Close();


		MessageBox::Show(message, "Book Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {

		MessageBox::Show("Failed to retrieve Book data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};


}
