#include "pch.h"
#include "MapTB-Clients.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT * FROM [dbo].[Client] FULL JOIN [dbo].[Posseder] ON Client.id_client = Posseder.id_client FULL JOIN Adresse ON Adresse.id_adresse = Posseder.id_adresse";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "EXEC Creer_client @code_client = '" + this->client_code + "', @client_nom = '" + this->client_nom + "', @client_prenom = '" + this->client_prenom + "', @client_genre = '" + this->client_genre + "', @client_email = '" + this->client_email + "', @client_telephone = '" + this->client_telephone + "', @client_date_anniversaire = '" + this->client_date_anniversaire + "', @numero_rue = '" + this->numero_rue + "', @numero_logement = '" + this->numero_logement + "', @nom_rue = '" + this->nom_rue + "', @nom_residence = '" + this->nom_residence + "', @nom_batiment = '" + this->nom_batiment + "', @etage = '" + this->etage + "', @nom_ville = '" + this->nom_ville + "', @type_adresse1 = '" + this->type_adresse1 +"'";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "EXEC Supprimer_Client @id_client = '" + this->id_client + "'";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "EXEC Modif_Client @id_client = '" + this->id_client + "', @code_client = '" + this->client_code + "', @client_nom = '" + this->client_nom + "', @client_prenom = '" + this->client_prenom + "', @client_genre = '" + this->client_genre + "', @client_email = '" + this->client_email + "', @client_telephone = '" + this->client_telephone + "', @client_date_anniversaire = '" + this->client_date_anniversaire +"'";
}
void NS_Comp_Mappage::CLmapTB::setId(System::Int32^ id_client)
{
	this->id_client = id_client;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->client_nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->client_prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setCode(System::String^ code)
{
	this->client_code = code;
}
void NS_Comp_Mappage::CLmapTB::setGenre(System::String^ genre)
{
	this->client_genre = genre;
}
void NS_Comp_Mappage::CLmapTB::setEmail(System::String^ email)
{
	this->client_email = email;
}
void NS_Comp_Mappage::CLmapTB::setTelephone(System::String^ telephone)
{
	this->client_email = telephone;
}
void NS_Comp_Mappage::CLmapTB::setDateAnniversaire(System::String^ date_anniversaire)
{
	this->client_date_anniversaire = date_anniversaire;
}
void NS_Comp_Mappage::CLmapTB::setNumero_rue(System::Int32^ numero_rue)
{
	this->numero_rue = numero_rue;
}
void NS_Comp_Mappage::CLmapTB::setNumero_logement(System::Int32^ numero_logement)
{
	this->numero_logement = numero_logement;
}
void NS_Comp_Mappage::CLmapTB::setNom_Residence(System::String^ nom_residence)
{
	this->nom_residence = nom_residence;
}
void NS_Comp_Mappage::CLmapTB::setNom_batiment(System::String^ nom_batiment)
{
	this->nom_batiment = nom_batiment;
}
void NS_Comp_Mappage::CLmapTB::setEtage(System::Int32^ etage)
{
	this->etage = etage;
}
void NS_Comp_Mappage::CLmapTB::setType_adresse1(System::String^ type_adresse1)
{
	this->type_adresse1 = type_adresse1;
}
void NS_Comp_Mappage::CLmapTB::setNom_ville(System::String^ nom_ville)
{
	this->nom_ville = nom_ville;
}
void NS_Comp_Mappage::CLmapTB::setNom_Rue(System::String^ nom_rue)
{
	this->nom_rue = nom_rue;
}

System::Int32^ NS_Comp_Mappage::CLmapTB::getId(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->client_nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->client_prenom; }

/* A */

