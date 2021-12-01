#pragma once
#include "MapTB-Commande.h"
#include "Connexion.h"

namespace NS_Comp_Svc6
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage6::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUneCommande(System::String^, System::String^, System::String^, System::Int32^, System::Decimal^, System::Decimal^, System::Decimal^, System::Int32^);
		void supprimerUneCommande(System::Int32^);
		void modifierUneCommande(System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::Decimal^, System::Decimal^, System::Decimal^, System::Int32^);
	};
}
