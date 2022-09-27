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

    std::cout<<"Zadej vysku: ";
    float vyska;
    std::cin >> vyska;


    std::cout<<"Zadej vek: ";
    int vek;
    std::cin >> vek;
    std::cout<<"cislo: " << vek << "\n";



    enum vzdelani {zs,ss,vs};
    std::cout << "Zadej dosazene vzdelani: 1-Zakladni 2-Stredni 3-Vysokoskolske \n";
    int skola1;
    std::cin >> skola1;
    std::string skola;


    if (skola1 == 1) {
        skola = "zakladni";

        }
        else if (skola1 == 2) {
            skola = "stredni";
        }
        else {
            skola = "vysokoskolske";
        }

    std::cout << "vzdelani je " << skola << "\n";

    std::cout << "Jmeno: " << jmeno << "\nPrijmeni: " << prijmeni;
    std::cout << "\nVyska: " << vyska << "\nVek: " << vek << "\n";

    std::ofstream zapisDoSouboru("udaje.txt");
    zapisDoSouboru << jmeno << "\n" << prijmeni << vyska << "\n" << vek << "\n" << skola << std::endl;

    return 0;


}
