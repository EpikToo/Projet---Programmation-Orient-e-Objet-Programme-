#include "pch.h"
#include "Service-Adresse.h"

NS_Comp_Svc3::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage3::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc3::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc3::CLservices::ajouterUneAdresse(System::Int32^ numero_rue, System::Int32^ numero_logement, System::String^ nom_rue, System::String^ nom_residence, System::String^ nom_batiment, System::Int32^ etage, System::String^ type_adresse1, System::String^ nom_ville, System::Int32^ id_client)
{
	System::String^ sql;
	this->oMappTB->setNumero_rue(numero_rue);
	this->oMappTB->setNumero_logement(numero_logement);
	this->oMappTB->setNom_Rue(nom_rue);
	this->oMappTB->setNom_Residence(nom_residence);
	this->oMappTB->setNom_batiment(nom_batiment);
	this->oMappTB->setEtage(etage);
	this->oMappTB->setType_adresse1(type_adresse1);
	this->oMappTB->setNom_ville(nom_ville);
	this->oMappTB->setId_client(id_client);
	sql = this->oMappTB->Insert();

	this->oCad->Modification(sql);
}

void NS_Comp_Svc3::CLservices::supprimerUneAdresse(System::Int32^ id_adresse)
{
	System::String^ sql;
	this->oMappTB->setId(id_adresse);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc3::CLservices::modifierUneAdresse(System::Int32^ id, System::Int32^ numero_rue, System::Int32^ numero_logement, System::String^ nom_rue, System::String^ nom_residence, System::String^ nom_batiment, System::Int32^ etage, System::String^ type_adresse1, System::String^ nom_ville, System::Int32^ id_client)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNumero_rue(numero_rue);
	this->oMappTB->setNumero_logement(numero_logement);
	this->oMappTB->setNom_Rue(nom_rue);
	this->oMappTB->setNom_Residence(nom_residence);
	this->oMappTB->setNom_batiment(nom_batiment);
	this->oMappTB->setEtage(etage);
	this->oMappTB->setType_adresse1(type_adresse1);
	this->oMappTB->setNom_ville(nom_ville);
	this->oMappTB->setId_client(id_client);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
