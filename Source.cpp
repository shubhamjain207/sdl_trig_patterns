//#include <SDL.h>
//#include<iostream>
//#include<vector>
//
//
//
//
//int main(int argc, char** argv)
//{
//    bool quit = false;
//    SDL_Event event;
//
//    SDL_Init(SDL_INIT_VIDEO);
//
//    SDL_Init(SDL_INIT_VIDEO);
//    SDL_Renderer* rend = nullptr;
//    SDL_Window* window = nullptr;
//
//    SDL_Rect rect;
//    rect.h = 10;
//    rect.w = 50;
//    rect.x = 500;
//    rect.y = 240;
//
//    SDL_Rect rect1;
//    rect1.h = 10;
//    rect1.w = 50;
//    rect1.x = 100;
//    rect1.y = 240;
//
//    SDL_Rect rect2;
//    rect2.h = 10;
//    rect2.w = 10;
//    rect2.x = 200;
//    rect2.y = 235;
//    
//
//    float posX = 200;
//
//
//    std::vector<std::pair<int, int>> positions;
//
//
//    for (int i = 0; i < 20; i++) {
//        positions.push_back({340 + (200*sin(i)),240 + (200 * cos(i))});
//    }
//
//
//
//    float val = 0.08;
//
//
//    SDL_Rect rect3;
//    rect3.h = 50;
//    rect3.w = 10;
//    rect3.x = 340;
//    rect3.y = 100;
//
//    SDL_Rect rect4;
//    rect4.h = 50;
//    rect4.w = 10;
//    rect4.x = 340;
//    rect4.y = 400;
//
//    SDL_Rect rect5;
//    rect5.h = 10;
//    rect5.w = 10;
//    rect5.x = 335;
//    rect5.y = 100;
//
//
//    float posX1 = 340;
//
//    float val1 = 0.08;
//
//    float posY = 240;
//
//
//
//    SDL_CreateWindowAndRenderer(
//
//        680, 480,
//        0, &window, &rend);
//
//
//    SDL_RenderSetScale(rend, 1, 1);
//
//
//    float angle = 0;
//
//    while (!quit)
//    {
//        SDL_PollEvent(&event);
//
//        if (event.type == SDL_KEYDOWN) {
//
//            if (event.key.keysym.sym == SDLK_ESCAPE) {
//
//                quit = true;
//            }
//
//        }
//
//
//        SDL_SetRenderDrawColor(rend, 255, 255, 255, 255);
//        SDL_RenderClear(rend);
//
//
//
//        SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);
//        /*  SDL_RenderDrawRect(rend, &rect);
//
//
//
//          SDL_RenderDrawRect(rend, &rect1);
//
//
//
//          SDL_RenderDrawRect(rend, &rect2);
//
//
//
//          SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);
//          SDL_RenderDrawRect(rend, &rect3);
//
//
//
//          SDL_RenderDrawRect(rend, &rect4);
//
//
//
//          SDL_RenderDrawRect(rend, &rect5);*/
//
//
//        for (auto i : positions) {
//
//            SDL_Rect rect;
//            rect.h = 10;
//            rect.w = 10;
//            rect.x = i.first;
//            rect.y = i.second;
//
//            SDL_RenderDrawRect(rend, &rect);
//           // SDL_RenderDrawLine(rend, i.first, i.second, i.first+1, i.second+1);
//        }
//
//
//        for (auto i : positions) {
//
//            SDL_Rect rect11;
//            rect11.h = 10;
//            rect11.w = 10;
//            rect11.x = posX;
//            rect11.y = posY;
//
//            SDL_RenderDrawRect(rend, &rect11);
//
//
//            if (posX > i.first) {
//                val = -0.08;
//            }
//
//        /*    else if (posX < 250) {
//                val = 0.08;
//            }*/
//
//
//            posX += val;
//            rect11.x = posX;
//
//
//           
//        }
//
//
//       
//
//
//   /*     SDL_RenderDrawLine(rend, 450, 240, 550, 240);
//
//        SDL_RenderDrawLine(rend, 340, 50, 340, 150);
//
//        SDL_RenderDrawLine(rend, 340, 340, 340, 440);*/
//
//
//
//
//        /*SDL_RenderDrawRect(rend, &rect2);
//
//
//        SDL_RenderDrawRect(rend, &rect5);*/
//
//
//        
//
//
// 
//
//        if (posX>450) {
//            val = -0.08;
//        }
//       
//       else if(posX<250) {
//            val = 0.08;
//        }
//
//        
//        posX += val;
//        rect2.x = posX;
//
//        
//
//
//        if (posX1 > 340) {
//            val1 = -0.08;
//        }
//
//       else if (posX1 < 150) {
//            val1 = 0.08;
//       }
//
//
//        posX1 += val1;
//        rect5.y = posX1;
//     
//
//
//        SDL_RenderPresent(rend);
//    }
//
//    SDL_Quit();
//
//    return 0;
//}