#include "pch.h"
#include "Service-Facturer.h"

NS_Comp_Svc11::CLservices::CLservices(void)
{
    this->oCad = gcnew NS_Comp_Data::CLcad();
    this->oMappTB = gcnew NS_Comp_Mappage11::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc11::CLservices::selectionnerTout(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappTB->Select();
    return this->oCad->Lignes(sql, dataTableName);
}

