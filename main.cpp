#include <iostream>
#include "declaring_functions.h"
#include <thread>
#include <chrono>

//draw the outlines of the map


int main(){

while (true)
{
    grid grid;

    grid.draw_grid_place_snake(40, 10); //Input Grid Resolution
    //Sleep for one second
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    //Delete everything in the console - loops and basically shows the most up to date state of the grid
    std::cout << "\x1B[2J\x1B[H";
}



    return 0;
}