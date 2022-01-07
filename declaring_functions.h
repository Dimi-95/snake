#pragma once
#include <iostream> 
#include <vector>
#include <string>

class movement
{
    int player_movement_x(std::string right, std::string left, int move_x);
    int player_movement_y(std::string up, std::string down, int move_y);


};


class grid
{

private:

std::vector<std::string> m_vertical;
std::vector<std::string> m_horizontal;

public:
    void draw_grid_place_snake(const int x ,const int y, int move_x, int move_y);
    
};