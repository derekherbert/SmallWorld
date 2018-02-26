#pragma once
#include <string>
using namespace std;

class RaceBanner
{
	string race; //might switch to enums
	int initialTokens;
	string description;
	bool state; // 0 = false = in decline, 1 = true = active
	//Image icon  // maybe implement later on

	public:
		RaceBanner();
		~RaceBanner();
		string getRace();
		void setRace(string race);
		int getinitialTokens();
		void setinitialTokens(int initialTokens);
		string getdescription();
		void setdescription(string description);
		bool getState();
		void setState(bool state);
};