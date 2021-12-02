#pragma once
#include "VueClients.h"
#include "VueAdresses.h"
#include "VueVille.h"
#include "VueCatalogue.h"
#include "VuePersonnel.h"
#include "VueCommande.h"
#include "VueFacture.h"
#include "VueFacturePDF.h"
#include "VueSimVar.h"
#include "VueStats.h"


namespace ProjetProgrammationOrientéeObjetProgramme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl1;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;



	protected:




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->separatorControl1 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->separatorControl2 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl2))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(27, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(273, 52);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Gestion des adresses";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(27, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(273, 52);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Gestion de Clients";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Location = System::Drawing::Point(27, 553);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 52);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Fermer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(27, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(273, 52);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Gestion des villes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(27, 369);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(273, 52);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Gestion du catalogue";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(27, 311);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(273, 52);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Gestion du personnel";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(27, 195);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(273, 52);
			this->button7->TabIndex = 30;
			this->button7->Text = L"Gestion des commandes";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(943, 521);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 78);
			this->button8->TabIndex = 31;
			this->button8->Text = L"Modèle de facture";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(27, 253);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(273, 52);
			this->button9->TabIndex = 32;
			this->button9->Text = L"Gestion des factures";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::NoMoveHoriz;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(397, 9);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(570, 218);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->CausesValidation = false;
			this->label1->Cursor = System::Windows::Forms::Cursors::NoMoveHoriz;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(411, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(567, 114);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Golema, stocke \r\nvos données de Z, à A !";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// separatorControl1
			// 
			this->separatorControl1->BackColor = System::Drawing::Color::Transparent;
			this->separatorControl1->Location = System::Drawing::Point(906, -57);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(338, 23);
			this->separatorControl1->TabIndex = 35;
			// 
			// separatorControl2
			// 
			this->separatorControl2->BackColor = System::Drawing::Color::Transparent;
			this->separatorControl2->Location = System::Drawing::Point(361, 198);
			this->separatorControl2->Name = L"separatorControl2";
			this->separatorControl2->Size = System::Drawing::Size(651, 23);
			this->separatorControl2->TabIndex = 36;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(27, 485);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(273, 52);
			this->button10->TabIndex = 37;
			this->button10->Text = L"Simulation de valeurs";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Control;
			this->button11->Location = System::Drawing::Point(27, 427);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(273, 52);
			this->button11->TabIndex = 38;
			this->button11->Text = L"Gestion des statistiques";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->separatorControl2);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Golema";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueClients VueClients;
	VueClients.ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueAdresses VueAdresses;
	VueAdresses.ShowDialog();
	this->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueVille VueVille;
	VueVille.ShowDialog();
	this->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueCatalogue VueCatalogue;
	VueCatalogue.ShowDialog();
	this->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VuePersonnel VuePersonnel;
	VuePersonnel.ShowDialog();
	this->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueCommande VueCommande;
	VueCommande.ShowDialog();
	this->Show();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueFacturePDF VueFacturePDF;
	VueFacturePDF.ShowDialog();
	this->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueFacture VueFacture;
	VueFacture.ShowDialog();
	this->Show();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	SimVar SimVar;
	SimVar.ShowDialog();
	this->Show();

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	VueStats VueStats;
	VueStats.ShowDialog();
	this->Show();


}
};
}
