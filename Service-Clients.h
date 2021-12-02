#pragma once
#include "MapTB-Clients.h"
#include "Connexion.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void supprimerUnePersonne(System::Int32^);
		void modifierUnePersonne(System::Int32^ id, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::Int32^, System::Int32^, System::String^, System::String^, System::String^, System::Int32^, System::String^, System::String^);
	};
}
