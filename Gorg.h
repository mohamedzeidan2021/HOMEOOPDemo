#pragma once
#include "Competitor.h"

class Gorg : public Competitor
{
private:
	int maxShield;
public:
	Gorg(); //pass by reference to not waste processing power
	virtual void getsAttacked() override;
};

