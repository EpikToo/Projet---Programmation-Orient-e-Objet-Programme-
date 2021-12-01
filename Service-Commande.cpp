#include "pch.h"
#include "Service-Commande.h"

NS_Comp_Svc6::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage6::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc6::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc6::CLservices::ajouterUneCommande(System::String^ reference_commande, System::String^ date_livraison_prevue, System::String^ date_emission, System::Int32^ total_article, System::Decimal^ montant_ht, System::Decimal^ montant_tva, System::Decimal^ montant_ttc, System::Int32^ id_client)
{
	System::String^ sql;
	this->oMappTB->setReference_commande(reference_commande);
	this->oMappTB->setDate_livraison_prevue(date_livraison_prevue);
	this->oMappTB->setDate_emission(date_emission);
	this->oMappTB->setTotal_article(total_article);
	this->oMappTB->setMontant_ht(montant_ht);
	this->oMappTB->setMontant_tva(montant_tva);
	this->oMappTB->setMontant_ttc(montant_ttc);
	this->oMappTB->setId_client(id_client);
	sql = this->oMappTB->Insert();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc6::CLservices::supprimerUneCommande(System::Int32^ id_commande)
{
	System::String^ sql;
	this->oMappTB->setId_commande(id_commande);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc6::CLservices::modifierUneCommande(System::Int32^ id_commande, System::String^ reference_commande, System::String^ date_livraison_prevue, System::String^ date_emission, System::Int32^ total_article, System::Decimal^ montant_ht, System::Decimal^ montant_tva, System::Decimal^ montant_ttc, System::Int32^ id_client)
{
	System::String^ sql;
	this->oMappTB->setId_commande(id_commande);
	this->oMappTB->setReference_commande(reference_commande);
	this->oMappTB->setDate_livraison_prevue(date_livraison_prevue);
	this->oMappTB->setDate_emission(date_emission);
	this->oMappTB->setTotal_article(total_article);
	this->oMappTB->setMontant_ht(montant_ht);
	this->oMappTB->setMontant_tva(montant_tva);
	this->oMappTB->setMontant_ttc(montant_ttc);
	this->oMappTB->setId_client(id_client);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
