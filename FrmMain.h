#pragma once

namespace FydelisTech {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Reflection;
	using namespace System::Net::NetworkInformation;
	using namespace System::Diagnostics;
	using namespace System::Security::Policy;
	

	/// <summary>
	/// Sumário para FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ BarraTop;
	private: System::Windows::Forms::Panel^ PLStatus;
	private: System::Windows::Forms::Panel^ PlLeft;
	protected:

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ BtMaximizar;
	private: System::Windows::Forms::PictureBox^ BtFechar;


	private: System::Windows::Forms::PictureBox^ BtMinimizar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ BtMenu;
	private: Vlc::DotNet::Forms::VlcControl^ VideoPlay;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ LbValidade;

	private: System::Windows::Forms::Label^ LbData;
	private: System::Windows::Forms::Label^ LbMac;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::PictureBox^ BtEmail;

	private: System::Windows::Forms::PictureBox^ BtWhatsapp;

	private: System::Windows::Forms::PictureBox^ BtYoutube;

	private: System::Windows::Forms::PictureBox^ BtFacebook;

	private: System::Windows::Forms::PictureBox^ BtInstagram;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	protected:












	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmMain::typeid));
			this->BarraTop = (gcnew System::Windows::Forms::Panel());
			this->BtMenu = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtMinimizar = (gcnew System::Windows::Forms::PictureBox());
			this->BtMaximizar = (gcnew System::Windows::Forms::PictureBox());
			this->BtFechar = (gcnew System::Windows::Forms::PictureBox());
			this->PLStatus = (gcnew System::Windows::Forms::Panel());
			this->LbMac = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LbValidade = (gcnew System::Windows::Forms::Label());
			this->LbData = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PlLeft = (gcnew System::Windows::Forms::Panel());
			this->BtEmail = (gcnew System::Windows::Forms::PictureBox());
			this->BtWhatsapp = (gcnew System::Windows::Forms::PictureBox());
			this->BtYoutube = (gcnew System::Windows::Forms::PictureBox());
			this->BtFacebook = (gcnew System::Windows::Forms::PictureBox());
			this->BtInstagram = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->VideoPlay = (gcnew Vlc::DotNet::Forms::VlcControl());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BarraTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMenu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMaximizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtFechar))->BeginInit();
			this->PLStatus->SuspendLayout();
			this->PlLeft->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtEmail))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtWhatsapp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtYoutube))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtFacebook))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtInstagram))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VideoPlay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BarraTop
			// 
			this->BarraTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->BarraTop->Controls->Add(this->pictureBox1);
			this->BarraTop->Controls->Add(this->BtMenu);
			this->BarraTop->Controls->Add(this->label1);
			this->BarraTop->Controls->Add(this->BtMinimizar);
			this->BarraTop->Controls->Add(this->BtMaximizar);
			this->BarraTop->Controls->Add(this->BtFechar);
			this->BarraTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->BarraTop->Location = System::Drawing::Point(0, 0);
			this->BarraTop->Name = L"BarraTop";
			this->BarraTop->Size = System::Drawing::Size(1008, 52);
			this->BarraTop->TabIndex = 0;
			this->BarraTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::BarraTop_MouseDown);
			this->BarraTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::BarraTop_MouseMove);
			// 
			// BtMenu
			// 
			this->BtMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtMenu.Image")));
			this->BtMenu->Location = System::Drawing::Point(213, 12);
			this->BtMenu->Name = L"BtMenu";
			this->BtMenu->Size = System::Drawing::Size(34, 29);
			this->BtMenu->TabIndex = 6;
			this->BtMenu->TabStop = false;
			this->BtMenu->Click += gcnew System::EventHandler(this, &FrmMain::BtMenu_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(61, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 28);
			this->label1->TabIndex = 5;
			this->label1->Text = L"FYDELISTECH";
			// 
			// BtMinimizar
			// 
			this->BtMinimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->BtMinimizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtMinimizar.Image")));
			this->BtMinimizar->Location = System::Drawing::Point(882, 12);
			this->BtMinimizar->Name = L"BtMinimizar";
			this->BtMinimizar->Size = System::Drawing::Size(34, 29);
			this->BtMinimizar->TabIndex = 4;
			this->BtMinimizar->TabStop = false;
			this->BtMinimizar->Click += gcnew System::EventHandler(this, &FrmMain::BtMinimizar_Click);
			// 
			// BtMaximizar
			// 
			this->BtMaximizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->BtMaximizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtMaximizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtMaximizar.Image")));
			this->BtMaximizar->Location = System::Drawing::Point(922, 12);
			this->BtMaximizar->Name = L"BtMaximizar";
			this->BtMaximizar->Size = System::Drawing::Size(34, 29);
			this->BtMaximizar->TabIndex = 4;
			this->BtMaximizar->TabStop = false;
			this->BtMaximizar->Click += gcnew System::EventHandler(this, &FrmMain::BtMaximizar_Click);
			// 
			// BtFechar
			// 
			this->BtFechar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->BtFechar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtFechar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtFechar.Image")));
			this->BtFechar->Location = System::Drawing::Point(962, 12);
			this->BtFechar->Name = L"BtFechar";
			this->BtFechar->Size = System::Drawing::Size(34, 29);
			this->BtFechar->TabIndex = 3;
			this->BtFechar->TabStop = false;
			this->BtFechar->Click += gcnew System::EventHandler(this, &FrmMain::BtFechar_Click);
			// 
			// PLStatus
			// 
			this->PLStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->PLStatus->Controls->Add(this->LbMac);
			this->PLStatus->Controls->Add(this->label5);
			this->PLStatus->Controls->Add(this->label7);
			this->PLStatus->Controls->Add(this->LbValidade);
			this->PLStatus->Controls->Add(this->LbData);
			this->PLStatus->Controls->Add(this->label4);
			this->PLStatus->Controls->Add(this->label3);
			this->PLStatus->Controls->Add(this->label2);
			this->PLStatus->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PLStatus->Location = System::Drawing::Point(0, 695);
			this->PLStatus->Name = L"PLStatus";
			this->PLStatus->Size = System::Drawing::Size(1008, 34);
			this->PLStatus->TabIndex = 1;
			// 
			// LbMac
			// 
			this->LbMac->AutoSize = true;
			this->LbMac->ForeColor = System::Drawing::Color::White;
			this->LbMac->Location = System::Drawing::Point(734, 11);
			this->LbMac->Name = L"LbMac";
			this->LbMac->Size = System::Drawing::Size(0, 13);
			this->LbMac->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(695, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"MAC:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(503, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"https://www.fydelis.tech";
			// 
			// LbValidade
			// 
			this->LbValidade->AutoSize = true;
			this->LbValidade->ForeColor = System::Drawing::Color::White;
			this->LbValidade->Location = System::Drawing::Point(279, 12);
			this->LbValidade->Name = L"LbValidade";
			this->LbValidade->Size = System::Drawing::Size(0, 13);
			this->LbValidade->TabIndex = 4;
			// 
			// LbData
			// 
			this->LbData->AutoSize = true;
			this->LbData->ForeColor = System::Drawing::Color::White;
			this->LbData->Location = System::Drawing::Point(57, 12);
			this->LbData->Name = L"LbData";
			this->LbData->Size = System::Drawing::Size(0, 13);
			this->LbData->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(435, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"SUPORTE:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(210, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"VALIDADE:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"DATA:";
			// 
			// PlLeft
			// 
			this->PlLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->PlLeft->Controls->Add(this->BtEmail);
			this->PlLeft->Controls->Add(this->BtWhatsapp);
			this->PlLeft->Controls->Add(this->BtYoutube);
			this->PlLeft->Controls->Add(this->BtFacebook);
			this->PlLeft->Controls->Add(this->BtInstagram);
			this->PlLeft->Controls->Add(this->button9);
			this->PlLeft->Controls->Add(this->button7);
			this->PlLeft->Controls->Add(this->button6);
			this->PlLeft->Controls->Add(this->button5);
			this->PlLeft->Controls->Add(this->button4);
			this->PlLeft->Controls->Add(this->button3);
			this->PlLeft->Controls->Add(this->button2);
			this->PlLeft->Controls->Add(this->button1);
			this->PlLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PlLeft->Dock = System::Windows::Forms::DockStyle::Left;
			this->PlLeft->Location = System::Drawing::Point(0, 52);
			this->PlLeft->Name = L"PlLeft";
			this->PlLeft->Size = System::Drawing::Size(199, 643);
			this->PlLeft->TabIndex = 2;
			// 
			// BtEmail
			// 
			this->BtEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BtEmail->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtEmail->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtEmail.Image")));
			this->BtEmail->Location = System::Drawing::Point(154, 608);
			this->BtEmail->Name = L"BtEmail";
			this->BtEmail->Size = System::Drawing::Size(34, 29);
			this->BtEmail->TabIndex = 14;
			this->BtEmail->TabStop = false;
			// 
			// BtWhatsapp
			// 
			this->BtWhatsapp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BtWhatsapp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtWhatsapp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtWhatsapp.Image")));
			this->BtWhatsapp->Location = System::Drawing::Point(117, 608);
			this->BtWhatsapp->Name = L"BtWhatsapp";
			this->BtWhatsapp->Size = System::Drawing::Size(34, 29);
			this->BtWhatsapp->TabIndex = 13;
			this->BtWhatsapp->TabStop = false;
			// 
			// BtYoutube
			// 
			this->BtYoutube->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BtYoutube->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtYoutube->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtYoutube.Image")));
			this->BtYoutube->Location = System::Drawing::Point(81, 608);
			this->BtYoutube->Name = L"BtYoutube";
			this->BtYoutube->Size = System::Drawing::Size(34, 29);
			this->BtYoutube->TabIndex = 12;
			this->BtYoutube->TabStop = false;
			// 
			// BtFacebook
			// 
			this->BtFacebook->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BtFacebook->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtFacebook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtFacebook.Image")));
			this->BtFacebook->Location = System::Drawing::Point(44, 608);
			this->BtFacebook->Name = L"BtFacebook";
			this->BtFacebook->Size = System::Drawing::Size(34, 29);
			this->BtFacebook->TabIndex = 11;
			this->BtFacebook->TabStop = false;
			// 
			// BtInstagram
			// 
			this->BtInstagram->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BtInstagram->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtInstagram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtInstagram.Image")));
			this->BtInstagram->Location = System::Drawing::Point(7, 608);
			this->BtInstagram->Name = L"BtInstagram";
			this->BtInstagram->Size = System::Drawing::Size(34, 29);
			this->BtInstagram->TabIndex = 10;
			this->BtInstagram->TabStop = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(12, 363);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(178, 40);
			this->button9->TabIndex = 9;
			this->button9->Text = L"CONFIGURAÇÃO";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(12, 317);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(178, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"ATIVAÇÃO";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(12, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(178, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"CANAIS";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(12, 144);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"KIDS";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(12, 98);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"SÉRIES";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(12, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 40);
			this->button3->TabIndex = 0;
			this->button3->Text = L"FILMES";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(12, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"SUPORTE";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"PRINCIPAL";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// VideoPlay
			// 
			this->VideoPlay->BackColor = System::Drawing::Color::Black;
			this->VideoPlay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->VideoPlay->Location = System::Drawing::Point(199, 52);
			this->VideoPlay->Name = L"VideoPlay";
			this->VideoPlay->Size = System::Drawing::Size(809, 643);
			this->VideoPlay->Spu = -1;
			this->VideoPlay->TabIndex = 3;
			this->VideoPlay->Text = L"FYDELISTECH";
			this->VideoPlay->VlcLibDirectory = nullptr;
			this->VideoPlay->VlcMediaplayerOptions = nullptr;
			this->VideoPlay->VlcLibDirectoryNeeded += gcnew System::EventHandler<Vlc::DotNet::Forms::VlcLibDirectoryNeededEventArgs^ >(this, &FrmMain::VideoPlay_VlcLibDirectoryNeeded);
			this->VideoPlay->Playing += gcnew System::EventHandler<Vlc::DotNet::Core::VlcMediaPlayerPlayingEventArgs^ >(this, &FrmMain::VideoPlay_Playing);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(7, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->ControlBox = false;
			this->Controls->Add(this->VideoPlay);
			this->Controls->Add(this->PlLeft);
			this->Controls->Add(this->PLStatus);
			this->Controls->Add(this->BarraTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FYDELISTECH";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FrmMain::FrmMain_Load);
			this->BarraTop->ResumeLayout(false);
			this->BarraTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMenu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMaximizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtFechar))->EndInit();
			this->PLStatus->ResumeLayout(false);
			this->PLStatus->PerformLayout();
			this->PlLeft->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtEmail))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtWhatsapp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtYoutube))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtFacebook))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtInstagram))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VideoPlay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void FrmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			/*Assembly^ currentAssembly = Assembly::GetEntryAssembly();
			String^ Path = FileInfo(currentAssembly->Location).DirectoryName;
			DirectoryInfo ^ libDirectory = gcnew DirectoryInfo(Path::Combine(Path, "libvlc", IntPtr::Size == 4 ? "win-x86" : "win-x64"));*/

			DateTime DataInicial = DateTime::Now;

			LbData->Text = DataInicial.Now.ToString("dd/MM/yyyy");
			LbValidade->Text = DataInicial.AddDays(30).ToString("dd/MM/yyyy");
			LbMac->Text = getEnderecoMac();

			VideoPlay->Play(gcnew Uri("https://fydelis.tech/IPTV/FYDELIS.mp4"));
			VideoPlay->Show();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void BarraLateral_BeforeSelect(System::Object^ sender, System::Windows::Forms::TreeViewCancelEventArgs^ e) {
	
}
	   
	   private: String^ getEnderecoMac() {
		   String^ EnderecoMac = String::Empty;
		   for each (NetworkInterface^ nic in NetworkInterface::GetAllNetworkInterfaces()) {
			   if (nic->OperationalStatus == OperationalStatus::Up) {
				   EnderecoMac += nic->GetPhysicalAddress()->ToString();
				   break;
			   }
		   }

		   return EnderecoMac;
	   }

