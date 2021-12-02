#pragma once
#include "MapTB.h"
namespace NS_Comp_Mappage6
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_commande;
		System::String^ reference_commande;
		System::String^ date_livraison_prevue;
		System::String^ date_emission;
		System::Int32^ total_article;
		System::Decimal^ montant_ht;
		System::Decimal^ montant_tva;
		System::Decimal^ montant_ttc;
		System::Int32^ id_client;
		System::String^ nom_client;
		System::String^ prenom_client;
		System::String^ designation;
		System::String^ couleur;




	public:
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId_commande(System::Int32^);
		void setReference_commande(System::String^);
		void setDate_livraison_prevue(System::String^);
		void setDate_emission(System::String^);
		void setTotal_article(System::Int32^);
		void setMontant_ht(System::Decimal^);
		void setMontant_tva(System::Decimal^);
		void setMontant_ttc(System::Decimal^);
		void setId_client(System::Int32^);
		void setnom_client(System::String^);
		void setprenom_client(System::String^);
		void setdesignation(System::String^);
		void setcouleur(System::String^);

		System::Int32^ getId_commande(void);
	};
}
