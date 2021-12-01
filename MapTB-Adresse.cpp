#include "pch.h"
#include "MapTB-Adresse.h"

System::String^ NS_Comp_Mappage3::CLmapTB::Select(void)
{
	return "SELECT * FROM [Prosit6].[dbo].[Adresse] FULL JOIN Client ON Adresse.id_client = Client.id_client";
}
System::String^ NS_Comp_Mappage3::CLmapTB::Insert(void)
{
	return "INSERT INTO Adresse (numero_rue, numero_logement, nom_rue, nom_residence, nom_batiment, etage, type_adresse1, nom_ville, id_client) VALUES('" + this->numero_rue + "','" + this->numero_logement + "','" + this->nom_rue + "','" + this->nom_residence + "','" + this->nom_batiment + "','" + this->etage + "','" + this->type_adresse1 + "','" + this->nom_ville + "','" + this->id_client + "')";
}
System::String^ NS_Comp_Mappage3::CLmapTB::Delete(void)
{
	return "DELETE FROM [Prosit6].[dbo].[Adresse] WHERE id_adresse = ('" + this->id_adresse + "')";
}
System::String^ NS_Comp_Mappage3::CLmapTB::Update(void)
{
	return "UPDATE [Prosit6].[dbo].[Adresse] SET numero_rue = '" + this->numero_rue + "', numero_logement = '" + this->numero_logement + "', nom_rue = '" + this->nom_rue + "', nom_residence = '" + this->nom_residence + "', nom_batiment = '" + this->nom_batiment + "', etage = '" + this->etage + "', type_adresse1 = '" + this->type_adresse1 + "', nom_ville = '" + this->nom_ville + "', id_client = '" + this->id_client + "' WHERE id_adresse = ('" + this->id_adresse + "')";
}
void NS_Comp_Mappage3::CLmapTB::setId(System::Int32^ id_adresse)
{
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage3::CLmapTB::setNumero_rue(System::Int32^ numero_rue)
{
	this->numero_rue = numero_rue;
}
void NS_Comp_Mappage3::CLmapTB::setNumero_logement(System::Int32^ numero_logement)
{
	this->numero_logement = numero_logement;
}
void NS_Comp_Mappage3::CLmapTB::setNom_Residence(System::String^ nom_residence)
{
	this->nom_residence = nom_residence;
}
void NS_Comp_Mappage3::CLmapTB::setNom_batiment(System::String^ nom_batiment)
{
	this->nom_batiment = nom_batiment;
}
void NS_Comp_Mappage3::CLmapTB::setEtage(System::Int32^ etage)
{
	this->etage = etage;
}
void NS_Comp_Mappage3::CLmapTB::setType_adresse1(System::String^ type_adresse1)
{
	this->type_adresse1 = type_adresse1;
}
void NS_Comp_Mappage3::CLmapTB::setNom_ville(System::String^ nom_ville)
{
	this->nom_ville = nom_ville;
}
void NS_Comp_Mappage3::CLmapTB::setNom_Rue(System::String^ nom_rue)
{
	this->nom_rue = nom_rue;
}
void NS_Comp_Mappage3::CLmapTB::setId_client(System::Int32^ id_client)
{
	this->id_client = id_client;
}



System::Int32^ NS_Comp_Mappage3::CLmapTB::getId(void) { return this->id_adresse; }


