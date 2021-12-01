#pragma once
#include "MapTB.h"
namespace NS_Comp_Mappage9
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_article;
		System::String^ reference_article;
		System::String^ designation;
		System::Decimal^ prix_produit_HT;
		System::Decimal^ taux_TVA;
		System::String^ couleur;
		System::String^ produit;
		System::Int32^ id_commande;
		System::Int32^ id_catalogue;
	public:
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setReference_article(System::String^);
		void setDesignation(System::String^);
		void setPrix_produitHT(System::Decimal^);
		void setTaux_tva(System::Decimal^);
		void setCouleur(System::String^);
		void setProduit(System::String^);
		void setId_commande(System::Int32^);
		void setId_Catalogue(System::Int32^);



		System::Int32^ getId(void);
	};
}