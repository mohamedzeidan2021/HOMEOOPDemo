#pragma once
#include <string>

class Competitor
{
public:
	Competitor(const std::string& NAME, int HEALTH, int SHIELD);
	std::string getName() const;
	int getHealth() const;
	int getShield() const;

	bool isDefeated() const;
	virtual void getsAttacked() = 0; 
protected:
	std::string name;
	int health;
	int shield;
};