#include "GarageClicker.h"
#include <iostream>

GarageClicker::GarageClicker(){
    state = 2;//set initial state to closed
}
void GarageClicker::inputs(int y)//only 2 inputs click (0) or cycle complete (1)
{
    if(y == 0)                                          //if clicked
    {
        std::cout << "Button Clicked\n";                //print out action
        switch (state)                                  //check the present state of door
        {
            case 0:                                     //if open then change state to closing and print out the action
                std::cout << "Door Closing\n";
                state = 1;
                break;

            case 1:
                std::cout << "Door Closing Stopped\n";  //if door was closing then stop it change stated  and print out the action
                state = 4;
                break;

            case 2:                                     //if door was closed then put door in opening stated and print out action
                std::cout << "Door Opening\n";
                state = 3;
                break;

            case 3:                                     //if door was opening then stop it change state and print out action
                std::cout << "Door Opening Stopped\n";
                state = 5;
                break;
            case 4:                                     //if door was stopped after closing then put in opening state change state and print out action
                std::cout << "Door Opening\n";
                state = 3;
                break;
            case 5:                                     //if door was stopped after opening then put in closing state change state and print out action
                std::cout << "Door Closing\n";
                state = 1;
                break;
            default:                                    //mainly to notify me of improper input
                std::cout << "Invalid input\n";
                break;

        }
    }
    else                                                //if cycle complete
    {
        std::cout << "Cycle Complete\n";                //print out action
        switch(state)                                   //check the present state
        {
            case 1:                                     //if door was in closing state then change state to closed and print out the action
                std::cout << "Door Closed\n";
                state = 2;
                break;
            case 3:
                std::cout << "Door Open\n";             //if door is in opening stated then change to opened state and print out the action
                state = 0;
                break;
            default:                                    //mainly to notify me of improper input
                std::cout << "Invalid input\n";
                break;
        }
    }
}
