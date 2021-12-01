#include "pch.h"
#include "Service-Stats.h"

NS_Comp_Svc30::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage30::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerPanier(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerChiffre(System::String^ dataTableName, System::String^ Date, System::String^ Date2)
{
	System::String^ sql;
	this->oMappTB->setDate1(Date);
	this->oMappTB->setDate2(Date2);
	sql = this->oMappTB->Select2();
	return this->oCad->Lignes(sql, dataTableName);
}


System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerProduitS(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select3();
	return this->oCad->Lignes(sql, dataTableName);
}


System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerMontant(System::String^ dataTableName, System::Int32^ ID)
{
	System::String^ sql;
	this->oMappTB->setId(ID);
	sql = this->oMappTB->Select4();
	return this->oCad->Lignes(sql, dataTableName);
}


System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerArticlesMoins(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select5();
	return this->oCad->Lignes(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerArticlesPlus(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select6();
	return this->oCad->Lignes(sql, dataTableName);
}


System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerValeurCom(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select7();
	return this->oCad->Lignes(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc30::CLservices::selectionnerValeurAchat(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select8();
	return this->oCad->Lignes(sql, dataTableName);
}

