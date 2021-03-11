#include <iostream>

using namespace std;

enum TipPreliva{COKOLADNI, COKOLADNI_SA_SLAGOM};

class Preliv
{
private:
    TipPreliva tip;
public:
    bool dodajSlag()
    {
        if(tip==COKOLADNI)
        {
            tip=COKOLADNI_SA_SLAGOM;
        }
    }return true;
    bool ukloniSlag()
    {
        if(tip==COKOLADNI_SA_SLAGOM)
        {
            tip=COKOLADNI;
        }
    }return true;
};

enum KolacStanje{U_PRIPREMI, PECE_SE, ZAGOREO, PRIPREMLJEN};

class Kolac
{
private:
    KolacStanje stanje;
    int temperatura;
    Preliv preliv;
public:
};
