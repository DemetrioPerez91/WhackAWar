//
//  SpriteComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef SpriteComponent_hpp
#define SpriteComponent_hpp

#include <stdio.h>
#include "GameComponent.h"
#include "TextureFactory.hpp"


//Component that helps create a sprite texture for any Game Object
class SpriteComponent:public GameComponent
{
public:
    SpriteComponent(std::string resourceURL,int width, int height,GameObject *owner){
        this->resourceURL = resourceURL;
        this->height = height;
        this->width = width;
        this->owner = owner;
        start();
    }
    
    std::string resourceURL = "";
    //Rectangles necessary for rendering
    SDL_Rect * dest = NULL;
    SDL_Rect * src = NULL;
    //Sprite dimensions
    int width;
    int height;
    
    SDL_Texture * textTure = NULL; //Texture unique to this object
    SDL_Renderer * renderer = NULL;//Renderer from SDLManager
    
    //Parent class methods
    void start();
    void update();
    
    //Adjust the dimensions of the object to those specified in the arguments
    void changeDimensions(int  w, int h);
    
    //Move the sprite by updating the position
    //of the destinations rectangle of its texture
    void updateDest();
    
};
#endif /* SpriteComponent_hpp */
