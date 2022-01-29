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
