#pragma once
#include "MapTB.h"

namespace NS_Comp_Mappage
{
	ref class CLmapTB : public Mappage
	{
	private:
		System::Int32^ id_client;
		System::String^ client_code;
		System::String^ client_nom;
		System::String^ client_prenom;
		System::String^ client_genre;
		System::String^ client_email;
		System::String^ client_telephone;
		System::String^ client_date_anniversaire;
		System::Int32^ id_adresse;
		System::Int32^ numero_rue;
		System::Int32^ numero_logement;
		System::String^ nom_rue;
		System::String^ nom_residence;
		System::String^ nom_batiment;
		System::Int32^ etage;
		System::String^ type_adresse1;
		System::String^ nom_ville;

	public:

		System::String^ Select(void) override;
		System::String^ Insert(void) override;
		System::String^ Delete(void) override;
		System::String^ Update(void) override;

		void setId(System::Int32^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setCode(System::String^);
		void setGenre(System::String^);
		void setEmail(System::String^);
		void setTelephone(System::String^);
		void setDateAnniversaire(System::String^);
		void setNumero_rue(System::Int32^);
		void setNumero_logement(System::Int32^);
		void setNom_Rue(System::String^);
		void setNom_Residence(System::String^);
		void setNom_batiment(System::String^);
		void setEtage(System::Int32^);
		void setType_adresse1(System::String^);
		void setNom_ville(System::String^);
		


		System::Int32^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};
}

/* A */