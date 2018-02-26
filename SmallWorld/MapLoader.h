#pragma once
#include <string>
#include "Map.h"
class MapLoader
{
	public:
		MapLoader();
		~MapLoader();
		Map loadMap(string fileName);
};

