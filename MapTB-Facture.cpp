#include "pch.h"
#include "MapTB-Facture.h"

System::String^ NS_Comp_Mappage8::CLmapTB::Select(void)
{
	return "SELECT * FROM [POO].[dbo].[Facture]";
}
System::String^ NS_Comp_Mappage8::CLmapTB::Insert(void)
{
	return "EXEC creer_facture";
}
System::String^ NS_Comp_Mappage8::CLmapTB::Delete(void)
{
	return "DELETE FROM [POO].[dbo].[Facture] WHERE id_facture = ('" + this->id_facture + "')";
}
System::String^ NS_Comp_Mappage8::CLmapTB::Update(void)
{
	this->logo = "SELECT * FROM OPENROWSET(BULK N'C:\\Users\Flawz\\Desktop\golemago_2_1.png', SINGLE_BLOB) AS MonImage";
	return "UPDATE [POO].[dbo].[Facture] SET nom_societe = '" + this->nom_societe + "', adresse_societe = '" + this->adresse_societe + "', numero_service_client = '" + this->numero_service_client + "', logo_societe = '" + this->logo + "'  WHERE id_catalogue = ('" + this->id_facture + "')";
}
void NS_Comp_Mappage8::CLmapTB::setId(System::Int32^ id_facture)
{
	this->id_facture = id_facture;
}
void NS_Comp_Mappage8::CLmapTB::setNom_societe(System::String^ adresse_societe)
{
	this->adresse_societe = adresse_societe;
}
void NS_Comp_Mappage8::CLmapTB::setAdresse_societe(System::String^ adresse)
{
	this->nom_societe = nom_societe;
}
void NS_Comp_Mappage8::CLmapTB::setNumero_service_client(System::String^ numero_service_client)
{
	this->numero_service_client = numero_service_client;
}


System::Int32^ NS_Comp_Mappage8::CLmapTB::getId(void) { return this->id_facture; }

