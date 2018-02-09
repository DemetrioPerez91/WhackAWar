//
//  SDLManagerComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef SDLManagerComponent_hpp
#define SDLManagerComponent_hpp

#include <stdio.h>
#include "defines.h"
#include "GameComponent.h"


//Static class that wraps basic initialization
class SDLManagerComponent
{
public:
    SDLManagerComponent(){}
    static SDL_Window * window;
    static SDL_Renderer * renderer;
    static SDL_Surface * screen;
    static void start();
    static void clear();
    static void present();

    //Initializaiton Methods
    static bool createWindow();
    static bool createRenderer();
    static bool initiateTFF();
    static bool initSDL();
    
    
    
    
};

#endif /* SDLManagerComponent_hpp */
