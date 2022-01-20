#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf( std::string name_, int hitPoints, int armor_ );
    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};
