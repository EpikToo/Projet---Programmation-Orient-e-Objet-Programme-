#include "pch.h"
#include "MapTB-Paiement.h"

System::String^ NS_Comp_Mappage10::CLmapTB::Select(void)
{
	return "SELECT * FROM [POO].[dbo].[Paiement]";
}
System::String^ NS_Comp_Mappage10::CLmapTB::Insert(void)
{
	return "INSERT INTO Paiement (montant, moyen_paiement, date_paiement, date_solde_reglement, id_commande) VALUES('" + this->montant + "','" + this->moyen_paiement + "','" + this->date_paiement + "','" + this->date_solde_reglement + "','" + this->id_commande + "')";
}
System::String^ NS_Comp_Mappage10::CLmapTB::Delete(void)
{
	return "DELETE FROM [POO].[dbo].[Paiement] WHERE id_paiement = ('" + this->id_paiement + "')";
}
System::String^ NS_Comp_Mappage10::CLmapTB::Update(void)
{
	return "UPDATE [POO].[dbo].[Paiement] SET montant = '" + this->montant + "', moyen_paiement = '" + this->moyen_paiement + "', date_paiement = '" + this->date_paiement + "', date_solde_reglement = '" + this->date_solde_reglement + "', id_commande = '" + this->id_commande + "')";
}
void NS_Comp_Mappage10::CLmapTB::setId(System::Int32^ id_paiement)
{
	this->id_paiement = id_paiement;
}
void NS_Comp_Mappage10::CLmapTB::setMontant(System::Int32^ montant)
{
	this->montant = montant;
}
void NS_Comp_Mappage10::CLmapTB::setMoyen_paiement(System::String^ moyen_paiement)
{
	this->moyen_paiement = moyen_paiement;
}
void NS_Comp_Mappage10::CLmapTB::setDate_paiement(System::String^ date_paiement)
{
	this->date_paiement = date_paiement;
}
void NS_Comp_Mappage10::CLmapTB::setDate_solde_reglement(System::String^ date_reglement)
{
	this->date_solde_reglement = date_reglement;
}
void NS_Comp_Mappage10::CLmapTB::setId_commande(System::Int32^ id_commande)
{
	this->id_commande = id_commande;
}

System::Int32^ NS_Comp_Mappage10::CLmapTB::getId(void) { return this->id_paiement; }


