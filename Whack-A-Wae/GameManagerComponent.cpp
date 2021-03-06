//
//  GameManagerComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "GameManagerComponent.hpp"

bool GameManagerComponent::gameOver = false;
BackgroundGameObject * GameManagerComponent::background = NULL;
std::vector<GameObject *> GameManagerComponent::objects = std::vector<GameObject*>();


void GameManagerComponent::setup()
{
    background = new BackgroundGameObject();
    objects.push_back(background);
    background->functionPointer = &addObject;

}

void GameManagerComponent::update()
{
   
    for(int i = 0; i < objects.size(); i++)
    {
        objects.at(i)->update();
    }
     
}
void  GameManagerComponent::addObject(GameObject * object)
{
    objects.push_back(object);
}
