#include "Badge.h"

Badge::Badge() {}

Badge::~Badge() {}

string Badge::getName()
{
	return this->name;
}

void Badge::setName(string name)
{
	this->name = name;
}

string Badge::getDescription()
{
	return this->description;
}

void Badge::setDescription(string description)
{
	this->description = description;
}

string Badge::getRace()
{
	return this->race;
}

void Badge::setRace(string race)
{
	this->race = race;
}

int Badge::getInitialTokens()
{
	return this->initialTokens;
;
}

void Badge::setInitialTokens(int initialTokens)
{
	this->initialTokens = initialTokens;
}

int Badge::getBonusCoins()
{
	return this->bonusCoins;
}

void Badge::setBonusCoins(int bonusCoins)
{
	this->bonusCoins = bonusCoins;
}