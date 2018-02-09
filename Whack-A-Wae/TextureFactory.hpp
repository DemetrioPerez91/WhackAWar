//
//  TextureFactory.hpp
//  SpaceInvaders
//
//  Created by User on 10/4/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef TextureFactory_hpp
#define TextureFactory_hpp

#include <stdio.h>
#include "SDLManagerComponent.hpp"

//Static class in charge of creating SDL textures.
class TextureFactory{
public:
    static void addTexture(SDL_Texture * texture,SDL_Rect * srcRect,SDL_Rect * destRect);
    static SDL_Texture * loadTexture( std::string path );
    
};

#endif /* TextureFactory_hpp */
