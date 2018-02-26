#pragma once
#include "ReinforcementsDie.h"
#include <iostream>
using namespace std;

class ReinforcementsDieTest
{
	public:
		static void rollDie(int numberOfRolls)
		{
			ReinforcementsDie die;

			cout << "Rolling reinforcements die " << numberOfRolls << " times:" << endl;

			for (unsigned int i = 0; i < numberOfRolls; i++)
			{
				cout << "\t Roll " << i + 1 << ": " << die.rollDie() << endl;
			}

			cout << "\n Percentages: " << endl;
			cout << "\t 0: " << die.getRollPercentage(0) * 100 << "%" << endl;
			cout << "\t 1: " << die.getRollPercentage(1) * 100 << "%" << endl;
			cout << "\t 2: " << die.getRollPercentage(2) * 100 << "%" << endl;
			cout << "\t 3: " << die.getRollPercentage(3) * 100 << "%" << endl;
		}
};