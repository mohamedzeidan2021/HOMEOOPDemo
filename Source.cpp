#include <ctime>
#include <iostream>
#include "Boov.h"
#include "Gorg.h"
#include "Competitor.h"

int main()
{
	//run many simulations
	const int NUMBER_OF_SIMULATIONS = 100;

	//count the total number of rounds survived
	int boovWins = 0;
	int gorgWins = 0;

	//repeat many times
	for (int i = 1; i <= NUMBER_OF_SIMULATIONS; i++)
	{
		//let's see how long a single boov can last
		Competitor * oh = new Boov("Oh", 31, 13);
		Competitor * george = new Gorg;
		
		//while still healhty enough to do battle...
		while ((oh->isDefeated() == false) && (george->isDefeated() == false))
		{
			george->getsAttacked();
			if (george->isDefeated() == false)
			{
				oh->getsAttacked();
			}
		}
	
		if (george->isDefeated() == true)
		{
			++boovWins;
		}
		else
		{
			++gorgWins;
		}
	}

	double boovPct = boovWins / static_cast<double>(NUMBER_OF_SIMULATIONS) * 100;
	double gorgPct = gorgWins / static_cast<double>(NUMBER_OF_SIMULATIONS) * 100;

	std::cout << "Boov: " << boovPct << std::endl;
	std::cout << "Gorg: " << gorgPct << std::endl;

	//clean and exit
	system("PAUSE");
	return 0;
}
