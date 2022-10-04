#include <iostream>
#include <fstream>

int main(){

    std::string jmeno;
    bool kontrola = true;

    do{
        std::cout << "Zadej jmeno: ";

        std::cin >> jmeno;

        if (jmeno == ""){
            kontrola = true;
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
        }
        else{
            kontrola = false;

        }
    } while(kontrola == true);

    std::cout << "Zadej prijmeni: ";
    std::string prijmeni;
    std::cin >> prijmeni;

    float vyska;
    kontrola = true;
    do{
        std::cout<<"Zadej vysku: ";
        std::cin >> vyska;
        if (100 < vyska && vyska < 230){
            kontrola = false;
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
        }
    } while (kontrola == true);

    int vek;
    kontrola = true;
    do{
        std::cout<<"Zadej vek: ";
        std::cin >> vek;
        if (5 < vek && vek < 100){
        kontrola = false;
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
        }
    } while (kontrola == true);




    enum vzdelani {zs,ss,vs};
    std::cout << "Zadej dosazene vzdelani: 1-Zakladni 2-Stredni 3-Vysokoskolske \n";
    int skola1;

    std::string skola;

    do{
        std::cin >> skola1;
        if (skola1 == 1) {
            skola = "zakladni";
            kontrola = false;

        }
        else if (skola1 == 2) {
            skola = "stredni";
            kontrola = false;
        }
        else if (skola1 == 3){
            skola = "vysokoskolske";
            kontrola = false;
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
            kontrola = true;
        }
    }while (kontrola == true);



    std::cout << "Jmeno: " << jmeno << "\nPrijmeni: " << prijmeni;
    std::cout << "\nVyska: " << vyska << "\nVek: " << vek << "\n";
    std::cout << "Vzdelani je " << skola << "\n";

    std::ofstream zapisDoSouboru("udaje.txt");
    zapisDoSouboru << jmeno << "\n" << prijmeni << "\n" << vyska << "\n" << vek << "\n" << skola << std::endl;

    return 0;


}
