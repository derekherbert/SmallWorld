#pragma once
#include "json.hpp"
#include <fstream>
#include <iostream>
#include "Map.h"
#include "Region.h"
#include "MapLoader.h"
using namespace std;
using json = nlohmann::json;

class MapLoaderTest
{
	public:
		static void printMapFile(string fileName)
		{
			ifstream file(fileName);
			json map;
			file >> map;

			cout << "mapName: " << map["mapName"] << endl;
			cout << "creator: " << map["creator"] << endl;
			cout << "regions: " << endl;
			json regions = map["regions"];

			for (int i = 0; i < regions.size(); i++) {
				cout << "    id: " << regions[i]["id"];
				cout << " border: " << regions[i]["border"];
				cout << " lostTribe: " << regions[i]["lostTribe"];
				cout << " regionType: " << regions[i]["regionType"].get<string>();

				json regionAttributes = regions[i]["regionAttributes"];
				cout << " regionAttributes: " << regionAttributes[0].get<string>();

				json adjacentRegions = regions[i]["adjacentRegions"];
				cout << " adjacentRegions: [" << adjacentRegions[0];
				for (int j = 1; j < adjacentRegions.size(); j++)
				{
					cout << ", " << adjacentRegions[j];
				}

				cout << "]" << endl;
			}
		}

		///Change to toString() ??
		static void printMapObject(string fileName)
		{
			MapLoader mapLoader;
			Map map = mapLoader.loadMap(fileName);

			cout << "\n\nName: " << map.getName() << endl;
			cout << "Creator: " << map.getCreator() << endl;
			cout << "Regions: " << map.getRegions().size() << endl;

			vector<Region> regions = map.getRegions();

			for (int i = 0; i < regions.size(); i++)
			{
				cout << "\t Id: " << regions[i].getId() << endl;
				cout << "\t Border: " << regions[i].getBorder() << endl;
				cout << "\t Lost Tribe: " << regions[i].getLostTribe() << endl;
				cout << "\t Region Type: " << regions[i].getRegionType() << endl;
				
				vector<string> regionAttributes = regions[i].getRegionAttributes();
				cout << "\t Region Attributes: [";
				for (int j = 0; j < regionAttributes.size(); j++)
				{
					cout << regionAttributes[j];
					if (j != (regionAttributes.size() - 1))
					{
						cout << ", ";
					}
				}
				cout << "]" << endl;

				vector<int> adjacentRegions = regions[i].getAdjacentRegions();
				cout << "\t AdjacentRegions: [";
				for (int j = 0; j < adjacentRegions.size(); j++)
				{
					cout << adjacentRegions[j];
					if (j != (adjacentRegions.size() - 1))
					{
						cout << ", ";
					}
				}
				cout << "]\n" << endl;
			}
		}
};