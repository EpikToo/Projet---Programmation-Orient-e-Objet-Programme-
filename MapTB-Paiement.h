#pragma once
#include "MapTB.h"

namespace NS_Comp_Mappage10
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_paiement;
		System::Int32^ montant;
		System::String^ moyen_paiement;
		System::String^ date_paiement;
		System::String^ date_solde_reglement;
		System::Int32^ id_commande;
	public:

		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setMontant(System::Int32^);
		void setMoyen_paiement(System::String^);
		void setDate_paiement(System::String^);
		void setDate_solde_reglement(System::String^);
		void setId_commande(System::Int32^);

		System::Int32^ getId(void);
	};
}
