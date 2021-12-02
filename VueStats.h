#pragma once
#include "Service-Stats.h"

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
	public ref class VueStats : public System::Windows::Forms::Form
	{
	public:
		VueStats(void)
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
		~VueStats()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::TextBox^ txt_id;


	private: NS_Comp_Svc30::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;




	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_first;
	private: int index;
	private: Data::DataSet^ ds;
	private: NS_Comp_Svc30::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;



















	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label13;

	public: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	public:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;








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
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(85, 535);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(357, 20);
			this->txt_id->TabIndex = 5;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(544, 552);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(315, 57);
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
			this->label4->Location = System::Drawing::Point(464, 549);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 29);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Message";
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(0, 0);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(0, 0);
			this->btn_next->TabIndex = 50;
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(0, 0);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(0, 0);
			this->btn_previous->TabIndex = 49;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(12, 72);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(0, 0);
			this->btn_first->TabIndex = 48;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(865, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 57);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VueStats::button2_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(33, 419);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Date 1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label13->Location = System::Drawing::Point(23, 536);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 16);
			this->label13->TabIndex = 38;
			this->label13->Text = L"ID Client";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Gadugi", 32.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::SlateGray;
			this->label14->Location = System::Drawing::Point(306, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(467, 51);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Gestion des statistiques";
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(469, 85);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(568, 437);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VueStats::dgv_enr_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(417, 38);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Panier moyen après remise";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VueStats::button1_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(417, 38);
			this->button3->TabIndex = 42;
			this->button3->Text = L"10 articles les moins vendus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VueStats::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 173);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(417, 38);
			this->button4->TabIndex = 43;
			this->button4->Text = L"10 articles les plus vendus";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VueStats::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 261);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(417, 38);
			this->button5->TabIndex = 44;
			this->button5->Text = L"Valeur commerciale du stock";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VueStats::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(25, 129);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(417, 38);
			this->button6->TabIndex = 45;
			this->button6->Text = L"Produits sous seuil de réapprovisionnement";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &VueStats::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(25, 471);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(417, 38);
			this->button7->TabIndex = 46;
			this->button7->Text = L"Chiffre d\'affaire sur un mois";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &VueStats::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(25, 305);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(417, 38);
			this->button8->TabIndex = 47;
			this->button8->Text = L"Valeur d\'achat du stock";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &VueStats::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(25, 561);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(417, 38);
			this->button9->TabIndex = 54;
			this->button9->Text = L"Calculer montant achats";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &VueStats::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(33, 446);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 16);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Date 2";
			this->label1->Click += gcnew System::EventHandler(this, &VueStats::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 419);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(357, 20);
			this->textBox1->TabIndex = 56;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 445);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(357, 20);
			this->textBox2->TabIndex = 57;
			// 
			// VueStats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"VueStats";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &VueStats::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerPanier("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		this->index = 0;
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Comp_Svc30::CLservices();
		this->richTextBox1->Text = "Data chargées";
	}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc30::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*this->oSvc->ajouterUnePersonne(this->txt_code->Text, this->txt_nom->Text, this->txt_prenom->Text, this->textBox1->Text, this->textBox3->Text, this->textBox2->Text, this->textBox5->Text, Convert::ToString(this->pictureBox1->Image));*/
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

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerPanier("Panier");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Panier";
		this->richTextBox1->Text = "Data chargées";
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerChiffre("Chiffre", this->textBox1->Text, this->textBox2->Text);
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Chiffre";
	this->richTextBox1->Text = "Data chargées";

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerProduitS("Produits");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Produits";
	this->richTextBox1->Text = "Data chargées";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerMontant("Montant", Convert::ToInt32(this->txt_id->Text));
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Montant";
	this->richTextBox1->Text = "Data chargées";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerArticlesMoins("Moins");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Moins";
	this->richTextBox1->Text = "Data chargées";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerArticlesPlus("Plus");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Plus";
	this->richTextBox1->Text = "Data chargées";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerValeurCom("Com");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Com";
	this->richTextBox1->Text = "Data chargées";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerValeurAchat("Achat");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Achat";
	this->richTextBox1->Text = "Data chargées";
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}