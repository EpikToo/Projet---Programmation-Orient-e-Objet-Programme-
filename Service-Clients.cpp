#include "pch.h"
#include "Service-Clients.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ code, System::String^ nom, System::String^ prenom, System::String^ genre, System::String^ email, System::String^ telephone, System::String^ date_anniversaire, System::Int32^ numero_rue, System::Int32^ numero_logement, System::String^ nom_rue, System::String^ nom_residence, System::String^ nom_batiment, System::Int32^ etage, System::String^ type_adresse1, System::String^ nom_ville)
{
	System::String^ sql;
	this->oMappTB->setCode(code);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setGenre(genre);
	this->oMappTB->setEmail(email);
	this->oMappTB->setTelephone(telephone);
	this->oMappTB->setDateAnniversaire(date_anniversaire);
	this->oMappTB->setNumero_rue(numero_rue);
	this->oMappTB->setNumero_logement(numero_logement);
	this->oMappTB->setNom_Rue(nom_rue);
	this->oMappTB->setNom_Residence(nom_residence);
	this->oMappTB->setNom_batiment(nom_batiment);
	this->oMappTB->setEtage(etage);
	this->oMappTB->setType_adresse1(type_adresse1);
	this->oMappTB->setNom_ville(nom_ville);
	
	sql = this->oMappTB->Insert();

	this->oCad->Modification(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::Int32^ id_client)
{
	System::String^ sql;
	this->oMappTB->setId(id_client);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc::CLservices::modifierUnePersonne(System::Int32^ id, System::String^ code, System::String^ nom, System::String^ prenom, System::String^ genre, System::String^ email, System::String^ telephone, System::String^ date_anniversaire, System::String^ avatar)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setCode(code);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setGenre(genre);
	this->oMappTB->setEmail(email);
	this->oMappTB->setTelephone(telephone);
	this->oMappTB->setDateAnniversaire(date_anniversaire);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
/* A */