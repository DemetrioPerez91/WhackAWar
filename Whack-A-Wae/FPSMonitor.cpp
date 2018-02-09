
//
//  FPSMonitor.cpp
//  SpaceInvaders
//
//  Created by User on 10/2/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "FPSMonitor.hpp"

Uint32 FPSMonitor::startTime = 0;
bool FPSMonitor::isTimmerStarted = false;
int FPSMonitor::frames = 0;
LTimer * FPSMonitor::fpsTimer = NULL;

void FPSMonitor::calculateFramerATE()
{
    if(fpsTimer ==NULL){
        fpsTimer = new LTimer();
        fpsTimer->start();
    }
    frames++;
    float avgFPS = frames / ( fpsTimer->getTicks() / 1000.f );
    if( avgFPS > 2000000 )
    {
        avgFPS = 0;
    }
    printf("FPS: %f\n",avgFPS);
}




