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
		System::Int32^ id_personnel_supérieur_hierarchique;
		System::String^ type_adresse2;
		System::Int32^ id_adresse;
		System::Int32^ numero_rue;
		System::Int32^ numero_logement;
		System::String^ nom_rue;
		System::String^ nom_residence;
		System::String^ nom_batiment;
		System::Int32^ etage;
		System::String^ type_adresse1;
		System::String^ nom_ville;
		System::Int32^ id_client;
	public:

		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDate_embauche(System::String^);
		void setId_personnel_superieur_hierarchique(System::Int32^);
		void setId_adressee(System::Int32^);
		void setNumero_rue(System::Int32^);
		void setNumero_logement(System::Int32^);
		void setNom_Rue(System::String^);
		void setNom_Residence(System::String^);
		void setNom_batiment(System::String^);
		void setEtage(System::Int32^);
		void setType_adresse1(System::String^);
		void setNom_ville(System::String^);

		System::Int32^ getId(void);
	};
}
