#pragma once
#include "MapTB.h"

namespace NS_Comp_Mappage5
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_personnel;
		System::String^ personnel_nom;
		System::String^ personnel_prenom;
		System::String^ date_embauche;
		System::String^ typeadresse2;
		System::Int32^ id_adresse;
		System::Int32^ id_personnel_supérieur_hierarchique;

	public:

		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDate_embauche(System::String^);
		void setTypeadresse2(System::String^);
		void setId_personnel_superieur_hierarchique(System::Int32^);
		void setId_adresse(System::Int32^);

		System::Int32^ getId(void);
	};
}

/* PA */
