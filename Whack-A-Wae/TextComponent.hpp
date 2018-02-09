//
//  TextComponent.hpp
//  SpaceInvaders
//
//  Created by User on 10/2/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef TextComponent_hpp
#define TextComponent_hpp

#include <stdio.h>
#include "GameComponent.h"
#include "SDLManagerComponent.hpp"
#include "TextureFactory.hpp"


class TextComponent: public GameComponent
{
public:
    TextComponent(std::string text,std::string fontURL, GameObject * owner)
    {
        this->text = text;
        this->fontURL = fontURL;
        this->owner = owner;
        start();
    }
    
    
    TTF_Font * font = NULL;
    std::string text = "";
    std::string fontURL = "";
    
    SDL_Texture * textTexture = NULL;
    
    bool isTextUpdated = false;
    void start();
    void update();
    
    
};



#endif /* TextComponent_hpp */
