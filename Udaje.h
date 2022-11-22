#ifndef UDAJE_H
#define UDAJE_H
#include <iostream>
#include <vector>


class Udaje
{
    public:
        Udaje();
        //void nacti_udaje(bool& k);
        virtual ~Udaje();
        std::string jmeno_out, prijmeni_out, vzdelani_out;
        int vek_out;
        float vyska_out;
        bool kk();
        bool k;
//        std::vector info()=(4);

    protected:


    private:
        std::string pomoc;
        std::string jmeno(), prijmeni(), vzdelani();
        float pomoc1;
        int pomoc2;
        bool kontrola;
        int vek();
        float vyska();
};

#endif // UDAJE_H
