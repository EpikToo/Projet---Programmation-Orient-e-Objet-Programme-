#pragma once
#include "MapTB.h"

namespace NS_Comp_Mappage11
{
    ref class CLmapTB : public Mappage
    {
    private:
        System::Int32^ id_paiement;
        System::Int32^ id_commande;
        System::Int32^ id_adresse;
        System::Int32^ id_facture;

    public:

        System::String^ Select(void) override;
        System::String^ Delete(void) override;
        System::String^ Update(void) override;
        System::String^ Insert(void) override;

        void setId_paiement(System::Int32^);
        void setId_commande(System::Int32^);
        void setId_adresse(System::Int32^);
        void setId_facture(System::Int32^);



        System::Int32^ getId_paiement(void);
    };
}