#pragma once
#include "Service-Clients.h"



namespace ProjetProgrammationOrientéeObjetProgramme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Description résumée de VueClients
	/// </summary>
	public ref class VueClients : public System::Windows::Forms::Form
	{
	public:
		VueClients(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~VueClients()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_code;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;




	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_first;
	private: int index;
	private: Data::DataSet^ ds;
	private: NS_Comp_Svc::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ txt_telephone;
	private: System::Windows::Forms::TextBox^ txt_email;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: DevExpress::XtraEditors::DateEdit^ txt_date_anniversaire;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label13;

	public: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ txt_genre;
	private: System::Windows::Forms::TextBox^ txt_id_adresse;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txt_numero_rue;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txt_numero_logement;
	private: System::Windows::Forms::TextBox^ txt_nom_rue;
	private: System::Windows::Forms::TextBox^ txt_nom_residence;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ txt_nom_batiment;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txt_etage;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ txt_type_adresse;
	private: System::Windows::Forms::TextBox^ txt_id_client;

	private: System::Windows::Forms::TextBox^ txt_nom_ville;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;



	public:

	public:
	private:





	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VueClients::typeid));
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_telephone = (gcnew System::Windows::Forms::TextBox());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_date_anniversaire = (gcnew DevExpress::XtraEditors::DateEdit());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_genre = (gcnew System::Windows::Forms::ComboBox());
			this->txt_id_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_numero_rue = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txt_numero_logement = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_rue = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_residence = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txt_nom_batiment = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_etage = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txt_type_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_client = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_ville = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txt_date_anniversaire->Properties->CalendarTimeProperties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txt_date_anniversaire->Properties))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(559, 103);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(365, 398);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VueClients::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::Color::White;
			this->btn_load->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_load.BackgroundImage")));
			this->btn_load->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_load->Location = System::Drawing::Point(13, 19);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(87, 79);
			this->btn_load->TabIndex = 1;
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &VueClients::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::Color::White;
			this->btn_insert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_insert->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_insert.Image")));
			this->btn_insert->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_insert->Location = System::Drawing::Point(21, 124);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(80, 79);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &VueClients::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::White;
			this->btn_delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete.BackgroundImage")));
			this->btn_delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_delete->Location = System::Drawing::Point(21, 338);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(79, 76);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &VueClients::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update.Image")));
			this->btn_update->Location = System::Drawing::Point(21, 231);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(79, 81);
			this->btn_update->TabIndex = 4;
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &VueClients::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(59, 15);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(228, 20);
			this->txt_id->TabIndex = 5;
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(59, 50);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(228, 20);
			this->txt_code->TabIndex = 6;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(59, 100);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(228, 20);
			this->txt_nom->TabIndex = 7;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(44, 561);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(591, 39);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(20, 537);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 29);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Message";
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(437, 531);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(47, 24);
			this->btn_end->TabIndex = 16;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &VueClients::btn_end_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(354, 531);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(55, 24);
			this->btn_next->TabIndex = 17;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &VueClients::btn_next_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(258, 531);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(60, 24);
			this->btn_previous->TabIndex = 18;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &VueClients::btn_previous_Click);
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(166, 531);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(65, 24);
			this->btn_first->TabIndex = 19;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &VueClients::btn_first_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(865, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 57);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VueClients::button2_Click_1);
			// 
			// txt_telephone
			// 
			this->txt_telephone->Location = System::Drawing::Point(81, 277);
			this->txt_telephone->Name = L"txt_telephone";
			this->txt_telephone->Size = System::Drawing::Size(206, 20);
			this->txt_telephone->TabIndex = 22;
			this->txt_telephone->TextChanged += gcnew System::EventHandler(this, &VueClients::textBox2_TextChanged);
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(59, 233);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(228, 20);
			this->txt_email->TabIndex = 23;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(59, 148);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(228, 20);
			this->txt_prenom->TabIndex = 24;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->btn_insert);
			this->groupBox1->Controls->Add(this->btn_update);
			this->groupBox1->Controls->Add(this->btn_delete);
			this->groupBox1->Controls->Add(this->btn_load);
			this->groupBox1->Location = System::Drawing::Point(930, 94);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(124, 435);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label9->Location = System::Drawing::Point(36, 101);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Charger";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label8->Location = System::Drawing::Point(34, 420);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Supprimer";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label7->Location = System::Drawing::Point(38, 315);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Modifier";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label6->Location = System::Drawing::Point(35, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Nouveau";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(315, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(169, 132);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"";
			this->pictureBox1->Click += gcnew System::EventHandler(this, &VueClients::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(361, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Parcourir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VueClients::button1_Click_1);
			// 
			// txt_date_anniversaire
			// 
			this->txt_date_anniversaire->EditValue = nullptr;
			this->txt_date_anniversaire->Location = System::Drawing::Point(101, 313);
			this->txt_date_anniversaire->Name = L"txt_date_anniversaire";
			this->txt_date_anniversaire->Properties->Buttons->AddRange(gcnew cli::array< DevExpress::XtraEditors::Controls::EditorButton^  >(1) { (gcnew DevExpress::XtraEditors::Controls::EditorButton(DevExpress::XtraEditors::Controls::ButtonPredefines::Combo)) });
			this->txt_date_anniversaire->Properties->CalendarTimeProperties->Buttons->AddRange(gcnew cli::array< DevExpress::XtraEditors::Controls::EditorButton^  >(1) { (gcnew DevExpress::XtraEditors::Controls::EditorButton(DevExpress::XtraEditors::Controls::ButtonPredefines::Combo)) });
			this->txt_date_anniversaire->Size = System::Drawing::Size(186, 20);
			this->txt_date_anniversaire->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label10->Location = System::Drawing::Point(3, 307);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 32);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Date\r\nd\'anniversaire";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label11->Location = System::Drawing::Point(2, 277);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 16);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Téléphone";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label12->Location = System::Drawing::Point(10, 237);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 16);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(7, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Genre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(7, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label3->Location = System::Drawing::Point(2, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Prenom";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label5->Location = System::Drawing::Point(7, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 16);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Nom";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label13->Location = System::Drawing::Point(12, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 16);
			this->label13->TabIndex = 38;
			this->label13->Text = L"ID";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Gadugi", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::SlateGray;
			this->label14->Location = System::Drawing::Point(550, 23);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(374, 51);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Gestion des clients";
			// 
			// txt_genre
			// 
			this->txt_genre->FormattingEnabled = true;
			this->txt_genre->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Homme", L"Femme", L"Autre" });
			this->txt_genre->Location = System::Drawing::Point(59, 192);
			this->txt_genre->Name = L"txt_genre";
			this->txt_genre->Size = System::Drawing::Size(228, 21);
			this->txt_genre->TabIndex = 41;
			// 
			// txt_id_adresse
			// 
			this->txt_id_adresse->Location = System::Drawing::Point(81, 356);
			this->txt_id_adresse->Name = L"txt_id_adresse";
			this->txt_id_adresse->Size = System::Drawing::Size(206, 20);
			this->txt_id_adresse->TabIndex = 42;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label15->Location = System::Drawing::Point(3, 360);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(74, 16);
			this->label15->TabIndex = 43;
			this->label15->Text = L"ID Adresse";
			// 
			// txt_numero_rue
			// 
			this->txt_numero_rue->Location = System::Drawing::Point(81, 402);
			this->txt_numero_rue->Name = L"txt_numero_rue";
			this->txt_numero_rue->Size = System::Drawing::Size(206, 20);
			this->txt_numero_rue->TabIndex = 44;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label16->Location = System::Drawing::Point(3, 403);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(77, 16);
			this->label16->TabIndex = 45;
			this->label16->Text = L"Numéro rue";
			// 
			// txt_numero_logement
			// 
			this->txt_numero_logement->Location = System::Drawing::Point(81, 447);
			this->txt_numero_logement->Name = L"txt_numero_logement";
			this->txt_numero_logement->Size = System::Drawing::Size(206, 20);
			this->txt_numero_logement->TabIndex = 46;
			// 
			// txt_nom_rue
			// 
			this->txt_nom_rue->Location = System::Drawing::Point(81, 479);
			this->txt_nom_rue->Name = L"txt_nom_rue";
			this->txt_nom_rue->Size = System::Drawing::Size(206, 20);
			this->txt_nom_rue->TabIndex = 47;
			// 
			// txt_nom_residence
			// 
			this->txt_nom_residence->Location = System::Drawing::Point(374, 208);
			this->txt_nom_residence->Name = L"txt_nom_residence";
			this->txt_nom_residence->Size = System::Drawing::Size(147, 20);
			this->txt_nom_residence->TabIndex = 49;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label17->Location = System::Drawing::Point(2, 436);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(66, 32);
			this->label17->TabIndex = 50;
			this->label17->Text = L"Numéro\r\n logement";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label18->Location = System::Drawing::Point(2, 479);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 16);
			this->label18->TabIndex = 51;
			this->label18->Text = L"Nom rue";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label19->Location = System::Drawing::Point(295, 200);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(67, 32);
			this->label19->TabIndex = 52;
			this->label19->Text = L"Nom \r\nrésidence";
			// 
			// txt_nom_batiment
			// 
			this->txt_nom_batiment->Location = System::Drawing::Point(374, 273);
			this->txt_nom_batiment->Name = L"txt_nom_batiment";
			this->txt_nom_batiment->Size = System::Drawing::Size(147, 20);
			this->txt_nom_batiment->TabIndex = 53;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label20->Location = System::Drawing::Point(295, 265);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 32);
			this->label20->TabIndex = 54;
			this->label20->Text = L"Nom\r\n bâtiment";
			// 
			// txt_etage
			// 
			this->txt_etage->Location = System::Drawing::Point(374, 325);
			this->txt_etage->Name = L"txt_etage";
			this->txt_etage->Size = System::Drawing::Size(147, 20);
			this->txt_etage->TabIndex = 55;
			this->txt_etage->TextChanged += gcnew System::EventHandler(this, &VueClients::textBox2_TextChanged_1);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label21->Location = System::Drawing::Point(295, 329);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(43, 16);
			this->label21->TabIndex = 56;
			this->label21->Text = L"Étage";
			// 
			// txt_type_adresse
			// 
			this->txt_type_adresse->Location = System::Drawing::Point(374, 386);
			this->txt_type_adresse->Name = L"txt_type_adresse";
			this->txt_type_adresse->Size = System::Drawing::Size(147, 20);
			this->txt_type_adresse->TabIndex = 57;
			// 
			// txt_id_client
			// 
			this->txt_id_client->Location = System::Drawing::Point(374, 479);
			this->txt_id_client->Name = L"txt_id_client";
			this->txt_id_client->Size = System::Drawing::Size(147, 20);
			this->txt_id_client->TabIndex = 58;
			// 
			// txt_nom_ville
			// 
			this->txt_nom_ville->Location = System::Drawing::Point(374, 435);
			this->txt_nom_ville->Name = L"txt_nom_ville";
			this->txt_nom_ville->Size = System::Drawing::Size(147, 20);
			this->txt_nom_ville->TabIndex = 59;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label22->Location = System::Drawing::Point(295, 374);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(70, 32);
			this->label22->TabIndex = 60;
			this->label22->Text = L"Type\r\n adresse 1";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label23->Location = System::Drawing::Point(295, 439);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(33, 16);
			this->label23->TabIndex = 61;
			this->label23->Text = L"Ville";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label24->Location = System::Drawing::Point(295, 480);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(56, 16);
			this->label24->TabIndex = 62;
			this->label24->Text = L"ID Client";
			// 
			// VueClients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->txt_nom_ville);
			this->Controls->Add(this->txt_id_client);
			this->Controls->Add(this->txt_type_adresse);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->txt_etage);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->txt_nom_batiment);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txt_nom_residence);
			this->Controls->Add(this->txt_nom_rue);
			this->Controls->Add(this->txt_numero_logement);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txt_numero_rue);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txt_id_adresse);
			this->Controls->Add(this->txt_genre);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_date_anniversaire);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->txt_telephone);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->dgv_enr);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VueClients";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &VueClients::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txt_date_anniversaire->Properties->CalendarTimeProperties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txt_date_anniversaire->Properties))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerTout("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		this->index = 0;
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Comp_Svc::CLservices();
		this->loadData(this->index);
		this->richTextBox1->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->selectionnerTout("liste");
		this->txt_id->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_code->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_genre->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		this->txt_email->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
		this->txt_telephone->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
		this->txt_date_anniversaire->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
		this->txt_numero_rue->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
		this->txt_numero_logement->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[9]);
		this->txt_nom_rue->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[10]);
		this->txt_nom_residence->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[11]);
		this->txt_nom_batiment->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[12]);
		this->txt_etage->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[13]);
		this->txt_type_adresse->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[14]);
		this->txt_nom_ville->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[15]);
		
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_code->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_genre->Text, this->txt_email->Text, this->txt_telephone->Text, this->txt_date_anniversaire->Text,Convert::ToInt32(this->txt_numero_rue->Text), Convert::ToInt32(this->txt_numero_logement->Text), this->txt_nom_rue->Text, this->txt_nom_residence->Text,this->txt_nom_batiment->Text, Convert::ToInt32(this->txt_etage->Text), this->txt_type_adresse->Text, this->txt_nom_ville->Text);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnePersonne(Convert::ToInt32(this->txt_id->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		/* this->oSvc->modifierUnePersonne(Convert::ToInt32(this->txt_id->Text), this->txt_code->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_genre->Text, this->txt_email->Text, this->txt_telephone->Text, this->txt_date_anniversaire->Text); */
	}
	private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;
		this->loadData(this->index);
		this->richTextBox1->Text = "Enregistrement n° : " + (this->index + 1);
	}
	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index);
			this->richTextBox1->Text = "Enregistrement n° : " + (this->index + 1);
		}

	}
	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index < this->ds->Tables["liste"]->Rows->Count - 1)
		{
			this->index++;
			this->loadData(this->index);
			this->richTextBox1->Text = "Enregistrement n° : " + (this->index + 1);
		}
	}
	private: System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e) {
		this->index = this->ds->Tables["liste"]->Rows->Count - 1;
		this->loadData(this->index);
		this->richTextBox1->Text = "Enregistrement n° : " + (this->index + 1);
	}


	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	OpenFileDialog dialog;
	dialog.Filter = "JPG Files(*.j)|*.jpg|all files(*.*)|*.*";
	dialog.ShowDialog();
	System::String^ img = dialog.FileName->ToString();
	pictureBox1->ImageLocation = img;
		
}
	    
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}