#pragma once
#include <iostream> 
#include <vector>
#include <string>

class grid
{

private:

std::vector<std::string> m_vertical;
std::vector<std::string> m_horizontal;

public:
    void draw_grid_place_snake(const int x ,const int y);
    
};