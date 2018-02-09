//
//  GameObject.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "GameObject.hpp"
//Generic game object update method, to be overriden
void GameObject::update()
{
    int first = 0;
    int last = int(components.size() );
    while (first != last)
    {
        GameComponent * component = components.at(first);
        component->update();
        component = NULL;
        first++;
    }
}

//Template method for getting a component of the specified type
