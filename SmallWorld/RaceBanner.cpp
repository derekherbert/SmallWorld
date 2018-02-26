#include "RaceBanner.h"

RaceBanner::RaceBanner() {}

RaceBanner::~RaceBanner() {}

string RaceBanner::getRace()
{
	return this->race;
}

void RaceBanner::setRace(string race)
{
	this->race = race;
}

int RaceBanner::getinitialTokens()
{
	return this->initialTokens;
}

void RaceBanner::setinitialTokens(int initialTokens)
{
	this->initialTokens = initialTokens;
}

string RaceBanner::getdescription()
{
	return this->description;
}

void RaceBanner::setdescription(string description)
{
	this->description = description;
}

bool RaceBanner::getState()
{
	return this->state;
}

void RaceBanner::setState(bool state)
{
	this->state = state;
}