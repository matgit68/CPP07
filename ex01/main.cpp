#include <iostream>
#include "iter.hpp"

int main(void) {
    std::string strTab[5] = {"Premier","Deuxième","Troisième","Quatrième","Cinquième"};

    int intTab[4] = {10, 20, 30, 40};
    iter(strTab, 5, &disp);
    iter(intTab, 4, &disp);
    iter(intTab, 4, &square);
}