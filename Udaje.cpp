#include "Udaje.h"
#include <iostream>

Udaje::Udaje()
{
    jmeno_out=jmeno();
    prijmeni_out=prijmeni();
    vyska_out=vyska();
    vek_out=vek();
    vzdelani_out=vzdelani();
    //k = kk();
    //ctor
}

//void Udaje::nacti_udaje(bool& k){
  //  jmeno();
    //prijmeni();
    //vyska();
    //vek();
    //k = kk();
//}

std::string Udaje::jmeno(){
        std::cout << "Zadej jmeno: ";
        std::cin >> pomoc;
        return pomoc;
}

std::string Udaje::prijmeni(){
    std::cout << "Zadej prijmeni: ";
    std::cin >> pomoc;
    return pomoc;
}

float Udaje::vyska(){
    kontrola = true;
    do{
        std::cout<<"Zadej vysku: ";
        std::cin >> pomoc1;
        if (100 < pomoc1 && pomoc1 < 230){
            kontrola = false;
            return pomoc1;
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
        }
    } while (kontrola == true);
}

int Udaje::vek(){
    kontrola = true;
    do{
        std::cout<<"Zadej vek: ";
        std::cin >> pomoc2;
        if (5 < pomoc2 && pomoc2 < 100){
            kontrola = false;
            return pomoc2;
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
        }
    } while (kontrola == true);
}

bool Udaje::kk(){
    int pismeno;
    std::cout << "Pro zadani dalsiho cloveka stisknete `1`.";
    std::cin >> pismeno;
    if (pismeno==1){
        return true;
    }
    else{
        return false;
    }
}

std::string Udaje::vzdelani(){

    int skola1;
    bool kontrola=true;

    do{
        std::cout << "Zadej dosazene vzdelani: 1-Zakladni 2-Stredni 3-Vysokoskolske \n";
        std::cin >> skola1;
        if (skola1 == 1) {
            //skola = "zakladni";
            kontrola = false;
            return "zakladni";

        }
        else if (skola1 == 2) {
            //skola = "stredni";
            kontrola = false;
            return "stredoskolske";
        }
        else if (skola1 == 3){
            //skola = "vysokoskolske";
            kontrola = false;
            return "vysokoskolske";
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
            kontrola = true;
        }
    }while (kontrola == true);
}
//std::vector Udaje::info(){


//}

Udaje::~Udaje()
{
    //dtor
}
