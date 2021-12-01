#include "pch.h"
#include "MapTB-SimVar.h"

System::String^ NS_Comp_Mappage15::CLmapTB::Select(void)
{

	return "SELECT SUM(prix_produit_HT) as 'Valeur d`achat stock' FROM Article WHERE id_commande IS NULL";
}





System::String^ NS_Comp_Mappage15::CLmapTB::Insert(void)
{
	return "0";
}
System::String^ NS_Comp_Mappage15::CLmapTB::Delete(void)
{
	return "0";
}
System::String^ NS_Comp_Mappage15::CLmapTB::Update(void)
{
	return "0";
}


