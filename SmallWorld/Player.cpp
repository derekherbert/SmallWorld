#include "Player.h"

Player::Player()
{
}


Player::~Player()
{
}

vector<Region>& Player::getRegions()
{
	return this->regions;
}

void Player::setRegions(vector<Region>& regions)
{
	this->regions = regions;
}

ReinforcementsDie Player::getDie()
{
	return this->die;
}

void Player::setDie(ReinforcementsDie die)
{
	this->die = die;
}

string Player::getSummarySheet()
{
	return this->summarySheet;
}

void Player::setSummarySheet(string summarySheet)
{
	this->summarySheet = summarySheet;
}

RaceBanner Player::getRaceBanner()
{
	return this->raceBanner;
}

void Player::setRaceBanner(RaceBanner raceBanner)
{
	this->raceBanner = raceBanner;
}

vector<VictoryCoin>& Player::getVictoryCoins()
{
	return this->victoryCoins;
}

void Player::setVictoryCoins(vector<VictoryCoin>& victoryCoins)
{
	this->victoryCoins = victoryCoins;
}

Badge Player::getBadge()
{
	return this->badge;
}

void Player::setBadge(Badge badge)
{
	this->badge = badge;
}

vector<GamePiece>& Player::getGamePieces()
{
	return this->gamePieces;
}

void Player::setGamePieces(vector<GamePiece>& gamePieces)
{
	this->gamePieces = gamePieces;
}

void Player::picksRace()
{
	//Implementation to come 
}

bool Player::conquers()
{
	//Implementation to come 
	return false;
}

void Player::scores()
{
	//Implementation to come 
}
