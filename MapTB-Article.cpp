#include "pch.h"
#include "MapTB-Article.h"


System::String^ NS_Comp_Mappage9::CLmapTB::Select(void)
{
	return "SELECT * FROM [dbo].[Article]";
}
System::String^ NS_Comp_Mappage9::CLmapTB::Insert(void)
{
	return "INSERT INTO Article (reference_article, designation, prix_produit_HT, taux_TVA, couleur, produit, id_commande, id_catalogue) VALUES('" + this->reference_article + "','" + this->designation + "','" + this->prix_produit_HT + "','" + this->taux_TVA + "','" + this->couleur + "','" + this->produit + "','" + this->id_commande + "','" + this->id_catalogue + "')";
}
System::String^ NS_Comp_Mappage9::CLmapTB::Delete(void)
{
	return "DELETE FROM [dbo].[Article] WHERE id_catalogue = ('" + this->id_article + "')";
}
System::String^ NS_Comp_Mappage9::CLmapTB::Update(void)
{
	return "UPDATE [dbo].[Article] SET reference_article = '" + this->reference_article + "', designation = '" + this->designation + "', prix_produit_HT = '" + this->prix_produit_HT + "', taux_TVA = '" + this->taux_TVA + "', couleur = '" + this->couleur + "', taux_TVA = '" + this->produit + "', taux_TVA = '" + this->id_commande + "', taux_TVA = '" + this->id_catalogue + "'  WHERE id_catalogue = ('" + this->id_article + "')";
}
void NS_Comp_Mappage9::CLmapTB::setId(System::Int32^ id_article)
{
	this->id_article = id_article;
}
void NS_Comp_Mappage9::CLmapTB::setReference_article(System::String^ reference)
{
	this->reference_article = reference;
}
void NS_Comp_Mappage9::CLmapTB::setDesignation(System::String^ designation)
{
	this->designation = designation;
}
void NS_Comp_Mappage9::CLmapTB::setPrix_produitHT(System::Double^ prix_produit_HT)
{
	this->prix_produit_HT = prix_produit_HT;
}

void NS_Comp_Mappage9::CLmapTB::setTaux_tva(System::Int32^ taux_tva)
{
	this->taux_TVA = taux_tva;
}
void NS_Comp_Mappage9::CLmapTB::setCouleur(System::String^ couleur)
{
	this->couleur = couleur;
}
void NS_Comp_Mappage9::CLmapTB::setProduit(System::String^ produit)
{
	this->produit = produit;
}
void NS_Comp_Mappage9::CLmapTB::setId_commande(System::Int32^ id_commande)
{
	this->id_commande = id_commande;
}
void NS_Comp_Mappage9::CLmapTB::setId_Catalogue(System::Int32^ id_catalogue)
{
	this->id_catalogue = id_catalogue;
}

System::Int32^ NS_Comp_Mappage9::CLmapTB::getId(void) { return this->id_article; }

