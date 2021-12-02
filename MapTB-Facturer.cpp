#include "pch.h"
#include "MapTB-Facturer.h"

System::String^ NS_Comp_Mappage11::CLmapTB::Select(void)
{
    return "SELECT * FROM [dbo].[Facturer]";
}

System::String^ NS_Comp_Mappage11::CLmapTB::Insert(void)
{
    return "SELECT * FROM [dbo].[Facturer]";
}

System::String^ NS_Comp_Mappage11::CLmapTB::Delete(void)
{
    return "SELECT * FROM [dbo].[Facturer]";
}

System::String^ NS_Comp_Mappage11::CLmapTB::Update(void)
{
    return "SELECT * FROM [dbo].[Facturer]";
}

void NS_Comp_Mappage11::CLmapTB::setId_paiement(System::Int32^ id_paiement)
{
    this->id_paiement = id_paiement;
}
void NS_Comp_Mappage11::CLmapTB::setId_commande(System::Int32^ id_commande)
{
    this->id_commande = id_commande;
}
void NS_Comp_Mappage11::CLmapTB::setId_adresse(System::Int32^ id_adresse)
{
    this->id_adresse = id_adresse;
}
void NS_Comp_Mappage11::CLmapTB::setId_facture(System::Int32^ id_facture)
{
    this->id_facture = id_facture;
}
System::Int32^ NS_Comp_Mappage11::CLmapTB::getId_paiement()
{
    return this->id_paiement;
}