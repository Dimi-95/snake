#pragma once
#include <iostream> 
#include <vector>
#include <string>

 class grid
 {

private:

std::vector<std::string> m_vertical;
std::vector<std::string> m_horizontal;
char m_line_v = '|';
char m_line_h = '_';


public:
    void draw_grid(const int x ,const int y)
    {
        for (int i = 0; i < x; i++)
        {
            m_horizontal.push_back("o");
        }

        for (int i = 0; i < y; i++)
        {
            m_vertical.push_back("o");
        }

        if (m_vertical.size() > 0 && m_horizontal.size() > 0)
        {
            std::cout << "Vectors have been filled" << std::endl;
        }

        for (int i = 0; i < y; i++)
        {
            std::cout << "" << std::endl;
            for ( int j = 0; j < x; j++)
            {
                std::cout << m_horizontal[j]; 
            }

        }

    }
        
 };