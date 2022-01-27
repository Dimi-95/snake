#include <iostream>
#include "declaring_functions.h"
#include <thread>
#include <chrono>
#include <string>
#include <cctype>

//draw the outlines of the map

char input;
int move_x;
int move_y;
int move_x_counter = 0;
int move_y_counter = 0;
int frame_counter = 3;


int main(){

while (true)
{
    
    
    std::cout << "Input next move" << std::endl;
    std::cin >> input;
    input = std::tolower(input);

    if (input == 'w' || input == 'a' || input == 's' || input == 'd')
    {
        if(input == 'a')
        {
            std::cout << "a was pressed" << std::endl;
            move_x = -1;
            move_y = 0;

            move_x_counter = move_x_counter + move_x;
            frame_counter = frame_counter + 1;

        }
        else if (input == 'd')
        {
            std::cout << "d was pressed" << std::endl;
            move_x = +1;
            move_y = 0;

            move_x_counter = move_x_counter + move_x;
            frame_counter = frame_counter + 1;
        }
         else if (input == 's')
        {
            std::cout << "s was pressed" << std::endl;
            move_x = 0;
            move_y = +1;
            move_y_counter = move_y_counter + move_y;
            frame_counter = frame_counter + 1;
        }
        else if (input == 'w')
        {
            std::cout << "w was pressed" << std::endl;
            move_x = 0;
            move_y = -1;
            move_y_counter = move_y_counter + move_y;
            frame_counter = frame_counter + 1;
        }
        
    }
    else
    {
        std::cout << "WRONG INPUT - TRY AGAIN" << std::endl;
    }


    grid grid;
    //movement movement;

    //movement.player_movement_x(move_x);

    std::cout << move_x << std::endl;
     
    grid.draw_grid_place_snake(40, 10, move_x_counter, move_y_counter, frame_counter); //Input Grid Resolution and snake movement

    //Sleep for one second
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}


    return 0;
}