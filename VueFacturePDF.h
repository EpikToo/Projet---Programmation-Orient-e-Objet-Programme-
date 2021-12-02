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
	/// Description résumée de VueFacture
	/// </summary>
	public ref class VueFacturePDF : public System::Windows::Forms::Form
	{
	public:
		VueFacturePDF(void)
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
		~VueFacturePDF()
		{
			if (components)
			{
				delete components;
			}
		}


	private: DevExpress::XtraEditors::SimpleButton^ Retour;


	private: DevExpress::XtraEditors::SimpleButton^ simpleButton3;

	private: DevExpress::XtraEditors::TextEdit^ textEdit1;
	private: DevExpress::XtraPdfViewer::PdfViewer^ pdfViewer1;
	private: DevExpress::XtraBars::Ribbon::RibbonControl^ ribbonControl1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VueFacturePDF::typeid));
			this->Retour = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton3 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->textEdit1 = (gcnew DevExpress::XtraEditors::TextEdit());
			this->pdfViewer1 = (gcnew DevExpress::XtraPdfViewer::PdfViewer());
			this->ribbonControl1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textEdit1->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ribbonControl1))->BeginInit();
			this->SuspendLayout();
			// 
			// Retour
			// 
			this->Retour->Location = System::Drawing::Point(59, 87);
			this->Retour->Name = L"Retour";
			this->Retour->Size = System::Drawing::Size(83, 78);
			this->Retour->TabIndex = 2;
			this->Retour->Text = L"Retour";
			this->Retour->Click += gcnew System::EventHandler(this, &VueFacturePDF::Retour_Click);
			// 
			// simpleButton3
			// 
			this->simpleButton3->Location = System::Drawing::Point(59, 184);
			this->simpleButton3->Name = L"simpleButton3";
			this->simpleButton3->Size = System::Drawing::Size(83, 72);
			this->simpleButton3->TabIndex = 7;
			this->simpleButton3->Text = L"Exporter";
			this->simpleButton3->Click += gcnew System::EventHandler(this, &VueFacturePDF::simpleButton3_Click);
			// 
			// textEdit1
			// 
			this->textEdit1->EditValue = L"fdsgdsgfd";
			this->textEdit1->Location = System::Drawing::Point(190, -135);
			this->textEdit1->Name = L"textEdit1";
			this->textEdit1->Size = System::Drawing::Size(100, 20);
			this->textEdit1->TabIndex = 10;
			//
			// pdfViewer1
			// 
			this->pdfViewer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pdfViewer1->DocumentFilePath = L"C:\\Users\\saval\\Desktop\\Modele-Facture-Imprimable-PDF-source-Invoice-Template-2-1."
				L"pdf";
			this->pdfViewer1->Location = System::Drawing::Point(0, 50);
			this->pdfViewer1->MenuManager = this->ribbonControl1;
			this->pdfViewer1->Name = L"pdfViewer1";
			this->pdfViewer1->Size = System::Drawing::Size(1201, 674);
			this->pdfViewer1->TabIndex = 11;
			this->pdfViewer1->Load += gcnew System::EventHandler(this, &VueFacturePDF::pdfViewer1_Load);
			// 
			// ribbonControl1
			// 
			this->ribbonControl1->ExpandCollapseItem->Id = 0;
			this->ribbonControl1->Items->AddRange(gcnew cli::array< DevExpress::XtraBars::BarItem^  >(2) {
				this->ribbonControl1->ExpandCollapseItem,
					this->ribbonControl1->SearchEditItem
			});
			this->ribbonControl1->Location = System::Drawing::Point(0, 0);
			this->ribbonControl1->MaxItemId = 1;
			this->ribbonControl1->Name = L"ribbonControl1";
			this->ribbonControl1->Size = System::Drawing::Size(1201, 50);
			// 
			// VueFacturePDF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1201, 724);
			this->Controls->Add(this->simpleButton3);
			this->Controls->Add(this->Retour);
			this->Controls->Add(this->pdfViewer1);
			this->Controls->Add(this->textEdit1);
			this->Controls->Add(this->ribbonControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VueFacturePDF";
			this->Text = L"VueFacture";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textEdit1->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ribbonControl1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void chartControl1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void simpleButton3_Click(System::Object^ sender, System::EventArgs^ e) {

	ChartControl Export;
	Export.ExportToPdf("CC:\\Users\\saval\\Desktop\\Facture.pdf");
}
private: System::Void simpleButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pdfViewer1_Load(System::Object^ sender, System::EventArgs^ e) {



}
};
}
