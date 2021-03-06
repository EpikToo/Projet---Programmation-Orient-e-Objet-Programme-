#include "pch.h"
#include "MapTB-Commande.h"

System::String^ NS_Comp_Mappage6::CLmapTB::Select(void)
{
	return "SELECT Commande.id_commande, reference_commande, date_livraison_prevue, date_emission, total_article, montant_total_HT,montant_total_TVA,montant_total_TTC,Commande.id_client, designation, couleur,client_nom,client_prenom from Commande INNER JOIN Article on Article.id_commande = Commande.id_commande INNER JOIN Client on Commande.id_client = Client.id_client ";
}
System::String^ NS_Comp_Mappage6::CLmapTB::Insert(void)
{
	return "INSERT INTO Commande (reference_commande, date_livraison_prevue, date_emission, total_article, montant_total_HT, montant_total_TVA, montant_total_TTC, id_client) VALUES('" + this->reference_commande + "','" + this->date_livraison_prevue + "','" + this->date_emission + "','" + this->total_article + "','" + this->montant_ht + "','" + this->montant_tva + "','" + this->montant_ttc + "','" + this->id_client + "')";
}
System::String^ NS_Comp_Mappage6::CLmapTB::Delete(void)
{
	return "EXEC Supprimer_Commande @id_commande = '" + this->id_commande +"'";
}
System::String^ NS_Comp_Mappage6::CLmapTB::Update(void)
{
	return "UPDATE [dbo].[Commande] SET reference_commande = '" + this->reference_commande + "', date_livraison_prevue = '" + this->date_livraison_prevue + "', date_emission = '" + this->date_emission + "', total_article = '" + this->total_article + "', montant_total_HT = '" + this->montant_ht + "', montant_total_TVA = '" + this->montant_tva + "', montant_total_TTC = '" + this->montant_ttc + "', id_client = '" + this->id_client + "' WHERE id_commande = ('" + this->id_commande + "')";
}

void NS_Comp_Mappage6::CLmapTB::setId_commande(System::Int32^ id_commande)
{
	this->id_commande = id_commande;
}
void NS_Comp_Mappage6::CLmapTB::setReference_commande(System::String^ reference)
{
	this->reference_commande = reference;
}
void NS_Comp_Mappage6::CLmapTB::setDate_livraison_prevue(System::String^ date_prevue)
{
	this->date_livraison_prevue = date_prevue;
}
void NS_Comp_Mappage6::CLmapTB::setDate_emission(System::String^ date_emission)
{
	this->date_emission = date_emission;
}
void NS_Comp_Mappage6::CLmapTB::setTotal_article(System::Int32^ total_article)
{
	this->total_article = total_article;
}
void NS_Comp_Mappage6::CLmapTB::setMontant_ht(System::Decimal^ montant_ht)
{
	this->montant_ht = montant_ht;
}
void NS_Comp_Mappage6::CLmapTB::setMontant_tva(System::Decimal^ montant_tva)
{
	this->montant_tva = montant_tva;
}
void NS_Comp_Mappage6::CLmapTB::setMontant_ttc(System::Decimal^ montant_ttc)
{
	this->montant_ttc = montant_ttc;
}
void NS_Comp_Mappage6::CLmapTB::setId_client(System::Int32^ id_client)
{
	this->id_client = id_client;
}
void NS_Comp_Mappage6::CLmapTB::setnom_client(System::String^ nom_client)
{
	this->nom_client = nom_client;
}
void NS_Comp_Mappage6::CLmapTB::setprenom_client(System::String^ prenom_client)
{
	this->prenom_client = prenom_client;
}
void NS_Comp_Mappage6::CLmapTB::setdesignation(System::String^ designation)
{
	this->designation = designation;
}
void NS_Comp_Mappage6::CLmapTB::setcouleur(System::String^ couleur)
{
	this->couleur = couleur;
}




System::Int32^ NS_Comp_Mappage6::CLmapTB::getId_commande(void) { return this->id_commande; }


