#include "pch.h"
#include "MapTB-Ville.h"

System::String^ NS_Comp_Mappage2::CLmapTB::Select(void)
{
	return "SELECT * FROM [dbo].[Ville]";
}
System::String^ NS_Comp_Mappage2::CLmapTB::Insert(void)
{
	return "INSERT INTO Ville (nom_ville, code_postal, pays) VALUES('" + this->ville + "','" + this->code_postal + "','" + this->pays + "')";
}
System::String^ NS_Comp_Mappage2::CLmapTB::Delete(void)
{
	return "DELETE FROM [dbo].[Ville] WHERE nom_ville = ('" + this->ville + "')";
}
System::String^ NS_Comp_Mappage2::CLmapTB::Update(void)
{
	return "UPDATE [dbo].[Catalogue] SET nom_ville = '" + this->ville + "', code_postal = '" + this->code_postal + "', pays = '" + this->pays + "' WHERE nom_ville = ('" + this->ville + "')";
}
void NS_Comp_Mappage2::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}
void NS_Comp_Mappage2::CLmapTB::setCode_postal(System::String^ code_postal)
{
	this->code_postal = code_postal;
}
void NS_Comp_Mappage2::CLmapTB::setPays(System::String^ pays)
{
	this->pays = pays;
}


System::String^ NS_Comp_Mappage2::CLmapTB::getVille(void) { return this->ville; }
System::String^ NS_Comp_Mappage2::CLmapTB::getCode_postal(void) { return this->code_postal; }
System::String^ NS_Comp_Mappage2::CLmapTB::getPays(void) { return this->pays; }

