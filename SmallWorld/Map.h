#pragma once
#include <vector>
#include "Region.h"
using namespace std;

class Map
{
	vector <Region> regions;
	string name;
	string creator;

	public:
		Map();
		~Map();

		vector<Region>& getRegions();
		void setRegions(vector<Region>& regions);
		string getName();
		void setName(string name);
		string getCreator();
		void setCreator(string creator);
};

