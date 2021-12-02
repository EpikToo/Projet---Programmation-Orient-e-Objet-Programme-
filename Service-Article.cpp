#include "pch.h"
#include "Service-Article.h"

NS_Comp_Svc9::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage9::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc9::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc9::CLservices::ajouterUnArticle(System::String^ reference, System::String^ designation, System::Double^ prix_produit_HT, System::Int32^ taux_TVA, System::String^ couleur, System::String^ produit, System::Int32^ id_commande, System::Int32^ id_catalogue)
{
	System::String^ sql;
	this->oMappTB->setReference_article(reference);
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setPrix_produitHT(prix_produit_HT);
	this->oMappTB->setTaux_tva(taux_TVA);
	this->oMappTB->setCouleur(couleur);
	this->oMappTB->setProduit(produit);
	this->oMappTB->setId_commande(id_commande);
	this->oMappTB->setId_Catalogue(id_catalogue);
	sql = this->oMappTB->Insert();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc9::CLservices::supprimerUnArticle(System::Int32^ id_article)
{
	System::String^ sql;
	this->oMappTB->setId(id_article);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc9::CLservices::modifierUnArticle(System::Int32^ id, System::String^ reference, System::String^ designation, System::Double^ prix_produit_HT, System::Int32^ taux_TVA, System::String^ couleur, System::String^ produit, System::Int32^ id_commande, System::Int32^ id_catalogue)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setPrix_produitHT(prix_produit_HT);
	this->oMappTB->setTaux_tva(taux_TVA);
	this->oMappTB->setCouleur(couleur);
	this->oMappTB->setProduit(produit);
	this->oMappTB->setId_commande(id_commande);
	this->oMappTB->setId_Catalogue(id_catalogue);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
