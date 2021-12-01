#pragma once
#include "MapTB.h"

namespace NS_Comp_Mappage12
{
    ref class CLmapTB : public Mappage
    {
    private:
        System::Int32^ id_client;
        System::Int32^ id_adresse;
        System::String^ type_adresse1;

    public:

        System::String^ Select(void) override;
        System::String^ Insert(void) override;
        System::String^ Delete(void) override;
        System::String^ Update(void) override;

        void setId_client(System::Int32^);
        void setId_adresse(System::Int32^);
        void setType_adresse1(System::String^);


   
    };
}