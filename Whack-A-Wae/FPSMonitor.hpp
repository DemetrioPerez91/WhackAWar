//
//  FPSMonitor.hpp
//  SpaceInvaders
//
//  Created by User on 10/2/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef FPSMonitor_hpp
#define FPSMonitor_hpp
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include "TimmerWrapper.hpp"

//This class is meant to show FPS rate
class  FPSMonitor
{
public:
    static Uint32 startTime;
    static bool isTimmerStarted;
    static int frames;
    static void calculateFramerATE();
    static LTimer * fpsTimer;
};



#endif /* FPSMonitor_hpp */
