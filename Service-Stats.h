#pragma once
#include "MapTB-Stats.h"
#include "Connexion.h"

namespace NS_Comp_Svc30
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage30::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerPanier(System::String^);
		System::Data::DataSet^ selectionnerChiffre(System::String^, System::String^, System::String^);
		System::Data::DataSet^ selectionnerProduitS(System::String^);
		System::Data::DataSet^ selectionnerMontant(System::String^, System::Int32^);
		System::Data::DataSet^ selectionnerArticlesMoins(System::String^);
		System::Data::DataSet^ selectionnerArticlesPlus(System::String^);
		System::Data::DataSet^ selectionnerValeurCom(System::String^);
		System::Data::DataSet^ selectionnerValeurAchat(System::String^);
		
	};
}
