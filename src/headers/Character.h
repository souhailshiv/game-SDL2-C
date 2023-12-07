#pragma once
#include "entity.h"
#include "csts.h"
#include <stdio.h>
#include "map.h"
#include "string.h"
#include "vector2d.h"
typedef struct 
{
    Entity character;
    int speed;
    SDL_Texture* textures[4];
    int coll;

}Character;


void character(float x,float y,SDL_Texture* texture,Character* character,int speed);
void movecharacter(float x,float y,Character* character,Map* p_Map);
int CgetSpeed(Character* character);
void addTextures(SDL_Texture* textures[],Character* character,int size);
void character_collision( Character* p_a, Map* p_b);
