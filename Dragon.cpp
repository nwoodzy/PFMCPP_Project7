#include "Dragon.h"
#include "DragonSlayer.h"

//Dragon::Dragon
Dragon::Dragon ( std::string name_, int hitPoints, int armor_ ) : Character ( hitPoints, armor_, 10 ) {};

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

//Dragon::getName

//Dragon::getStats