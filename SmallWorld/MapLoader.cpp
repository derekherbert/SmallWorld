#include "json.hpp"
#include <fstream>
#include <iostream>
#include "Map.h"
#include "Region.h"
#include "MapLoader.h"
using namespace std;
using json = nlohmann::json;

MapLoader::MapLoader() {}

MapLoader::~MapLoader() {}

Map MapLoader::loadMap (string fileName)
{
	//Open file stream and load it into a json object
	ifstream file(fileName);
	json jsonMap;
	file >> jsonMap;  ///ADD TRY CATCH

	//Declare Map object
	Map map;

	//Set Map's instance variables from json object
	map.setName(jsonMap["mapName"].get<string>());
	map.setCreator(jsonMap["creator"].get<string>());

	//Get array of regions from json
	json regions = jsonMap["regions"];

	//Validation array
	vector<int> ids;

	//Cycle through each region in the region array and populate new region objects
	for (int i = 0; i < regions.size(); i++)
	{
		Region region;

		//Add each id to validation array
		//int id = regions[i]["id"].get<int>();
		//if(find(ids.begin(), ids.end(), id) == ids.end())
		//	ids.push_back(id); 

		//Region properties
		region.setId(regions[i]["id"].get<int>());
		region.setBorder(regions[i]["border"].get<bool>());
		region.setLostTribe(regions[i]["lostTribe"].get<bool>());
		region.setRegionType(regions[i]["regionType"].get<string>());

		//RegionAttributes array
		json regionAttributes = regions[i]["regionAttributes"]; ///LOOK INTO CONVERTING JSON ARRAY TO VECTOR
		for (int j = 0; j < regionAttributes.size(); j++) {
			region.getRegionAttributes().push_back(regionAttributes[j].get<string>());
		}

		//AdjacentRegions array
		json adjacentRegions = regions[i]["adjacentRegions"]; ///LOOK INTO CONVERTING JSON ARRAY TO VECTOR
		for (int k = 0; k < adjacentRegions.size(); k++)
		{
			region.getAdjacentRegions().push_back(adjacentRegions[k].get<int>());
		}

		//Add the region to the map's list of regions
		map.getRegions().push_back(region);
	}

	return map;
}