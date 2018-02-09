//
//  BackgroundGameObject.hpp
//  Whack-A-Wae
//
//  Created by Demetrio Osorio - Vendor on 2/8/18.
//  Copyright © 2018 Demetrio. All rights reserved.
//

#ifndef BackgroundGameObject_hpp
#define BackgroundGameObject_hpp

#include <stdio.h>
#include "GameObject.hpp"
#include "SpriteComponent.hpp"
class BackgroundGameObject: public GameObject
{
public:

    BackgroundGameObject()
    {
        SpriteComponent * sprite = new SpriteComponent("resources/fondo/fondo.png",700,700,this);
        this->components.push_back(sprite);
    }

};

#endif /* BackgroundGameObject_hpp */
