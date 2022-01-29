#include "Boov.h"

Boov::Boov(const std::string& NAME, int HEALTH, int SHIELD)
	: Competitor(NAME, HEALTH, SHIELD)
{
	//nothing here...
}

void Boov::getsAttacked()
{
	//0=99
	int roll = rand() % 100;
	if (roll == 0)
	{
		health = 0;
	}
	else if (roll <= 50)
	{
		//1 -50 (50%)
		shield -= (2 + (rand() % 4)); //will give number between 2-5
		if (shield < 0)
		{
			health += shield; //when shield is broken, just add the negative value of shield into health to get a new health
			shield = 0;
		}
	}
	else if (roll <= 79)
	{
		//51-79 (29%)
		health -= (4 + (rand() % 5)); //will give numbe between 4-8
	}
	//20% do nothing
}

/*
1% of the time, the boov is instantly defeated|set health to 0
20% of the time, the attack misses and does 0 damage (dont need to do shit for this)
50% of the time, the attack does 2-5 random shield damage
	think of this as an actual physical shield that can be damaged with use
	if the shield calue is reduced to a negative value, that means it has been destroyed, so subtract the extra damage from their health
29% of the time randomly, the attack does 4-8 random health damage
*/
