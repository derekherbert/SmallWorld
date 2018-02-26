#include "ReinforcementsDie.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

ReinforcementsDie::ReinforcementsDie()
{
	dieRollCtr = 0;
	srand(time(NULL)); //Initialize random seed
}

ReinforcementsDie::~ReinforcementsDie() {}

/*
	Generates a random die roll. Simulates a 6-sided die where 3 sides are 0,
	and the other 3 sides are 1, 2, and 3 respectively.

	50% chance of rolling 0
	16.67% chance of rolling 1
	16.67% chance of rolling 2
	16.67% chance of rolling 3
*/
int ReinforcementsDie::rollDie() 
{ 
	int num = (rand() % 3) + 1; //Generate a random number between 1 and 3 (inclusive): 
	int multiplier = rand() % 2; //Generate either 0 or 1 (50% chance of rolling 0)
	int dieValue = num * multiplier; 

	//Increment instance variables
	dieRollCtr++;
	dieRolls[dieValue] = dieRolls[dieValue] + 1;

	return dieValue;
}

/*
	Calculates the roll-percentage of a specific die value (0 to 3 inclusive)
*/
double ReinforcementsDie::getRollPercentage(int dieValue)
{
	if (dieRollCtr == 0) //Prevent divide-by-zero error
		return 0;

	return dieRolls[dieValue] / (double)dieRollCtr;
}