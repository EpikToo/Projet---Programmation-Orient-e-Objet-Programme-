#include "pch.h"
#include "Service-Posseder.h"

NS_Comp_Svc12::CLservices::CLservices(void)
{
    this->oCad = gcnew NS_Comp_Data::CLcad();
    this->oMappTB = gcnew NS_Comp_Mappage12::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc12::CLservices::selectionnerTout(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappTB->Select();
    return this->oCad->Lignes(sql, dataTableName);
}