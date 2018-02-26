#include <vector>
#include <string>
#include "Region.h"
#include "Map.h"
using namespace std;

Map::Map() {}

Map::~Map() {}

vector<Region>& Map::getRegions()
{
	return regions;
}

void Map::setRegions(vector<Region>& regions)
{
	this->regions = regions;
}

string Map::getName()
{
	return name;
}

void Map::setName(string name)
{
	this->name = name;
}

string Map::getCreator()
{
	return creator;
}

void Map::setCreator(string creator)
{
	this->creator = creator;
}