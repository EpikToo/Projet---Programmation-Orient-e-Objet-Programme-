#pragma once
#include "MapTB-Article.h"
#include "Connexion.h"

namespace NS_Comp_Svc9
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage9::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);
		void ajouterUnArticle(System::String^, System::String^, System::Double^, System::Int32^, System::String^, System::String^, System::Int32^, System::Int32^);
		void supprimerUnArticle(System::Int32^);
		void modifierUnArticle(System::Int32^, System::String^, System::String^, System::Double^, System::Int32^, System::String^, System::String^, System::Int32^, System::Int32^);
	};
}
