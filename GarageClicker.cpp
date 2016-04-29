#include "GarageClicker.h"
#include <iostream>

GarageClicker::GarageClicker(){
    state = 0;
}
void GarageClicker::inputs(int y)
{
    if(y == 0)
    {
        switch (y)
        {
            case 0:
                std::cout << "Door Closing\n";
                state = 1;
                break;

            case 1:
                std::cout << "Door Closing Stopped\n";
                state = 4;
                break;

            case 2:
                std::cout << "Door Opening\n";
                state = 3;
                break;

            case 3:
                std::cout << "Door opening Stopped\n";
                state = 5;
                break;
            case 4:
                std::cout << "Door Opening\n";
                state = 3;
                break;
            case 5:
                std::cout << "Door Closing\n";
                state = 1;
                break;
            default:
                std::cout << "invalid input";
                break;

        }
    }
}
