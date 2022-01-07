#include "declaring_functions.h"

void grid::draw_grid_place_snake(const int x ,const int y, int move_x, int move_y )
    {
        int position_on_y = y / 2;
        int position_on_x = x / 2;

        //fill in the vector of the x axes - width
        for (int i = 0; i < x; i++)
        {

            m_horizontal.push_back("o");
        }
        //fill in the vector of the y axes - height
        for (int i = 0; i < y; i++)
        {
            m_vertical.push_back("o");
        }

        //Debug to see if Vectors filled correctly
        // if (m_vertical.size() > 0 && m_horizontal.size() > 0)
        // {
        //     std::cout << "Vectors have been filled" << std::endl;
        // }
        
        //create grid
        for (int i = 0; i < y; i++)
        {
            if(m_horizontal[position_on_x + move_x] == "X")
            {
                m_horizontal[position_on_x + move_x] = "o";
            }

            std::cout << "" << std::endl;
            for ( int j = 0; j < x; j++)
            {
                
                if (i == position_on_y)
                {
                    m_horizontal[position_on_x + move_x] = "X";
                }
                
                std::cout << m_horizontal[j]; 
            }
                
            

        }
        //seperate grid from input line
        std::cout << std::endl;

        
        
        
    }