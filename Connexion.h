#pragma once

namespace NS_Comp_Data
{
	ref class CLcad /*FYGFGFHGHGDGBF*/
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CLcad(void);
		System::Data::DataSet^ Lignes(System::String^, System::String^);
		void Modification(System::String^);
	};
}

