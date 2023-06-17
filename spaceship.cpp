#pragma once
#include "spaceship.hpp"

Spaceship::Spaceship() : Flying_Object({133, 196, 80, 59}, {280, 530, 70, 70}) {}

void Spaceship::fly() {}

void Spaceship::setMov(int x, int y)
{
    moverRect.x = x; //moving the spaceship on x coordinates
    moverRect.y = y; //moving the spaceship of y coordinates
}
