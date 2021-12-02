#include "pch.h"
#include "MapTB-Personnel.h"

System::String^ NS_Comp_Mappage5::CLmapTB::Select(void)
{
	return "SELECT * FROM [dbo].[Personnel] FULL JOIN [dbo].[Adresse] ON Personnel.id_adresse = Adresse.id_adresse";
}
System::String^ NS_Comp_Mappage5::CLmapTB::Insert(void)
{
	return "EXEC Creer_personnel @personnel_nom = '" + this->personnel_nom + "', @personnel_prenom = '" + this->personnel_prenom + "' , @date_embauche = '" + this->date_embauche + "', @type_adresse2 = 'Livraison' , @id_personnel_Encadrer = '" + this->id_personnel_supérieur_hierarchique + "', @numero_rue = '" + this->numero_rue + "', @numero_logement = '" + this->numero_logement + "', @nom_rue = '" + this->nom_rue + "', @nom_residence = '" + this->nom_residence + "', @nom_batiment = '" + this->nom_batiment + "', @etage = '" + this->etage + "', @nom_ville = '" + this->nom_ville + "'";
}
System::String^ NS_Comp_Mappage5::CLmapTB::Delete(void)
{
	return "EXEC Supprimer_Personnel @id_Personnel = '" + this->id_personnel + "'";
}
System::String^ NS_Comp_Mappage5::CLmapTB::Update(void)
{
	return "UPDATE [dbo].[Personnel] SET personnel_nom = '" + this->personnel_nom + "', personnel_prenom = '" + this->personnel_prenom + "', date_embauche = '" + this->date_embauche + "', id_personnel_ENCADRER = '" + this->id_personnel_supérieur_hierarchique + "', id_adresse = '" + this->id_adresse + "')";
}
void NS_Comp_Mappage5::CLmapTB::setId(System::Int32^ id_personnel)
{
	this->id_personnel = id_personnel;
}
void NS_Comp_Mappage5::CLmapTB::setNom(System::String^ nom)
{
	this->personnel_nom = nom;
}
void NS_Comp_Mappage5::CLmapTB::setPrenom(System::String^ prenom)
{
	this->personnel_prenom = prenom;
}
void NS_Comp_Mappage5::CLmapTB::setDate_embauche(System::String^ date)
{
	this->date_embauche = date;
}
void NS_Comp_Mappage5::CLmapTB::setId_adressee(System::Int32^ id_adresse)
{
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage5::CLmapTB::setId_personnel_superieur_hierarchique(System::Int32^ id_superieur)
{
	this->id_personnel_supérieur_hierarchique = id_superieur;
}
void NS_Comp_Mappage5::CLmapTB::setNumero_rue(System::Int32^ numero_rue)
{
	this->numero_rue = numero_rue;
}
void NS_Comp_Mappage5::CLmapTB::setNumero_logement(System::Int32^ numero_logement)
{
	this->numero_logement = numero_logement;
}
void NS_Comp_Mappage5::CLmapTB::setNom_Residence(System::String^ nom_residence)
{
	this->nom_residence = nom_residence;
}
void NS_Comp_Mappage5::CLmapTB::setNom_batiment(System::String^ nom_batiment)
{
	this->nom_batiment = nom_batiment;
}
void NS_Comp_Mappage5::CLmapTB::setEtage(System::Int32^ etage)
{
	this->etage = etage;
}
void NS_Comp_Mappage5::CLmapTB::setType_adresse1(System::String^ type_adresse1)
{
	this->type_adresse1 = type_adresse1;
}
void NS_Comp_Mappage5::CLmapTB::setNom_ville(System::String^ nom_ville)
{
	this->nom_ville = nom_ville;
}
void NS_Comp_Mappage5::CLmapTB::setNom_Rue(System::String^ nom_rue)
{
	this->nom_rue = nom_rue;
}

System::Int32^ NS_Comp_Mappage5::CLmapTB::getId(void) { return this->id_personnel; }