private: System::Void VideoPlay_VlcLibDirectoryNeeded(System::Object^ sender, Vlc::DotNet::Forms::VlcLibDirectoryNeededEventArgs^ e) {
	try
	{
		Assembly^ currentAssembly = Assembly::GetEntryAssembly();
		String^ currentDirectory = FileInfo(currentAssembly->Location).DirectoryName;
		
		e->VlcLibDirectory = gcnew DirectoryInfo(Path::Combine(currentDirectory, "libvlc", IntPtr::Size == 4 ? "win-x86" : "win-x64"));
		

		if (!e->VlcLibDirectory->Exists) {
			FolderBrowserDialog^ dialog = gcnew FolderBrowserDialog();
			dialog->Description = "Select Vlc libraries folder.";
			dialog->RootFolder = Environment::SpecialFolder::Desktop;
			dialog->ShowNewFolderButton = true;

			e->VlcLibDirectory = gcnew DirectoryInfo(dialog->SelectedPath);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void BarraLateral_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	try
	{
		if (e->Node->Text->Equals("RecordNews")) {

			//VideoPlay->Play(gcnew Uri("https://stream.ads.ottera.tv/playlist.m3u8?network_id=2116"));
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   private: int X = 0;
	   private: int Y = 0;

private: System::Void BtFechar_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void BtMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {

	this->WindowState = FormWindowState::Minimized;
}
private: System::Void BtMaximizar_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->WindowState == FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Normal;
		this->CenterToScreen();
	}
	else
	{
		this->WindowState = FormWindowState::Maximized;
		this->CenterToScreen();
	}
}
private: System::Void BarraTop_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	if (e->Button != System::Windows::Forms::MouseButtons::Left) {
		X = this->Left - MousePosition.X;
		Y = this->Top - MousePosition.Y;
	}
	
}
private: System::Void BtMenu_Click(System::Object^ sender, System::EventArgs^ e) {

	if (PlLeft->Size.Width == 199) {
		PlLeft->Width = 40;
	}
	else
	{
		PlLeft->Width = 199;
	}
}
private: System::Void BarraTop_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button != System::Windows::Forms::MouseButtons::Left) return;
	this->Left = X + MousePosition.X;
	this->Top = Y + MousePosition.Y;
}
private: System::Void VideoPlay_Playing(System::Object^ sender, Vlc::DotNet::Core::VlcMediaPlayerPlayingEventArgs^ e) {
	try
	{
		
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
