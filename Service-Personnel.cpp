#include "pch.h"
#include "Service-Personnel.h"

NS_Comp_Svc5::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage5::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc5::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc5::CLservices::ajouterUnPersonnel(System::String^ nom, System::String^ prenom, System::String^ date, System::Int32^ id_superieur, System::Int32^ numero_rue, System::Int32^ numero_logement, System::String^ nom_rue, System::String^ nom_residence, System::String^ nom_batiment, System::Int32^ etage, System::String^ nom_ville)
{
	System::String^ sql;
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setDate_embauche(date);
	this->oMappTB->setId_personnel_superieur_hierarchique(id_superieur);
	this->oMappTB->setNumero_rue(numero_rue);
	this->oMappTB->setNumero_logement(numero_logement);
	this->oMappTB->setNom_Rue(nom_rue);
	this->oMappTB->setNom_Residence(nom_residence);
	this->oMappTB->setNom_batiment(nom_batiment);
	this->oMappTB->setEtage(etage);
	this->oMappTB->setNom_ville(nom_ville);
	sql = this->oMappTB->Insert();

	this->oCad->Modification(sql);
}

void NS_Comp_Svc5::CLservices::supprimerUnPersonnel(System::Int32^ id_personnel)
{
	System::String^ sql;
	this->oMappTB->setId(id_personnel);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc5::CLservices::ModifierUnPersonnel(System::Int32^ id, System::String^ nom, System::String^ prenom, System::String^ date, System::Int32^ id_superieur, System::Int32^ numero_rue, System::Int32^ numero_logement, System::String^ nom_rue, System::String^ nom_residence, System::String^ nom_batiment, System::Int32^ etage, System::String^ nom_ville)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setDate_embauche(date);
	this->oMappTB->setId_personnel_superieur_hierarchique(id_superieur);
	this->oMappTB->setNumero_rue(numero_rue);
	this->oMappTB->setNumero_logement(numero_logement);
	this->oMappTB->setNom_Rue(nom_rue);
	this->oMappTB->setNom_Residence(nom_residence);
	this->oMappTB->setNom_batiment(nom_batiment);
	this->oMappTB->setEtage(etage);
	this->oMappTB->setNom_ville(nom_ville);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
