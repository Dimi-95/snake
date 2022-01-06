#pragma once
#include <iostream> 
#include <vector>
#include <string>

 class grid
 {

private:

std::vector<std::string> m_grid ;
char m_line_v = '|';
char m_line_h = '_';
int line_counter;

public:
    void draw_grid(const int x ,const int y)
    {
        
        int grid_size = x*y;
        std::cout << grid_size << std::endl;

        for (int i = 0; i < grid_size; i++)
        {

            m_grid.push_back("o");
        }

    for (int i = 0; i < m_grid.size(); i++)
    {
        line_counter = x - 1; 
        
        std::cout << m_grid[i];
        
        if(i == line_counter)
        {
            std::cout << " test space" << std::endl;
            line_counter += x;
          
        }
          

    }

    

    }
 };