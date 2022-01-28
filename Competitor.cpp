#include "Competitor.h"

Competitor::Competitor(const std::string& NAME, int HEALTH, int SHIELD)
	                   : name(NAME),
	                     health(HEALTH),
	                     shield(SHIELD)
{
	//nothing here...
}

std::string Competitor::getName() const
{
	return name;
}

int Competitor::getHealth() const
{
	return health;
}

int Competitor::getShield() const
{
	return shield;
}

bool Competitor::isDefeated() const
{
	return health <= 0;
}