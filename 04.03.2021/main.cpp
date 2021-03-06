#pragma once

#include <iostream>
using namespace std;

#define zvukmin 0
#define zvukmax 20
#define kanalmin 1
#define kanalmax 5
#define KORAK 1

enum StanjeTelevizora{UKLJUCEN = 1,ISKLJUCEN,POKVAREN};

class Televizor{
    private:
        StanjeTelevizora stanje;
        int zvuk;
        int kanal;
    public:
        Televizor(){stanje = ISKLJUCEN; zvuk = 0; kanal = 1;};
        Televizor(Televizor &t){stanje = t.stanje; zvuk = t.zvuk; kanal = t.kanal;};

        bool ukljuci(){
            bool uspesno = false;
            if(stanje == ISKLJUCEN){
                stanje = UKLJUCEN;
                uspesno = true;
            }
            return uspesno;
        };
        bool iskljuci(){
            bool uspesno = false;
            if(stanje == UKLJUCEN){
                stanje = ISKLJUCEN;
                zvuk = 0;
                kanal = 1;
                uspesno = true;
            }
            return uspesno;
        };
        bool pokvari(){
            bool uspesno = false;
            if(stanje != POKVAREN){
                stanje = POKVAREN;
                zvuk = 0;
                kanal = 1;
                uspesno = true;
            }
            return uspesno;
        };
        bool popravi(){
            bool uspesno = false;
            if(stanje == POKVAREN){
                stanje = ISKLJUCEN;
                uspesno = true;
            }
            return uspesno;
        };


        bool pojacajZvuk(){
            bool uspesno = false;
            if(stanje == UKLJUCEN && zvuk + KORAK <= zvukmax){
                zvuk += KORAK;
                uspesno = true;
            }
            return uspesno;
        };
        bool smanjiZvuk(){
            bool uspesno = false;
            if(stanje == UKLJUCEN && zvuk - KORAK >= zvukmin){
                zvuk -= KORAK;
                uspesno = true;
            }
            return uspesno;
        };
        bool sledeciKanal(){
            bool uspesno = false;
            if(stanje == UKLJUCEN && kanal + KORAK <= kanalmax){
                kanal += KORAK;
                uspesno = true;
            }
            return uspesno;
        };
        bool prethodniKanal(){
            bool uspesno = false;
            if(stanje == UKLJUCEN && kanal - KORAK >= kanalmin){
                kanal -= KORAK;
                uspesno = true;
            }
            return uspesno;
        };

        StanjeTelevizora getStanje() const {
            return stanje;
        }
        int getZvuk() const{
            return zvuk;
        };
        int getKanal() const{
            return kanal;
        };
};

void ispis(const Televizor &t){
    string temp;
    switch(t.getStanje()){
        case ISKLJUCEN:
            temp = "iskljucen";
            break;
        case UKLJUCEN:
            temp = "ukljucen";
            break;
        case POKVAREN:
            temp = "pokvaren";
            break;
    }
    cout << "Trenutno stanje televizora: " << temp << endl;
    cout << "Trenutna jacina zvuka: " << t.getZvuk() << endl;
    cout << "Trenutni kanal: " << t.getKanal() << endl << endl;
}
