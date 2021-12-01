#include "pch.h"
#include "Service-Ville.h"

NS_Comp_Svc2::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage2::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc2::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc2::CLservices::ajouterUneVille(System::String^ ville, System::String^ code_postal, System::String^ pays)
{
	System::String^ sql;
	this->oMappTB->setVille(ville);
	this->oMappTB->setCode_postal(code_postal);
	this->oMappTB->setPays(pays);

	sql = this->oMappTB->Insert();

	this->oCad->Modification(sql);
}

void NS_Comp_Svc2::CLservices::supprimerUneVille(System::String^ ville)
{
	System::String^ sql;
	this->oMappTB->setVille(ville);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc2::CLservices::modifierUneVille(System::String^ ville, System::String^ code_postal, System::String^ pays)
{
	System::String^ sql;
	this->oMappTB->setVille(ville);
	this->oMappTB->setCode_postal(code_postal);
	this->oMappTB->setPays(pays);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
