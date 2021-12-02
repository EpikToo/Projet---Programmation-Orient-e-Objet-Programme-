#pragma once
#include "MapTB.h"
namespace NS_Comp_Mappage4
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_catalogue;
		System::Int32^ quantite_produit;
		System::Int32^ seuil_reapprovisionnement;
	public:
		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setQuantité_produit(System::Int32^);
		void setSeuil_reapprovisionnement(System::Int32^);



		System::Int32^ getId(void);
	};
}
