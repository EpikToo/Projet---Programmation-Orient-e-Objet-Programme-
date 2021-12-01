#pragma once
#include "MapTB-Ville.h"
#include "Connexion.h"

namespace NS_Comp_Svc2
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage2::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUneVille(System::String^, System::String^, System::String^);
		void supprimerUneVille(System::String^);
		void modifierUneVille(System::String^, System::String^, System::String^);
	};
}
