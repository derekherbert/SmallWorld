#pragma once

class ReinforcementsDie
{
	int dieRollCtr; 
	int dieRolls[4] = { 0, 0, 0, 0 }; //Records each roll. Ex: dieRolls[0] contains the number of times the die has rolled 0

	public:
		ReinforcementsDie();
		~ReinforcementsDie();
		int rollDie();
		double getRollPercentage(int dieValue); //dieValue between 0 and 3 (inclusive)
};

