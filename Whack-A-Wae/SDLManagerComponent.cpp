//
//  SDLManagerComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//



//SDL wrapper dedicatied to run all operations related to SDL


#include "SDLManagerComponent.hpp"


SDL_Window * SDLManagerComponent::window;
SDL_Renderer * SDLManagerComponent::renderer;
SDL_Surface * SDLManagerComponent::screen;
void SDLManagerComponent::start(){
    
    if(initSDL()){
        if(createWindow())
        {
            if(createRenderer())
            {
                if(initiateTFF()){
                    printf("SDL successfully initiated!\n");
                }
                
            }
        }
    }
}

bool SDLManagerComponent::initSDL()
{
    bool success = true;
    if (SDL_Init(SDL_INIT_TIMER)<0)
    {
        success = false;
        return success;
    }
    else
    {
        if (SDL_Init(SDL_INIT_VIDEO)<0)
        {
            success = false;
            return success;
        }
    }
    return  success;
}

bool SDLManagerComponent::createWindow()
{
    
    bool success = true;
    window = SDL_CreateWindow("2-Deme Engine",
                               SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_W , SCREEN_H,
                               SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        success = false;
        return success;
    }
    return success;
}

bool SDLManagerComponent::initiateTFF()
{
    bool success = true;
    //Initialize SDL_ttf
    if( TTF_Init() == -1 )
    {
        printf( "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError() );
        success = false;
    }
    return  success;
}



bool SDLManagerComponent::createRenderer()
{
    bool success = true;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    if (renderer == NULL)
    {
        
        success = false;
        return success;
    }
    else
    {
        SDL_SetRenderDrawColor(renderer, 104, 48, 48, 0);
        int imgFlags = IMG_INIT_PNG;
        if (!IMG_Init(imgFlags)&imgFlags)
        {
            success = false;
            return success;
        }
    }
    return success;
}


//Present renderer
void SDLManagerComponent::present()
{
    SDL_RenderPresent(renderer);
}

//Clean renderer
void SDLManagerComponent::clear()
{
    SDL_RenderClear(renderer);
}



