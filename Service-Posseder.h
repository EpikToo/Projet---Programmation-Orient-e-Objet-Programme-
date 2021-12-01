#pragma once
#include "MapTB-Posseder.h"
#include "Connexion.h"

namespace NS_Comp_Svc12
{
    ref class CLservices
    {
    private:
        NS_Comp_Data::CLcad^ oCad;
        NS_Comp_Mappage12::CLmapTB^ oMappTB;
    public:
        CLservices(void);
        System::Data::DataSet^ selectionnerTout(System::String^);
    };
}