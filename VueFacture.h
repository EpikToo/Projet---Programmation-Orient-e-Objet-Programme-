#pragma once
#include "Service-Facture.h"
#include "CreationFacture.h"

namespace ProjetProgrammationOrientéeObjetProgramme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de VueClients
	/// </summary>
	public ref class VueFacture : public System::Windows::Forms::Form
	{
	public:
		VueFacture(void)
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
		~VueFacture()
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
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_adresse;




	private: NS_Comp_Svc8::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_first;
	private: int index;
	private: Data::DataSet^ ds;
	private: NS_Comp_Svc8::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_num;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;










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
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_num = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(518, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(519, 521);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VueFacture::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(183, 301);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(301, 223);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &VueFacture::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(33, 301);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(92, 47);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Nouveau";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &VueFacture::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(33, 480);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(92, 44);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &VueFacture::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(33, 388);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(92, 49);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mise à jour";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &VueFacture::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(32, 28);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(263, 20);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(33, 70);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(263, 20);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(31, 118);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(264, 20);
			this->txt_adresse->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID Facture";
			this->label1->Click += gcnew System::EventHandler(this, &VueFacture::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Adresse de la société";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 560);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(518, 39);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 544);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Message";
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(438, 255);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(46, 23);
			this->btn_end->TabIndex = 16;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &VueFacture::btn_end_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(318, 255);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(46, 23);
			this->btn_next->TabIndex = 17;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &VueFacture::btn_next_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(212, 255);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(46, 23);
			this->btn_previous->TabIndex = 18;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &VueFacture::btn_previous_Click);
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(97, 255);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(46, 23);
			this->btn_first->TabIndex = 19;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &VueFacture::btn_first_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(848, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 47);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VueFacture::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Numéro de service de la société";
			// 
			// txt_num
			// 
			this->txt_num->Location = System::Drawing::Point(31, 166);
			this->txt_num->Name = L"txt_num";
			this->txt_num->Size = System::Drawing::Size(264, 20);
			this->txt_num->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Nom de la société";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 212);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Logo de la société";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(665, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 47);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Voir Facture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VueFacture::button1_Click_1);
			// 
			// VueFacture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_num);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"VueFacture";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &VueFacture::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
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
		this->processusPersonnes = gcnew NS_Comp_Svc8::CLservices();
		this->loadData(this->index);
		this->richTextBox1->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->selectionnerTout("liste");
		this->txt_id->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_adresse->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc8::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUneFacture(this->txt_nom->Text, this->txt_adresse->Text, this->txt_num->Text);
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
		this->oSvc->supprimerUneFacture(Convert::ToInt32(this->txt_id->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->modifierUneFacture(Convert::ToInt32(this->txt_id->Text), this->txt_nom->Text, this->txt_adresse->Text, this->txt_num->Text);
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
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		CreationFacture CreationFacture;
		CreationFacture.ShowDialog();
		this->Show();
	}
};
}