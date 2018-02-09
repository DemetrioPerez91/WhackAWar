//
//  GameObject.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//
#pragma once
#ifndef GameObject_hpp
#define GameObject_hpp

#include <stdio.h>
#include <vector>

#include "GameComponent.h"


//Base class for all game objects.
class GameComponent;//Add this declaration to prevent circular dependency
class GameObject
{
public:
    GameObject(){}
    virtual ~GameObject(){}
    virtual void update();
    float x = 0.0f;
    float y = 0.0f;
    std::string tag = "";
    std::vector<GameComponent*> components;
    bool active = false;
    //Query the game object's component's vector to get the one of the specified type.

    template<class Type>
    Type* getComponent()
    {
        Type * result = NULL;
        int first = 0;
        bool searching = true;
        while (searching)
        {
            GameComponent * component = components.at(first);
            if (Type * comp = dynamic_cast<Type * >(component))
            {
                result = comp;
                searching = false;
            }
            first++;
        }
        return result;
    }
    void (*functionPointer)(GameObject *);
    
};
#endif /* GameObject_hpp */
