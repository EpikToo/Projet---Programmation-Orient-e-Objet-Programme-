#include "pch.h"
#include "MapTB-Stats.h"

System::String^ NS_Comp_Mappage30::CLmapTB::Select(void)
{
	return "SELECT AVG(montant_total_TTC) AS 'Panier moyen' , (AVG(montant_total_TTC)*0.90) as 'Panier moyen après remise' FROM Commande";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Select2(void)
{
	return "SELECT SUM(montant_total_HT) AS 'Somme des ventes' FROM Commande WHERE date_emission > '" + this->date1 + "' AND date_emission < '" + this->date2 + "'";
}																									

System::String^ NS_Comp_Mappage30::CLmapTB::Select3(void)
{
	return "SELECT designation, COUNT(id_article) as quantitee, MAX(seuil_reapprovisionnement) as seuil FROM Article INNER JOIN Catalogue ON Article.id_catalogue = Catalogue.id_catalogue WHERE quantite_produit < seuil_reapprovisionnement GROUP BY designation";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Select4(void)
{
	return "EXEC Calcul_montant @id_client = '" + this->id_client + "'";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Select5(void)
{
	return "SELECT TOP(10)designation, COUNT(id_article) AS 'Nombre de produits vendus' FROM Article INNER JOIN Commande ON Article.id_commande = Commande.id_commande GROUP BY designation ORDER BY [Nombre de produits vendus] DESC";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Select6(void)
{
	return "SELECT TOP(10)designation, COUNT(id_article) AS 'Nombre de produits vendus' FROM Article INNER JOIN Commande ON Article.id_commande = Commande.id_commande GROUP BY designation ORDER BY [Nombre de produits vendus] ASC";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Select7(void)
{
	return "SELECT SUM(prix_produit_HT+ prix_produit_HT*taux_TVA/100) as 'Valeur commerciale stock' FROM Article WHERE id_commande IS NULL";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Select8(void)
{
	return "SELECT SUM(prix_produit_HT) as 'Valeur d`achat stock' FROM Article WHERE id_commande IS NULL";
}

System::String^ NS_Comp_Mappage30::CLmapTB::Insert(void)
{
	return "0";
}
System::String^ NS_Comp_Mappage30::CLmapTB::Delete(void)
{
	return "0";
}
System::String^ NS_Comp_Mappage30::CLmapTB::Update(void)
{
	return "0";
}
void NS_Comp_Mappage30::CLmapTB::setId(System::Int32^ id_client)
{
	this->id_client = id_client;
}
void NS_Comp_Mappage30::CLmapTB::setDate1(System::String^ date1)
{
	this->date1 = date1;
}

void NS_Comp_Mappage30::CLmapTB::setDate2(System::String^ date2)
{
	this->date2 = date2;
}