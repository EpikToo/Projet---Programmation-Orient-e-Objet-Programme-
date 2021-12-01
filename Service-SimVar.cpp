#include "pch.h"
#include "Service-SimVar.h"


NS_Comp_Svc15::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage15::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc15::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}
