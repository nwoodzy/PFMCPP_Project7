#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf( std::string name_, int hitPoints, int armor_ );

    const std::string& getName() override;
    std::string getStats() override;
    //void attack(Character& other) override;
    
private:
    const std::string name;
};
