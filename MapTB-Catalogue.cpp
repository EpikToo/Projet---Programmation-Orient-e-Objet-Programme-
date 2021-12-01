#include "pch.h"
#include "MapTB-Catalogue.h"

System::String^ NS_Comp_Mappage4::CLmapTB::Select(void)
{
	return "SELECT * FROM [Prosit6].[dbo].[Catalogue]";
}
System::String^ NS_Comp_Mappage4::CLmapTB::Insert(void)
{
	return "INSERT INTO Catalogue (quantite_produit, seuil_reapprovisionnement) VALUES('" + this->quantite_produit + "','" + this->seuil_reapprovisionnement + "')";
}
System::String^ NS_Comp_Mappage4::CLmapTB::Delete(void)
{
	return "DELETE FROM [Prosit6].[dbo].[Catalogue] WHERE id_catalogue = ('" + this->id_catalogue + "')";
}
System::String^ NS_Comp_Mappage4::CLmapTB::Update(void)
{
	return "UPDATE [Prosit6].[dbo].[Catalogue] SET quantite_produit = '" + this->quantite_produit + "', seuil_reapprovisionnement = '" + this->seuil_reapprovisionnement + "' WHERE id_catalogue = ('" + this->id_catalogue + "')";
}
void NS_Comp_Mappage4::CLmapTB::setId(System::Int32^ id_catalogue)
{
	this->id_catalogue = id_catalogue;
}
void NS_Comp_Mappage4::CLmapTB::setQuantité_produit(System::Int32^ quantite)
{
	this->quantite_produit = quantite;
}
void NS_Comp_Mappage4::CLmapTB::setSeuil_réapprovisionnement(System::Int32^ seuil_reapprovisionnement)
{
	this->seuil_reapprovisionnement = seuil_reapprovisionnement;
}


System::Int32^ NS_Comp_Mappage4::CLmapTB::getId(void) { return this->id_catalogue; }

