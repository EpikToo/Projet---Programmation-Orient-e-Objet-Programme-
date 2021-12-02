#pragma once
#include "Service-SimVar.h"

namespace ProjetProgrammationOrientéeObjetProgramme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::Common;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de VueClients
	/// </summary>
	public ref class SimVar : public System::Windows::Forms::Form
	{
	public:
		SimVar(void)
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
		~SimVar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:








	private: NS_Comp_Svc15::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;










	private: int index;
	private: System::String^ stats;
	private: Data::DataSet^ ds;
	private: NS_Comp_Svc15::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;
























	public: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	public:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;




















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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(426, 72);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(611, 468);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SimVar::dgv_enr_CellContentClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(873, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 57);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SimVar::button2_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Gadugi", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::SlateGray;
			this->label14->Location = System::Drawing::Point(308, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(378, 51);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Gestion Simulation";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(40, 21);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(46, 17);
			this->checkBox1->TabIndex = 42;
			this->checkBox1->Text = L"10%";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(44, 210);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(324, 46);
			this->groupBox2->TabIndex = 43;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"TVA";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Location = System::Drawing::Point(250, 21);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(46, 17);
			this->checkBox3->TabIndex = 44;
			this->checkBox3->Text = L"30%";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Location = System::Drawing::Point(145, 21);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(46, 17);
			this->checkBox2->TabIndex = 43;
			this->checkBox2->Text = L"20%";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox2_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox5);
			this->groupBox3->Controls->Add(this->checkBox6);
			this->groupBox3->Location = System::Drawing::Point(44, 262);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(324, 46);
			this->groupBox3->TabIndex = 45;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Marge commerciale";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->Location = System::Drawing::Point(250, 19);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(46, 17);
			this->checkBox4->TabIndex = 44;
			this->checkBox4->Text = L"15%";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->Location = System::Drawing::Point(145, 19);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(46, 17);
			this->checkBox5->TabIndex = 43;
			this->checkBox5->Text = L"10%";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Transparent;
			this->checkBox6->Location = System::Drawing::Point(40, 21);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(40, 17);
			this->checkBox6->TabIndex = 42;
			this->checkBox6->Text = L"5%";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox6_CheckedChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->checkBox11);
			this->groupBox5->Controls->Add(this->checkBox12);
			this->groupBox5->Location = System::Drawing::Point(44, 314);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(324, 46);
			this->groupBox5->TabIndex = 46;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Remise commerciale";
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->BackColor = System::Drawing::Color::Transparent;
			this->checkBox11->Location = System::Drawing::Point(203, 19);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(40, 17);
			this->checkBox11->TabIndex = 43;
			this->checkBox11->Text = L"6%";
			this->checkBox11->UseVisualStyleBackColor = false;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->BackColor = System::Drawing::Color::Transparent;
			this->checkBox12->Location = System::Drawing::Point(81, 19);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(40, 17);
			this->checkBox12->TabIndex = 42;
			this->checkBox12->Text = L"5%";
			this->checkBox12->UseVisualStyleBackColor = false;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox12_CheckedChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Transparent;
			this->groupBox6->Controls->Add(this->checkBox13);
			this->groupBox6->Controls->Add(this->checkBox14);
			this->groupBox6->Controls->Add(this->checkBox15);
			this->groupBox6->Location = System::Drawing::Point(44, 366);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(324, 46);
			this->groupBox6->TabIndex = 47;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Démarche inconnue";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &SimVar::groupBox6_Enter);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->BackColor = System::Drawing::Color::Transparent;
			this->checkBox13->Location = System::Drawing::Point(250, 21);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(40, 17);
			this->checkBox13->TabIndex = 44;
			this->checkBox13->Text = L"5%";
			this->checkBox13->UseVisualStyleBackColor = false;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->BackColor = System::Drawing::Color::Transparent;
			this->checkBox14->Location = System::Drawing::Point(145, 21);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(40, 17);
			this->checkBox14->TabIndex = 43;
			this->checkBox14->Text = L"3%";
			this->checkBox14->UseVisualStyleBackColor = false;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox14_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->BackColor = System::Drawing::Color::Transparent;
			this->checkBox15->Location = System::Drawing::Point(40, 21);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(40, 17);
			this->checkBox15->TabIndex = 42;
			this->checkBox15->Text = L"2%";
			this->checkBox15->UseVisualStyleBackColor = false;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &SimVar::checkBox15_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(44, 432);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 108);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Afficher Résultat";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SimVar::button1_Click_2);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(247, 432);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(121, 108);
			this->listBox1->TabIndex = 54;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 56;
			// 
			// SimVar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"SimVar";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &SimVar::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc15::CLservices();
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

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {



	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 1.20);
		this->listBox1->Items->Add(this->stats);
		this->checkBox1->Checked = false;
		this->checkBox3->Checked = false;

	
	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 1.20);
		this->listBox1->Items->Add(this->stats);

	}
	}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox3->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 1.30);
		this->listBox1->Items->Add(this->stats);
		this->checkBox1->Checked = false;
		this->checkBox2->Checked = false;

	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 1.30);
		this->listBox1->Items->Add(this->stats);

	}
	}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerTout("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
	this->ds = gcnew Data::DataSet();
	this->processusPersonnes = gcnew NS_Comp_Svc15::CLservices();
	System::String^ order = "SELECT SUM(prix_produit_HT) as 'Valeur d`achat stock' FROM Article WHERE id_commande IS NULL";
	System::Data::SqlClient::SqlConnection^ oCnx;
	oCnx = gcnew System::Data::SqlClient::SqlConnection("Data Source = LAPTOP-U9N5DUUS\\MSSQL_FLO;Initial Catalog = POOP;Integrated Security=True");
	this->checkBox4->Checked = false;
	this->checkBox5->Checked = false;
	this->checkBox2->Checked = false;
	this->checkBox3->Checked = false;
	this->checkBox14->Checked = false;
	this->checkBox15->Checked = false;
	this->checkBox12->Checked = false;
	this->checkBox11->Checked = false;
	this->checkBox13->Checked = false;
	this->checkBox1->Checked = false;
	this->checkBox6->Checked = false;



	System::Data::SqlClient::SqlDataReader^ OleDbDataReader;
	System::Data::SqlClient::SqlCommand^ cmd;
	cmd = gcnew System::Data::SqlClient::SqlCommand(order, oCnx);
	this->oDs = gcnew System::Data::DataSet();
	cmd->CommandType = System::Data::CommandType::Text;
	this->listBox1->Items->Clear();
	oCnx->Open();

	OleDbDataReader = cmd->ExecuteReader();

	while (OleDbDataReader->Read()) {
		System::String^ val;
		val = OleDbDataReader[0]->ToString();
		this->stats = (OleDbDataReader[0]->ToString());
		this->listBox1->Items->Add(stats);
	}
	oCnx->Close();
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (this->checkBox1->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 1.10);
		this->listBox1->Items->Add(this->stats);
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;

	}
	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 1.10 );
		this->listBox1->Items->Add(this->stats);

	}
}

