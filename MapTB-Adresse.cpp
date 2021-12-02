#include "pch.h"
#include "MapTB-Adresse.h"

System::String^ NS_Comp_Mappage3::CLmapTB::Select(void)
{
	return "SELECT * FROM Adresse FULL JOIN Posseder ON Adresse.id_adresse = Posseder.id_adresse FULL JOIN Client ON Posseder.id_client = Client.id_client FULL JOIN Personnel ON Adresse.id_adresse = Personnel.id_adresse ";
}
System::String^ NS_Comp_Mappage3::CLmapTB::Insert(void)
{
	return "INSERT INTO Adresse (numero_rue, numero_logement, nom_rue, nom_residence, nom_batiment, etage, nom_ville) VALUES('" + this->numero_rue + "','" + this->numero_logement + "','" + this->nom_rue + "','" + this->nom_residence + "','" + this->nom_batiment + "','" + this->etage + "','" + this->nom_ville + "')";
}
System::String^ NS_Comp_Mappage3::CLmapTB::Delete(void)
{
	return "EXEC Supp_adresse @id_adresse = '" + this->id_adresse + "'";
}
System::String^ NS_Comp_Mappage3::CLmapTB::Update(void)
{
	return "UPDATE [dbo].[Adresse] SET numero_rue = '" + this->numero_rue + "', numero_logement = '" + this->numero_logement + "', nom_rue = '" + this->nom_rue + "', nom_residence = '" + this->nom_residence + "', nom_batiment = '" + this->nom_batiment + "', etage = '" + this->etage  + "', nom_ville = '" + this->nom_ville + "' WHERE id_adresse = ('" + this->id_adresse + "')";
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

void NS_Comp_Mappage3::CLmapTB::setNom_ville(System::String^ nom_ville)
{
	this->nom_ville = nom_ville;
}
void NS_Comp_Mappage3::CLmapTB::setNom_Rue(System::String^ nom_rue)
{
	this->nom_rue = nom_rue;
}




System::Int32^ NS_Comp_Mappage3::CLmapTB::getId(void) { return this->id_adresse; }


