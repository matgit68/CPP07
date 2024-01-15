#include <iostream>
#include "iter.hpp"

int main(void) {
    std::string strTab[5] = {"Premier","Deuxième","Troisième","Quatrième","Cinquième"};

    int intTab[4] = {10, 20, 30, 40};
    iter(strTab, 5, disp<std::string>);
    iter(intTab, 4, disp<int>);
    iter(intTab, 4, square<int>);
}