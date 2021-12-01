#include "pch.h"
#include "Service-Paiement.h"

NS_Comp_Svc10::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage10::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc10::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc10::CLservices::ajouterUnPaiement(System::Int32^ montant, System::String^ moyen, System::String^ date_paiement, System::String^ date_solde, System::String^ date, System::Int32^ id_commande)
{
	System::String^ sql;
	this->oMappTB->setMontant(montant);
	this->oMappTB->setMoyen_paiement(moyen);
	this->oMappTB->setDate_paiement(date_paiement);
	this->oMappTB->setDate_solde_reglement(date_solde);
	this->oMappTB->setId_commande(id_commande);
	sql = this->oMappTB->Insert();	

	this->oCad->Modification(sql);
}

void NS_Comp_Svc10::CLservices::supprimerUnePersonne(System::Int32^ id_paiement)
{
	System::String^ sql;
	this->oMappTB->setId(id_paiement);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc10::CLservices::modifierUnPaiement(System::Int32^ id, System::Int32^ montant, System::String^ moyen, System::String^ date_paiement, System::String^ date_solde, System::String^ date, System::Int32^ id_commande)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setMontant(montant);
	this->oMappTB->setMoyen_paiement(moyen);
	this->oMappTB->setDate_paiement(date_paiement);
	this->oMappTB->setDate_solde_reglement(date_solde);
	this->oMappTB->setId_commande(id_commande);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
