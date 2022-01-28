#pragma once
#include <string>
#include "Competitor.h"

class Boov : public Competitor
{
public:
	Boov(const std::string & NAME, int HEALTH, int SHIELD); //pass by reference to not waste processing power
	virtual void getsAttacked() override;
};

