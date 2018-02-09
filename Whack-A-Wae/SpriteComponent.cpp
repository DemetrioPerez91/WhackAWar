//
//  SpriteComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "SpriteComponent.hpp"


void SpriteComponent::start()
{
    dest = new SDL_Rect();
    src = new SDL_Rect();
    src->h = height;
    src->w = width;
    dest->h = height;
    dest->w = width;
    src->x = 0;
    src->y = 0;
    textTure = TextureFactory::loadTexture(resourceURL);
    renderer = SDLManagerComponent::renderer;
}

void SpriteComponent::update()
{
    updateDest();
    TextureFactory::addTexture(textTure, src, dest);
}

void SpriteComponent::updateDest()
{

}


void SpriteComponent::changeDimensions(int  w , int  h)
{
    if (w != -1)
    {
        dest->w = w;
    }
    if (h != -1)
    {
        dest->h = h;
    }
}
