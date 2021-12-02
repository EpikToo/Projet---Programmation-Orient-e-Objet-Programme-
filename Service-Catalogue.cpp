#include "pch.h"
#include "Service-Catalogue.h"

NS_Comp_Svc4::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage4::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc4::CLservices::selectionnerTout(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->Select();
	return this->oCad->Lignes(sql, dataTableName);
}

void NS_Comp_Svc4::CLservices::ajouterUnCatalogue(System::Int32^ quantite, System::Int32^ seuil)
{
	System::String^ con = "Data Source=FLORIAN\\MSSQL_FLORIAN;Initial Catalog=ProjetPOO;User ID=cnx_6;Password=Mdp123; Integrated Security=True";
	System::Data::SqlClient::SqlConnection connect(con);
	System::Data::SqlClient::SqlCommand^ commande;
	commande = connect.CreateCommand();
	commande->CommandText = "INSERT INTO Catalogue (quantite_produit, seuil_reapprovisionnement) VALUES(@quantite_produit, @seuil_reapprovisionnement)";
	commande->Parameters->AddWithValue("@quantite_produit", quantite);
	commande->Parameters->AddWithValue("@seuil_reapprovisionnement", seuil);
	connect.Open();
	commande->ExecuteNonQuery();
	connect.Close();

}

void NS_Comp_Svc4::CLservices::supprimerUnCatalogue(System::Int32^ id)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();
	this->oCad->Modification(sql);
}

void NS_Comp_Svc4::CLservices::modifierUnCatalogue(System::Int32^ id, System::Int32^ quantite, System::Int32^ seuil)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setQuantité_produit(quantite);
	this->oMappTB->setSeuil_reapprovisionnement(seuil);
	sql = this->oMappTB->Update();
	this->oCad->Modification(sql);
}
