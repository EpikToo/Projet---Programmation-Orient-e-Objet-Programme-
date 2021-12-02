#pragma once
#include "Service-Commande.h"



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
	public ref class VueCommande : public System::Windows::Forms::Form
	{
	public:
		VueCommande(void)
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
		~VueCommande()
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
	private: System::Windows::Forms::TextBox^ txt_ref;
	private: System::Windows::Forms::TextBox^ txt_dateliv;




	private: NS_Comp_Svc6::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_first;
	private: int index;
	private: Data::DataSet^ ds;
	private: NS_Comp_Svc6::CLservices^ processusPersonnes;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_total_article;
	private: System::Windows::Forms::TextBox^ txt_TVA;
	private: System::Windows::Forms::TextBox^ txt_montant_HT;
	private: System::Windows::Forms::TextBox^ txt_dateemi;



	private: System::Windows::Forms::TextBox^ txt_montant_TTC;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_idclient;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_designation;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_couleur;
	private: System::Windows::Forms::Label^ label14;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VueCommande::typeid));
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateliv = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_total_article = (gcnew System::Windows::Forms::TextBox());
			this->txt_TVA = (gcnew System::Windows::Forms::TextBox());
			this->txt_montant_HT = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateemi = (gcnew System::Windows::Forms::TextBox());
			this->txt_montant_TTC = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_idclient = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_designation = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_couleur = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(450, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(587, 512);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VueCommande::dgv_enr_CellContentClick);
			// 
			// btn_load
			// 
			this->btn_load->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_load->Location = System::Drawing::Point(156, 484);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(148, 117);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger";
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &VueCommande::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_insert->Location = System::Drawing::Point(40, 484);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 29);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Nouveau";
			this->btn_insert->UseVisualStyleBackColor = false;
			this->btn_insert->Click += gcnew System::EventHandler(this, &VueCommande::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_delete->Location = System::Drawing::Point(40, 573);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 28);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &VueCommande::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_update->Location = System::Drawing::Point(40, 530);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 28);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mise à jour";
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &VueCommande::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(31, 16);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(243, 20);
			this->txt_id->TabIndex = 5;
			// 
			// txt_ref
			// 
			this->txt_ref->Location = System::Drawing::Point(32, 51);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->Size = System::Drawing::Size(243, 20);
			this->txt_ref->TabIndex = 6;
			// 
			// txt_dateliv
			// 
			this->txt_dateliv->Location = System::Drawing::Point(32, 85);
			this->txt_dateliv->Name = L"txt_dateliv";
			this->txt_dateliv->Size = System::Drawing::Size(243, 20);
			this->txt_dateliv->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID Commande";
			this->label1->Click += gcnew System::EventHandler(this, &VueCommande::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Date de livraison";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Date d\'émission";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(381, 554);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(518, 39);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(378, 538);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Message";
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(258, 455);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(46, 23);
			this->btn_end->TabIndex = 16;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &VueCommande::btn_end_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(175, 455);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(46, 23);
			this->btn_next->TabIndex = 17;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &VueCommande::btn_next_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(99, 455);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(46, 23);
			this->btn_previous->TabIndex = 18;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &VueCommande::btn_previous_Click);
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(17, 455);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(46, 23);
			this->btn_first->TabIndex = 19;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &VueCommande::btn_first_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(905, 554);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 47);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Accès au menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VueCommande::button2_Click_1);
			// 
			// txt_total_article
			// 
			this->txt_total_article->Location = System::Drawing::Point(31, 155);
			this->txt_total_article->Name = L"txt_total_article";
			this->txt_total_article->Size = System::Drawing::Size(243, 20);
			this->txt_total_article->TabIndex = 21;
			// 
			// txt_TVA
			// 
			this->txt_TVA->Location = System::Drawing::Point(31, 222);
			this->txt_TVA->Name = L"txt_TVA";
			this->txt_TVA->Size = System::Drawing::Size(243, 20);
			this->txt_TVA->TabIndex = 22;
			// 
			// txt_montant_HT
			// 
			this->txt_montant_HT->Location = System::Drawing::Point(31, 189);
			this->txt_montant_HT->Name = L"txt_montant_HT";
			this->txt_montant_HT->Size = System::Drawing::Size(243, 20);
			this->txt_montant_HT->TabIndex = 23;
			// 
			// txt_dateemi
			// 
			this->txt_dateemi->Location = System::Drawing::Point(32, 118);
			this->txt_dateemi->Name = L"txt_dateemi";
			this->txt_dateemi->Size = System::Drawing::Size(243, 20);
			this->txt_dateemi->TabIndex = 24;
			// 
			// txt_montant_TTC
			// 
			this->txt_montant_TTC->Location = System::Drawing::Point(31, 258);
			this->txt_montant_TTC->Name = L"txt_montant_TTC";
			this->txt_montant_TTC->Size = System::Drawing::Size(243, 20);
			this->txt_montant_TTC->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Référence";
			// 
			// txt_idclient
			// 
			this->txt_idclient->Location = System::Drawing::Point(31, 292);
			this->txt_idclient->Name = L"txt_idclient";
			this->txt_idclient->Size = System::Drawing::Size(243, 20);
			this->txt_idclient->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Nombre d\'article";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Montant HT";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"TVA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 244);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Montant TTC";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 278);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"ID Client";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(31, 326);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(243, 20);
			this->txt_nom->TabIndex = 33;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(31, 362);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(243, 20);
			this->txt_prenom->TabIndex = 34;
			// 
			// txt_designation
			// 
			this->txt_designation->Location = System::Drawing::Point(31, 399);
			this->txt_designation->Name = L"txt_designation";
			this->txt_designation->Size = System::Drawing::Size(243, 20);
			this->txt_designation->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 312);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 13);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Désignation";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 347);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 37;
			this->label12->Text = L"Couleur";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(28, 383);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 13);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Nom";
			// 
			// txt_couleur
			// 
			this->txt_couleur->Location = System::Drawing::Point(31, 434);
			this->txt_couleur->Name = L"txt_couleur";
			this->txt_couleur->Size = System::Drawing::Size(243, 20);
			this->txt_couleur->TabIndex = 39;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(28, 421);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 13);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Prénom";
			// 
			// VueCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_couleur);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_designation);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_idclient);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_montant_TTC);
			this->Controls->Add(this->txt_dateemi);
			this->Controls->Add(this->txt_montant_HT);
			this->Controls->Add(this->txt_TVA);
			this->Controls->Add(this->txt_total_article);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_dateliv);
			this->Controls->Add(this->txt_ref);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->dgv_enr);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VueCommande";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &VueCommande::MyForm_Load);
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
		this->processusPersonnes = gcnew NS_Comp_Svc6::CLservices();
		this->loadData(this->index);
		this->richTextBox1->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->selectionnerTout("liste");
		this->txt_id->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_ref->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_dateliv->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_dateemi->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_total_article->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		this->txt_montant_HT->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
		this->txt_TVA->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
		this->txt_montant_TTC->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
		this->txt_idclient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
		this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[9]);
		this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[10]);
		this->txt_designation->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[11]);
		this->txt_couleur->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[12]);

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc6::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUneCommande(this->txt_ref->Text,this->txt_dateliv->Text,this->txt_dateemi->Text,Convert::ToInt32(this->txt_total_article->Text),Convert::ToDecimal(this->txt_montant_HT->Text),Convert::ToDecimal(this->txt_TVA->Text),Convert::ToDecimal(this->txt_montant_TTC->Text),Convert::ToInt32(this->txt_idclient->Text));
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
		this->oSvc->supprimerUneCommande(Convert::ToInt32(this->txt_id->Text));
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUneCommande(Convert::ToInt32(this->txt_id->Text), this->txt_ref->Text, this->txt_dateliv->Text, this->txt_dateemi->Text, Convert::ToInt32(this->txt_total_article->Text), Convert::ToDecimal(this->txt_montant_HT->Text), Convert::ToDecimal(this->txt_TVA->Text), Convert::ToDecimal(this->txt_montant_TTC->Text), Convert::ToInt32(this->txt_idclient->Text));
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