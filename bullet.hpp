#include "flying_object.hpp"
#pragma once

class Bullet : public Flying_Object //child class of flying object 
{
private:
    SDL_Rect mover, src;//the attributes of mover and src
    int frame = 0; //frame will be 0
public:
    bool exploded = false; //end and exploded both will be false in the start
    bool end = false;
    void fly(); //fly function from the flying object which has to be present in every child class
    Bullet(int, int);
    // SDL_Rect* getMov();
    void removeBullet();
};