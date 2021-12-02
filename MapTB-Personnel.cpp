#include "pch.h"
#include "MapTB-Personnel.h"

System::String^ NS_Comp_Mappage5::CLmapTB::Select(void)
{
	return "SELECT * FROM [dbo].[Personnel] FULL JOIN [dbo].[Adresse] ON Personnel.id_adresse = Adresse.id_adresse";
}
System::String^ NS_Comp_Mappage5::CLmapTB::Insert(void)
{
	return "EXEC Creer_personnel @personnel_nom = '" + this->personnel_nom + "', @personnel_prenom = '" + this->personnel_prenom + "' , @date_embauche = '" + this->date_embauche + "', @type_adresse2 = '" + this->typeadresse2 + "' , @id_adresse = '" + this->id_adresse + "', @id_personnel_Encadrer = '" + this->id_personnel_supérieur_hierarchique + "'";
}
System::String^ NS_Comp_Mappage5::CLmapTB::Delete(void)
{
	return "EXEC Supprimer_Personnel @id_Personnel = '" + this->id_personnel + "'";
}
System::String^ NS_Comp_Mappage5::CLmapTB::Update(void)
{
	return "UPDATE [dbo].[Personnel] SET personnel_nom = '" + this->personnel_nom + "', personnel_prenom = '" + this->personnel_prenom + "', date_embauche = '" + this->date_embauche + "', type_adresse2 = '" + this->typeadresse2 + "', id_adresse = '" + this->id_adresse + "', id_personnel_encadrer = '" + this->id_personnel_supérieur_hierarchique + "')";
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
void NS_Comp_Mappage5::CLmapTB::setId_adresse(System::Int32^ id_adresse)
{
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage5::CLmapTB::setId_personnel_superieur_hierarchique(System::Int32^ id_superieur)
{
	this->id_personnel_supérieur_hierarchique = id_superieur;
}
void NS_Comp_Mappage5::CLmapTB::setTypeadresse2(System::String^ typeadresse2)
{
	this->typeadresse2 = typeadresse2;
}
System::Int32^ NS_Comp_Mappage5::CLmapTB::getId(void) { return this->id_personnel; }


