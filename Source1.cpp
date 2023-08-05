#include <SDL.h>
#include<iostream>
#include<vector>




int main(int argc, char** argv)
{
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Renderer* rend = nullptr;
    SDL_Window* window = nullptr;

   


 


    std::vector<std::pair<int, int>> drawings;



   

    
    float length = 100;

    float angle = 0;


 /*   for (int i = 0;i < 150; i++) {

        


        positions.push_back({ 750 + (100*sin(angle)),375 + (100 * cos(angle))});

        angle += 0.1;

    }*/




    

    

   



    SDL_CreateWindowAndRenderer(

        1500, 750,
        0, &window, &rend);


    SDL_RenderSetScale(rend, 1, 1);

   /*std::vector<float> positionsX;
   std::vector<float> positionsY;

    for (int i = 0; i < 1500; i++) {
        
        positionsX.push_back(rand()%1500 + 1);

    }

    for (int j = 0; j < 750; j++) {

        positionsY.push_back(rand() % 750 + 1);
    
    }*/

    float posX = 0, posY = 0;

   

    while (!quit)
    {
        SDL_PollEvent(&event);

        if (event.type == SDL_KEYDOWN) {

            if (event.key.keysym.sym == SDLK_ESCAPE) {

                quit = true;
            }



        }


        SDL_SetRenderDrawColor(rend, 255, 255, 255, 255);
        SDL_RenderClear(rend);



       
      
       


        
   /*    for (auto i : positions) {
             SDL_RenderDrawLine(rend,750,375,i.first,i.second);
        }
       */

        posX = 750 + (tan(angle) * length * sin(angle));
        posY = 375 + (1/tan(angle) * length * cos(angle));

        SDL_RenderDrawLine(rend, 750,375,posX, posY);
        
        drawings.push_back({posX,posY});

        for (auto i: drawings) {

            SDL_SetRenderDrawColor(rend, (int)angle%255, (int)angle%255, (int)angle%255, 255);

            SDL_Rect rect;
            
            rect.h = 5;
            rect.w = 5;
            rect.x = i.first;
            rect.y = i.second;

            SDL_RenderFillRect(rend,&rect);

           /* SDL_SetRenderDrawColor(rend, i.first/100, i.second/100, i.first + i.second / 100, 255);
            SDL_RenderDrawPoint(rend,i.first,i.second);*/
        }

        length -= 0.001;

       
        angle += 0.08;




        SDL_RenderPresent(rend);
    }

    SDL_Quit();

    return 0;
}