#pragma once
#include <string>
using namespace std;

class Badge
{
	string name;
	string description;
	string race; //Might store this as a map in the Deck class
	int initialTokens;
	int bonusCoins;

	public:
		Badge();
		~Badge();
		string getName();
		void setName(string name);
		string getDescription();
		void setDescription(string description);
		string getRace();
		void setRace(string race);
		int getInitialTokens();
		void setInitialTokens(int initialTokens);
		int getBonusCoins();
		void setBonusCoins(int bonusCoins);
};

