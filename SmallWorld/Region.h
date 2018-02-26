#pragma once
#include "RegionType.h"
#include "RegionAttribute.h"
#include <vector>
using namespace std;

class Region
{
	int id;
	bool border;
	bool lostTribe;
	string regionType; /// LOOK INTO ENUMS AGAIN
	vector<string> regionAttributes; ///LOOK INTO ENUMS AGAIN
	vector<int> adjacentRegions;

	string owner; //Might switch this to a player object. MIGHT REMOVE AND ADD A REGIONS LIST TO PLAYER CLASS
	vector <string> raceTokens; //Might switch this to raceToken objects
	vector <string> structures; //Various structures on the region (mountain, encampment, troll lair, etc. )

	public:
		Region();
		Region(int id, bool border, bool lostTribe, string regionType, 
			   vector<string>& regionAttributes, vector<int>& adjacentRegions);
		~Region();

		int getId();
		void setId(int id);
		bool getBorder();
		void setBorder(bool border);
		bool getLostTribe(); 
		void setLostTribe(bool lostTribe);
		string getRegionType();
		void setRegionType(string regionType);
		vector<string>& getRegionAttributes(); //ADD SETTER
		vector<int>& getAdjacentRegions(); //ADD SETTER
};

