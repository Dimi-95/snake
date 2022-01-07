#include <iostream>
#include "declaring_functions.h"
#include <thread>
#include <chrono>
#include <string>

//draw the outlines of the map

std::string input;
int move_x;
int move_y;

int main(){

while (true)
{
    std::cin >> input;

    if (input == "w" || input == "a" || input == "s" || input == "d")
    {
        if(input == "a")
        {
            move_x = -1;
            move_y = 0;
        }
        else if (input == "d")
        {
            move_x = +1;
            move_y = 0;
        }
        
    }
    

    grid grid;
    movement movement;

    grid.draw_grid_place_snake(40, 10, move_x, move_y); //Input Grid Resolution
    //Sleep for one second
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    //Delete everything in the console - loops and basically shows the most up to date state of the grid
    std::cout << "\x1B[2J\x1B[H";
}



    return 0;
}