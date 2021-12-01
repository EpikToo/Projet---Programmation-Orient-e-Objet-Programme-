#pragma once
#include "MapTB-Paiement.h"
#include "Connexion.h"

namespace NS_Comp_Svc10
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage10::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUnPaiement(System::Int32^, System::String^, System::String^, System::String^, System::String^, System::Int32^);
		void supprimerUnePersonne(System::Int32^);
		void modifierUnPaiement(System::Int32^, System::Int32^, System::String^, System::String^, System::String^, System::String^, System::Int32^);
	};
}
