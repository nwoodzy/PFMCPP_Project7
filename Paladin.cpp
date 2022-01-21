#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin( std::string name_, int hitPoints, int armor_ ) : Character( hitPoints, armor_, 10 ), name( name_ ) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}
// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}
// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
