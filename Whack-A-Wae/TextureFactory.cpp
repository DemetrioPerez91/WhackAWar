//
//  TextureFactory.cpp
//  SpaceInvaders
//
//  Created by User on 10/4/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "TextureFactory.hpp"
// Add texture to renderer
void TextureFactory::addTexture(SDL_Texture  * texture,SDL_Rect * srcRect,SDL_Rect * destRect)
{
    SDL_RenderCopy(SDLManagerComponent::renderer, texture, srcRect,destRect);
}

///Load texture to memory
SDL_Texture* TextureFactory::loadTexture( std::string path )
{
    //The final texture
    SDL_Texture* newTexture = NULL;
    
    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if( loadedSurface == NULL )
    {
        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( SDLManagerComponent::renderer, loadedSurface );
        if( newTexture == NULL )
        {
            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        }
        
        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }
    
    return newTexture;
}
