#pragma once
#include "MapTB-Personnel.h"
#include "Connexion.h"

namespace NS_Comp_Svc5
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage5::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUnPersonnel(System::String^, System::String^, System::String^,System::String^, System::Int32^, System::Int32^);
		void supprimerUnPersonnel(System::Int32^);
		void ModifierUnPersonnel(System::Int32^, System::String^, System::String^, System::String^, System::String^, System::Int32^, System::Int32^);
	};
}
