#pragma once
#include "MapTB.h"
namespace NS_Comp_Mappage8
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_facture;
		System::String^ nom_societe;
		System::String^ adresse_societe;
		System::String^ numero_service_client;
		System::String^ logo;
	public:
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setNom_societe(System::String^);
		void setAdresse_societe(System::String^);
		void setNumero_service_client(System::String^);
		
	

		System::Int32^ getId(void);
	};
}
