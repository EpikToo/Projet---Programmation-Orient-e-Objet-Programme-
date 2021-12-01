#pragma once
#include "MapTB-Facturer.h"
#include "Connexion.h"

namespace NS_Comp_Svc11
{
    ref class CLservices
    {
    private:
        NS_Comp_Data::CLcad^ oCad;
        NS_Comp_Mappage11::CLmapTB^ oMappTB;
    public:
        CLservices(void);
        System::Data::DataSet^ selectionnerTout(System::String^);
    };
}