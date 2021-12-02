#pragma once
#include "MapTB-Adresse.h"
#include "Connexion.h"

namespace NS_Comp_Svc3
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage3::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUneAdresse(System::Int32^, System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::String^);
		void supprimerUneAdresse(System::Int32^);
		void modifierUneAdresse(System::Int32^, System::Int32^, System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::String^);
	};
}
