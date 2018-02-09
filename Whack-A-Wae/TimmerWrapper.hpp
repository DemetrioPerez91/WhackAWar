//
//  TimmerWrapper.hpp
//  SpaceInvaders
//
//  Created by User on 10/2/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//
//This class is meant to be a facade for the SDL Timer class

#ifndef TimmerWrapper_hpp
#define TimmerWrapper_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <sstream>



//The application time based timer
class LTimer
{
public:
    //Initializes variables
    LTimer();
    
    //The various clock actions
    void start();
    void stop();
    void pause();
    void unpause();
    
    //Gets the timer's time
    Uint32 getTicks();
    
    //Checks the status of the timer
    bool isStarted();
    bool isPaused();
    
private:
    //The clock time when the timer started
    Uint32 mStartTicks;
    
    //The ticks stored when the timer was paused
    Uint32 mPausedTicks;
    
    //The timer status
    bool mPaused;
    bool mStarted;
};

#endif /* TimmerWrapper_hpp */
