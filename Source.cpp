#include <iostream>
#include <string>
#include <vector>
#include "GarageClicker.h"

int main(){
    GarageClicker toy;
    int x[] = {0, 1, 0, 0, 0, 0, 0, 1};  //given inputs 0 = click  1 = cycle complete

    for (int i = 0; i < 8; i++)
    {
        toy.inputs(x[i]);
    }

    return 0;
}
