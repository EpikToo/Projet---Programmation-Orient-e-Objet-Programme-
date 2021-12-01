#pragma once
#include "MapTB-Catalogue.h"
#include "Connexion.h"

namespace NS_Comp_Svc4
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage4::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUnCatalogue(System::Int32^, System::Int32^);
		void supprimerUnCatalogue(System::Int32^);
		void modifierUnCatalogue(System::Int32^, System::Int32^, System::Int32^);
	};
}
