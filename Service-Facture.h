#pragma once
#include "MapTB-Facture.h"
#include "Connexion.h"

namespace NS_Comp_Svc8
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage8::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUneFacture(System::String^, System::String^, System::String^);
		void supprimerUneFacture(System::Int32^);
		void modifierUneFacture(System::Int32^, System::String^, System::String^, System::String^);
	};
}
