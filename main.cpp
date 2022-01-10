#include <iostream>
#include "declaring_functions.h"
#include <thread>
#include <chrono>
#include <string>

//draw the outlines of the map

std::string input;
int move_x;
int move_y;
int move_x_counter = 0;

int main(){

while (true)
{
    std::cout << "Input next move" << std::endl;
    std::cin >> input;

    if (input == "w" || input == "a" || input == "s" || input == "d")
    {
        if(input == "a")
        {
            std::cout << "a was pressed" << std::endl;
            move_x = -1;
            move_y = 0;

            move_x_counter = move_x_counter + move_x;


        }
        else if (input == "d")
        {
            std::cout << "a was pressed" << std::endl;
            move_x = +1;
            move_y = 0;

            move_x_counter = move_x_counter + move_x;
        }
        
    }
    else
    {
        std::cout << "WRONG INPUT" << std::endl;
    }


    grid grid;
    //movement movement;

    //movement.player_movement_x(move_x);

    std::cout << move_x << std::endl;
     
    grid.draw_grid_place_snake(40, 10, move_x_counter, move_y); //Input Grid Resolution and snake movement

    //Sleep for one second
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}


    return 0;
}