#pragma once
#include "MapTB.h"
namespace NS_Comp_Mappage15
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Decimal^ TVA;
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



	};
}
