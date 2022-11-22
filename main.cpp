#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Udaje.h"

void neco(std::vector <Udaje>& sz){
    bool kontr = true;
    int i=0;
    do{
        sz.push_back(Udaje());
        kontr=sz[i].kk();
        i++;
    } while (kontr==true);
}

void serad_pr(std::vector <Udaje>& sz){
    std::sort(sz.begin(),sz.end(),[](const Udaje& p1, const Udaje& p2) {
        return p1.prijmeni_out < p2.prijmeni_out;
    });
}

void uloz(std::vector <Udaje>& sz){
    std::ofstream zapis("data.txt");
    for(int i = 0; i<sz.size();i++){
        zapis << sz[i].jmeno_out << " "<< sz[i].prijmeni_out << " "<< sz[i].vyska_out << " "<< sz[i].vek_out << " " << sz[i].vzdelani_out << "\n";
    }
}

int main(){
    //int velikost = 1;
    std::vector <Udaje> seznam;

    neco(seznam);
    serad_pr(seznam);
    uloz(seznam);

    //for(int i=0; i<seznam.size(); i++){
      //  std::cout << seznam[i].jmeno_out;
    //}

    return 0;
}
