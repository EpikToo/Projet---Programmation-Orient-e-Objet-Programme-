#pragma once
#include "MapTB-SimVar.h"
#include "Connexion.h"

namespace NS_Comp_Svc15
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage15::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTout(System::String^);

	};
}
