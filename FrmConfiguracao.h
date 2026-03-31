#pragma once

namespace FydelisTech {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FrmConfiguracao
	/// </summary>
	public ref class FrmConfiguracao : public System::Windows::Forms::Form
	{
	public:
		FrmConfiguracao(void)
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
		~FrmConfiguracao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ BarraTop;
	protected:
	private: System::Windows::Forms::PictureBox^ BtMenu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ BtMinimizar;

	private: System::Windows::Forms::PictureBox^ BtFechar;
	private: System::Windows::Forms::Panel^ PLStatus;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ BtOK;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmConfiguracao::typeid));
			this->BarraTop = (gcnew System::Windows::Forms::Panel());
			this->BtMenu = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtMinimizar = (gcnew System::Windows::Forms::PictureBox());
			this->BtFechar = (gcnew System::Windows::Forms::PictureBox());
			this->PLStatus = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BtOK = (gcnew System::Windows::Forms::Button());
			this->BarraTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMenu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtFechar))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BarraTop
			// 
			this->BarraTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->BarraTop->Controls->Add(this->BtMenu);
			this->BarraTop->Controls->Add(this->label1);
			this->BarraTop->Controls->Add(this->BtMinimizar);
			this->BarraTop->Controls->Add(this->BtFechar);
			this->BarraTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->BarraTop->Location = System::Drawing::Point(0, 0);
			this->BarraTop->Name = L"BarraTop";
			this->BarraTop->Size = System::Drawing::Size(810, 52);
			this->BarraTop->TabIndex = 1;
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
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(28, 17);
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
			this->BtMinimizar->Location = System::Drawing::Point(727, 12);
			this->BtMinimizar->Name = L"BtMinimizar";
			this->BtMinimizar->Size = System::Drawing::Size(34, 29);
			this->BtMinimizar->TabIndex = 4;
			this->BtMinimizar->TabStop = false;
			this->BtMinimizar->Click += gcnew System::EventHandler(this, &FrmConfiguracao::BtMinimizar_Click);
			// 
			// BtFechar
			// 
			this->BtFechar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->BtFechar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtFechar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtFechar.Image")));
			this->BtFechar->Location = System::Drawing::Point(764, 12);
			this->BtFechar->Name = L"BtFechar";
			this->BtFechar->Size = System::Drawing::Size(34, 29);
			this->BtFechar->TabIndex = 3;
			this->BtFechar->TabStop = false;
			this->BtFechar->Click += gcnew System::EventHandler(this, &FrmConfiguracao::BtFechar_Click);
			// 
			// PLStatus
			// 
			this->PLStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->PLStatus->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PLStatus->Location = System::Drawing::Point(0, 499);
			this->PLStatus->Name = L"PLStatus";
			this->PLStatus->Size = System::Drawing::Size(810, 34);
			this->PLStatus->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BtOK);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(786, 435);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"CONFIGURAÇÃO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"IPTV";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"ar", L"pt-br", L"bg", L"cs", L"da", L"nl", L"en-gb",
					L"en-us", L"fi", L"fr", L"fr-ca", L"de\t", L"el\t", L"he\t", L"hi", L"hu", L"id", L"it", L"ja", L"ko", L"no", L"pl", L"ro", L"ru",
					L"zh-cn", L"es", L"sv", L"th", L"zh-tw", L"tr", L"uk\t", L"vi"
			});
			this->comboBox1->Location = System::Drawing::Point(31, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(47, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(584, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Idioma";
			// 
			// BtOK
			// 
			this->BtOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->BtOK->FlatAppearance->BorderSize = 0;
			this->BtOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtOK->ForeColor = System::Drawing::Color::White;
			this->BtOK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtOK.Image")));
			this->BtOK->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BtOK->Location = System::Drawing::Point(638, 368);
			this->BtOK->Name = L"BtOK";
			this->BtOK->Size = System::Drawing::Size(111, 50);
			this->BtOK->TabIndex = 9;
			this->BtOK->Text = L"&OK";
			this->BtOK->UseVisualStyleBackColor = false;
			this->BtOK->Click += gcnew System::EventHandler(this, &FrmConfiguracao::BtOK_Click);
			// 
			// FrmConfiguracao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(810, 533);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->PLStatus);
			this->Controls->Add(this->BarraTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmConfiguracao";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->BarraTop->ResumeLayout(false);
			this->BarraTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMenu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BtFechar))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtFechar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void BtMinimizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void BtOK_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
