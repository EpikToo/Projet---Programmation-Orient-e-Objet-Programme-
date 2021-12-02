#include "pch.h"
#include "MapTB-Posseder.h"

System::String^ NS_Comp_Mappage12::CLmapTB::Select(void)
{
    return "SELECT * FROM [dbo].[Posseder]";
}
System::String^ NS_Comp_Mappage12::CLmapTB::Insert(void)
{
    return "0";
}
System::String^ NS_Comp_Mappage12::CLmapTB::Delete(void)
{
    return "0";
}
System::String^ NS_Comp_Mappage12::CLmapTB::Update(void)
{
    return "0";
}
void NS_Comp_Mappage12::CLmapTB::setId_client(System::Int32^ id_client)
{
    this->id_client = id_client;
}
void NS_Comp_Mappage12::CLmapTB::setId_adresse(System::Int32^ id_adresse)
{
    this->id_adresse = id_adresse;
}
void NS_Comp_Mappage12::CLmapTB::setType_adresse1(System::String^ type_adresse1)
{
    this->type_adresse1 = type_adresse1;
}

