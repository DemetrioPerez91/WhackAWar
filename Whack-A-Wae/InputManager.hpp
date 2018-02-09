//
//  InputManager.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//
#pragma once
#ifndef InputManager_hpp
#define InputManager_hpp

#include <stdio.h>
#include <SDL2/SDL.h>


struct Controller
{
    bool forward = false;
    bool back = false;
    bool left = false;
    bool right = false;
    bool fire = false;
};


//Static class that monitors the input the user
//provides during the game's lifecycle
class InputManager
{
public:
    
    static Controller controller;
    static void update();
};
#endif /* InputManager_hpp */
