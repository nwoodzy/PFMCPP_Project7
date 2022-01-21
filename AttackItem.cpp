#include "AttackItem.h"
#include "Utility.h"

struct AttackItem::AttackItem() : Item("attack item", 3){}
    
void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}