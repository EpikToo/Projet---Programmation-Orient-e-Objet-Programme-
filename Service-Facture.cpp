#include "pch.h"
#include "Service-Facture.h"


NS_Comp_Svc8::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage8::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc8::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc8::CLservices::ajouterUneFacture(System::String^ nom_societe, System::String^ adresse_societe, System::String^ numero_service_client)
{
	System::String^ sql;
	this->oMappTB->setNom_societe(nom_societe);
	this->oMappTB->setAdresse_societe(adresse_societe);
	this->oMappTB->setNumero_service_client(numero_service_client);
	sql = this->oMappTB->Insert();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc8::CLservices::supprimerUneFacture(System::Int32^ id_facture)
{
	System::String^ sql;
	this->oMappTB->setId(id_facture);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc8::CLservices::modifierUneFacture(System::Int32^ id, System::String^ nom_societe, System::String^ adresse_societe, System::String^ numero_service_client)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNom_societe(nom_societe);
	this->oMappTB->setAdresse_societe(adresse_societe);
	this->oMappTB->setNumero_service_client(numero_service_client);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
