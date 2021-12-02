#pragma once
#include "Service-Paiement.h"

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
	public ref class VuePaiement : public System::Windows::Forms::Form
	{
	public:
		VuePaiement(void)
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
		~VuePaiement()
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
	private: System::Windows::Forms::TextBox^ txt_id_p;
	private: System::Windows::Forms::TextBox^ txt_montant;
	private: System::Windows::Forms::TextBox^ txt_moyen;





	private: NS_Comp_Svc10::CLservices^ oSvc;
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
	private: NS_Comp_Svc10::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_date_pai;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_date_sol;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_id_c;




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
			this->txt_id_p = (gcnew System::Windows::Forms::TextBox());
			this->txt_montant = (gcnew System::Windows::Forms::TextBox());
			this->txt_moyen = (gcnew System::Windows::Forms::TextBox());
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_date_pai = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_date_sol = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_id_c = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(422, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(615, 512);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VuePaiement::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(209, 362);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(165, 237);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &VuePaiement::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(27, 362);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(92, 47);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Nouveau";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &VuePaiement::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(27, 555);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(92, 44);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &VuePaiement::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(27, 456);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(92, 49);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mise à jour";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &VuePaiement::btn_update_Click);
			// 
			// txt_id_p
			// 
			this->txt_id_p->Location = System::Drawing::Point(71, 43);
			this->txt_id_p->Name = L"txt_id_p";
			this->txt_id_p->Size = System::Drawing::Size(263, 20);
			this->txt_id_p->TabIndex = 5;
			// 
			// txt_montant
			// 
			this->txt_montant->Location = System::Drawing::Point(71, 82);
			this->txt_montant->Name = L"txt_montant";
			this->txt_montant->Size = System::Drawing::Size(263, 20);
			this->txt_montant->TabIndex = 6;
			// 
			// txt_moyen
			// 
			this->txt_moyen->Location = System::Drawing::Point(70, 121);
			this->txt_moyen->Name = L"txt_moyen";
			this->txt_moyen->Size = System::Drawing::Size(264, 20);
			this->txt_moyen->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID Paiement";
			this->label1->Click += gcnew System::EventHandler(this, &VuePaiement::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Moyen de paiement";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(744, 546);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(155, 47);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(688, 563);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Message";
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(328, 308);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(46, 23);
			this->btn_end->TabIndex = 16;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &VuePaiement::btn_end_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(218, 308);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(46, 23);
			this->btn_next->TabIndex = 17;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &VuePaiement::btn_next_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(124, 308);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(46, 23);
			this->btn_previous->TabIndex = 18;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &VuePaiement::btn_previous_Click);
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(27, 308);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(46, 23);
			this->btn_first->TabIndex = 19;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &VuePaiement::btn_first_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(905, 546);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 47);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VuePaiement::button2_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Montant";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Date de paiement";
			// 
			// txt_date_pai
			// 
			this->txt_date_pai->Location = System::Drawing::Point(71, 160);
			this->txt_date_pai->Name = L"txt_date_pai";
			this->txt_date_pai->Size = System::Drawing::Size(264, 20);
			this->txt_date_pai->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Date solde règlement";
			// 
			// txt_date_sol
			// 
			this->txt_date_sol->Location = System::Drawing::Point(71, 199);
			this->txt_date_sol->Name = L"txt_date_sol";
			this->txt_date_sol->Size = System::Drawing::Size(264, 20);
			this->txt_date_sol->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(68, 222);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"ID Commande";
			// 
			// txt_id_c
			// 
			this->txt_id_c->Location = System::Drawing::Point(71, 238);
			this->txt_id_c->Name = L"txt_id_c";
			this->txt_id_c->Size = System::Drawing::Size(264, 20);
			this->txt_id_c->TabIndex = 32;
			// 
			// VuePaiement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->txt_id_c);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_date_sol);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_date_pai);
			this->Controls->Add(this->label3);
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
			this->Controls->Add(this->txt_moyen);
			this->Controls->Add(this->txt_montant);
			this->Controls->Add(this->txt_id_p);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"VuePaiement";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &VuePaiement::MyForm_Load);
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
		this->processusPersonnes = gcnew NS_Comp_Svc10::CLservices();
		this->loadData(this->index);
		this->richTextBox1->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->selectionnerTout("liste");
		this->txt_id_p->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_montant->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_moyen->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_date_pai->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_date_sol->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		this->txt_id_c->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc10::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnPaiement(Convert::ToInt32(this->txt_montant->Text), this->txt_moyen->Text, this->txt_date_pai->Text, this->txt_date_sol->Text, Convert::ToInt32(this->txt_id_c->Text));
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
		this->oSvc->supprimerUnePersonne(Convert::ToInt32(this->txt_id_p->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUnPaiement(Convert::ToInt32(this->txt_id_p->Text), Convert::ToInt32(this->txt_montant->Text), this->txt_moyen->Text, this->txt_date_pai->Text, this->txt_date_sol->Text, Convert::ToInt32(this->txt_id_c->Text));

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