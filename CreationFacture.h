#pragma once

namespace ProjetProgrammationOrientéeObjetProgramme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace DevExpress::XtraCharts;
	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;

	/// <summary>
	/// Description résumée de CreationFacture
	/// </summary>
	public ref class CreationFacture : public System::Windows::Forms::Form
	{
	public:
		CreationFacture(void)
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
		~CreationFacture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DevExpress::XtraEditors::SimpleButton^ simpleButton1;
	private: DevExpress::XtraEditors::SimpleButton^ simpleButton2;
	private: DevExpress::XtraEditors::SimpleButton^ simpleButton3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreationFacture::typeid));
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton2 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton3 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->SuspendLayout();
			// 
			// simpleButton1
			// 
			this->simpleButton1->Location = System::Drawing::Point(28, 12);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(112, 46);
			this->simpleButton1->TabIndex = 0;
			this->simpleButton1->Text = L"Exporter";
			this->simpleButton1->Click += gcnew System::EventHandler(this, &CreationFacture::simpleButton1_Click);
			// 
			// simpleButton2
			// 
			this->simpleButton2->Location = System::Drawing::Point(28, 80);
			this->simpleButton2->Name = L"simpleButton2";
			this->simpleButton2->Size = System::Drawing::Size(112, 46);
			this->simpleButton2->TabIndex = 1;
			this->simpleButton2->Text = L"Retour";
			this->simpleButton2->Click += gcnew System::EventHandler(this, &CreationFacture::simpleButton2_Click);
			// 
			// simpleButton3
			// 
			this->simpleButton3->Location = System::Drawing::Point(28, 159);
			this->simpleButton3->Name = L"simpleButton3";
			this->simpleButton3->Size = System::Drawing::Size(112, 46);
			this->simpleButton3->TabIndex = 2;
			this->simpleButton3->Text = L"Save";
			this->simpleButton3->Click += gcnew System::EventHandler(this, &CreationFacture::simpleButton3_Click);
			// 
			// CreationFacture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 611);
			this->Controls->Add(this->simpleButton3);
			this->Controls->Add(this->simpleButton2);
			this->Controls->Add(this->simpleButton1);
			this->Name = L"CreationFacture";
			this->Text = L"CreationFacture";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		ChartControl Export;
		Export.ExportToPdf("C:\\Users\\Flawz\\Desktop\\Chart.pdf");
	}
	private: System::Void simpleButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void simpleButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*iTextSharp::text::Rectangle(10, 10, 42, 35);
		
		PdfWriter wri();*/
	}
	};
}
