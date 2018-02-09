//
//  InputManager.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "InputManager.hpp"
#include "GameManagerComponent.hpp"
SDL_Event e;
Controller InputManager::controller;
void InputManager::update()
{
    while (SDL_PollEvent(&e) != 0)
    {
        
        switch (e.type)
        {
                
            case SDL_WINDOWEVENT:
                switch (e.window.event) {
                    case SDL_WINDOWEVENT_FOCUS_GAINED:
                                               break;
                    default :
                        break;
                }
                break;
            case SDL_QUIT:
                GameManagerComponent::gameOver = true;
                break;
            case SDL_KEYDOWN:
                switch (e.key.keysym.sym)
            {
                case SDLK_RETURN:
                    break;
                case SDLK_2:
                    break;
                case SDLK_1:
                    break;
                case SDLK_UP:
                case SDLK_w:
                    controller.forward = true;
                    break;
                case SDLK_DOWN:
                case SDLK_s:
                    controller.back = true;
                    break;
                case SDLK_LEFT:
                case SDLK_a:
                    controller.left = true;
                    break;
                case SDLK_RIGHT:
                case SDLK_d:
                    controller.right = true;
                    break;
                case SDLK_SPACE:
                    controller.fire = true;
                    break;
                case SDLK_m:
                    break;
                default:
                    break;
            }
                break;
            case SDL_KEYUP:
                switch (e.key.keysym.sym)
            {
                case SDLK_RETURN:
                    break;
                case SDLK_2:
                    break;
                case SDLK_1:
                    break;
                case SDLK_UP:
                case SDLK_w:
                    controller.forward = false;
                    break;
                case SDLK_DOWN:
                case SDLK_s:
                    controller.back = false;
                    break;
                case SDLK_LEFT:
                case SDLK_a:
                    controller.left = false;
                    break;
                case SDLK_RIGHT:
                case SDLK_d:
                    controller.right = false;
                    break;
                case SDLK_SPACE:
                    controller.fire = false;
                    break;
                case SDLK_m:
                    break;
                default:
                    break;
            }
                break;
            case SDL_MOUSEBUTTONDOWN:
                break;
            case SDL_MOUSEBUTTONUP:
                break;
            default:
                
                break;
        }
    }
}