private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox6->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 1.05);
		this->listBox1->Items->Add(this->stats);
		this->checkBox4->Checked = false;
		this->checkBox5->Checked = false;


	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 1.05);
		this->listBox1->Items->Add(this->stats);

	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox5->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 1.10);
		this->listBox1->Items->Add(this->stats);
		this->checkBox4->Checked = false;
		this->checkBox6->Checked = false;

	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 1.10);
		this->listBox1->Items->Add(this->stats);

	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox4->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 1.15);
		this->listBox1->Items->Add(this->stats);
		this->checkBox6->Checked = false;
		this->checkBox5->Checked = false;


	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 1.15);
		this->listBox1->Items->Add(this->stats);

	}
}
private: System::Void checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox12->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 0.95);
		this->listBox1->Items->Add(this->stats);
		this->checkBox11->Checked = false;
		

	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 0.95);
		this->listBox1->Items->Add(this->stats);

	}

}
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox11->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 0.96);
		this->listBox1->Items->Add(this->stats);
		this->checkBox12->Checked = false;
	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 0.96);
		this->listBox1->Items->Add(this->stats);

	}
}
private: System::Void checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox15->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 0.98);
		this->listBox1->Items->Add(this->stats);
		this->checkBox14->Checked = false;
		this->checkBox13->Checked = false;

	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 0.98);
		this->listBox1->Items->Add(this->stats);

	}
}
private: System::Void groupBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox14->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 0.97);
		this->listBox1->Items->Add(this->stats);
		this->checkBox15->Checked = false;
		this->checkBox13->Checked = false;
	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 0.97);
		this->listBox1->Items->Add(this->stats);

	}
}
private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox13->Checked == true) {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) * 0.95);
		this->listBox1->Items->Add(this->stats);
		this->checkBox14->Checked = false;
		this->checkBox15->Checked = false;

	}

	else {
		this->listBox1->Items->Clear();
		this->stats = Convert::ToString(Convert::ToDouble(this->stats) / 0.95);
		this->listBox1->Items->Add(this->stats);

	}
}

};
}