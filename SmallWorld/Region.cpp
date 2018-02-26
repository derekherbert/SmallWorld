#include <string>
#include <vector>
#include "RegionType.h"
#include "RegionAttribute.h"
#include "Region.h"
using namespace std;

Region::Region()
{
}

Region::Region(int id, bool border, bool lostTribe, string regionType,
	vector<string>& regionAttributes, vector<int>& adjacentRegions)
{
	this->id = id;
	this->border = border;
	this->lostTribe = lostTribe;
	this->regionType = regionType;
	this->regionAttributes = regionAttributes;
	this->adjacentRegions = adjacentRegions;
}

Region::~Region()
{
}

int Region::getId()
{
	return id;
}

void Region::setId(int id)
{
	this->id = id;
}

bool Region::getBorder()
{
	return border;
}

void Region::setBorder(bool border)
{
	this->border = border;
}

bool Region::getLostTribe()
{
	return lostTribe;
}

void Region::setLostTribe(bool lostTribe)
{
	this->lostTribe = lostTribe;
}

string Region::getRegionType()
{
	return regionType;
}

void Region::setRegionType(string regionType)
{
	this->regionType = regionType;
}

vector<string>& Region::getRegionAttributes()
{
	return Region::regionAttributes;
}

vector<int>& Region::getAdjacentRegions()
{
	return adjacentRegions;
}