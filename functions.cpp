#include "declaring_functions.h"
#include <cstdlib>

void grid::draw_grid_place_snake(const int x ,const int y, int move_x, int move_y, int frame_counter)
    { 
        int position_on_y = y / 2;
        int position_on_x = x / 2;
        bool lost = false;
        int i = 0;
        int random_x = rand() % x;
        int random_y = rand() % y;
//----------------------------------------
//      Adding an object every 5 frames

        std::cout << "frame counter: " << frame_counter << std::endl;

        if(frame_counter % 5 == 0)
        {
            if (random_x == 0)
            {
                random_x = random_x + 1 ;
                frame_counter = frame_counter + 1;

            }
            else if (random_x == x)
            {
                random_x = random_x -1;
                frame_counter = frame_counter + 1;
            }

            if (random_y == 0)
            {
                random_y = random_y +1;
            }
            else if (random_y == y)
            {
                random_y = random_y -1;
            }

        }
        
        std::cout << "random_x number is : " << random_x << std::endl;
        std::cout << "random_y number is : " << random_y << std::endl;

//--------------------------------------------



        //fill in the vector of the x axes - width e.g. 40 = 40 Os
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
        for (int i = 0; i < y; i++) // y = number of height
        {
            

            // Add line that deals with M and X being on the same spot
            if(m_horizontal[position_on_x + move_x] == "X") //if the vector, while itterating is on position x + the input position - the element in that vector will be X
            {
                m_horizontal[position_on_x + move_x] = "o"; //else, the element will be "o". This is to prevent from all the vectors, in a row, to add X into that element slot (which basically creates a line from the top to the bottom)
            }

            std::cout << "" << std::endl; // I don't remember why I put this in but I am too afraid to remove it
            for ( int j = 0; j < x; j++) //iterating through the width
            {
                //while iterating through the width, and outputting the content of the m_horizontal vector
                //if i, which is incremented from the for loop this one is nested int o, reaches
                //the position_on_y(example: 40/2 = 20 <- the middle) position the "X" into the
                //given element position of the horizontal_row 

                
                if (i == position_on_y + move_y)//position_on_y is the middle of the grid and by adding move_y we can modify the position of the "X"
                {                               // as it moves the placement of the "X" up or down. Since move_y has a counter on it that does not change unless modified
                                                // we basically move the "X" Vertically and simulate movement this way

    
                    m_horizontal[position_on_x + move_x] = "X";
                    
                    if (frame_counter % 5 == 0)
                    {m_horizontal[random_x] = "M";}

                    if(m_horizontal[position_on_x + move_x] == m_horizontal.front()
                    || m_horizontal[position_on_x + move_x] == m_horizontal.back()
                    || i == 0
                    || i == y - 1)
                  {
                    lost = true;
                    break; 
                  }
                }
                
                std::cout << m_horizontal[j]; 
            }
                
            

        }
        //seperate grid from input line
        if(lost == true) 
        {
            std::cout <<  std::endl;
            std::cout << "You touched the boundaries and lost" << std::endl;
            exit(EXIT_SUCCESS);
        }


        std::cout << std::endl;
        std::cout << "wait 2s for Input cue";
        std::cout << std::endl;

        
        
        
    }