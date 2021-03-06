#pragma once
#include "Service-Catalogue.h"

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
	public ref class VueCatalogue : public System::Windows::Forms::Form
	{
	public:
		VueCatalogue(void)
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
		~VueCatalogue()
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
	private: System::Windows::Forms::TextBox^ txt_quantite;
	private: System::Windows::Forms::TextBox^ txt_seuil;


	private: NS_Comp_Svc4::CLservices^ oSvc;
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
	private: NS_Comp_Svc4::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::Label^ label5;



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
			this->txt_quantite = (gcnew System::Windows::Forms::TextBox());
			this->txt_seuil = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(334, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(703, 512);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VueCatalogue::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(163, 259);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(165, 237);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(32, 259);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(92, 47);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Nouveau";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(32, 452);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(92, 44);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(32, 353);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(92, 49);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mise à jour";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(32, 28);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(263, 20);
			this->txt_id->TabIndex = 5;
			// 
			// txt_quantite
			// 
			this->txt_quantite->Location = System::Drawing::Point(32, 83);
			this->txt_quantite->Name = L"txt_quantite";
			this->txt_quantite->Size = System::Drawing::Size(263, 20);
			this->txt_quantite->TabIndex = 6;
			// 
			// txt_seuil
			// 
			this->txt_seuil->Location = System::Drawing::Point(32, 133);
			this->txt_seuil->Name = L"txt_seuil";
			this->txt_seuil->Size = System::Drawing::Size(264, 20);
			this->txt_seuil->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID Catalogue";
			this->label1->Click += gcnew System::EventHandler(this, &VueCatalogue::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Seuil de réapprovisionnement";
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
			this->btn_end->Location = System::Drawing::Point(262, 211);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(46, 23);
			this->btn_end->TabIndex = 16;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_end_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(179, 211);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(46, 23);
			this->btn_next->TabIndex = 17;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_next_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(103, 211);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(46, 23);
			this->btn_previous->TabIndex = 18;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_previous_Click);
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(21, 211);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(46, 23);
			this->btn_first->TabIndex = 19;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &VueCatalogue::btn_first_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(848, 552);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 47);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VueCatalogue::button2_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Quantité de produits";
			// 
			// VueCatalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_seuil);
			this->Controls->Add(this->txt_quantite);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"VueCatalogue";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &VueCatalogue::MyForm_Load);
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
		this->processusPersonnes = gcnew NS_Comp_Svc4::CLservices();
		this->loadData(this->index);
		this->richTextBox1->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->selectionnerTout("liste");
		this->txt_id->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_quantite->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_seuil->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc4::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnCatalogue(Convert::ToInt32(this->txt_quantite->Text), Convert::ToInt32(this->txt_seuil->Text));
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
		this->oSvc->supprimerUnCatalogue(Convert::ToInt32(this->txt_id->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUnCatalogue(Convert::ToInt32(this->txt_id->Text), Convert::ToInt32(this->txt_quantite->Text), Convert::ToInt32(this->txt_seuil->Text));
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
	};
}