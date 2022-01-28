#include "Gorg.h"

Gorg::Gorg()
	: Competitor("George", 30, 5),
	maxShield(5)
{
	//nothing here...
}

void Gorg::getsAttacked()
{
	int roll = rand() % 100; //value from 0 - 99
	if (roll < 15)
	{
		//0-14
		if (++shield > maxShield)
		{
			--shield;
		}
	}
	
	//int roll = rand() % 100;
	if (roll < 65)
	{
		//0-64
		shield -= (1 + (rand() % 2));
		if (shield < 0)
		{
			health -= (5 + (rand() % 6));
		}
	}
}



/*The first action is to check if the shield will regen slightly
15% of the time, add 1 to the shiled value, and also make sure this new shield is clamped to its max val
85% of the time, no regen will occur (we don't need to do anything for this)

the 2nd action is to check if health damage is going to be done
35% of the time, the attack misses and does 0 dmg
65% of the time, the following occurs:
	shield takes 1-2 random damage
	if the modified shield value is now less than zero, attack does random 5-10 health damage
	Think of this as an actual physical shield that can be damaged with use
	If the shield value is reduced to zero or negative value, that means it has been destroyed
*/