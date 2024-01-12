#include <iostream>
#include "iter.hpp"

int main(void) {
    std::string strTab[7];
    int intTab[4];

    // Initialisation du tableau avec des valeurs
    strTab[0] = "Premier";
    strTab[1] = "Deuxième";
    strTab[2] = "Troisième";
    strTab[3] = "Quatrième";
    strTab[4] = "Cinquième";
    strTab[5] = "Sixième";
    strTab[6] = "Septième";

    // Initialisation du tableau avec des valeurs
    intTab[0] = 10;
    intTab[1] = 20;
    intTab[2] = 30;
    intTab[3] = 40;
    iter(strTab, 7, &disp);
    iter(intTab, 4, &disp);
    iter(intTab, 4, &square);
}