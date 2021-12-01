#include "pch.h"
#include "Service-Catalogue.h"

NS_Comp_Svc4::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage4::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc4::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc4::CLservices::ajouterUnCatalogue(System::Int32^ quantite, System::Int32^ seuil)
{
	System::String^ sql;
	this->oMappTB->setQuantité_produit(quantite);
	this->oMappTB->setSeuil_réapprovisionnement(seuil);
	sql = this->oMappTB->Insert();

	this->oCad->Modification(sql);
}

void NS_Comp_Svc4::CLservices::supprimerUnCatalogue(System::Int32^ id)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc4::CLservices::modifierUnCatalogue(System::Int32^ id, System::Int32^ quantite, System::Int32^ seuil)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setQuantité_produit(quantite);
	this->oMappTB->setSeuil_réapprovisionnement(seuil);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
