#include "VictoryCoin.h"

VictoryCoin::VictoryCoin() {}

VictoryCoin::~VictoryCoin() {}

int VictoryCoin::getValue()
{
	return this->value;
}

void VictoryCoin::setValue(int value)
{
	this->value = value;
}

int VictoryCoin::getNumberOfCoins()
{
	return this->numberOfCoins;
}

void VictoryCoin::setNumberOfCoins(int numberOfCoins)
{
	this->numberOfCoins = numberOfCoins;
}