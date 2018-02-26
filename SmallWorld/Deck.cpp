#include "Deck.h"
#include "json.hpp"
#include <fstream>
#include <iostream>
using json = nlohmann::json;
using namespace std;

Deck::Deck() {}

Deck::~Deck() {}

Deck Deck::loadDeck(string fileName)
{
	//Open file stream and load it into a json object
	ifstream file(fileName);
	json jsonDeck;
	file >> jsonDeck;  ///ADD TRY CATCH

	//Declare Deck object
	Deck deck;

	//Set Deck's instance variables from json object
	deck.setName(jsonDeck["deckName"].get<string>());
	deck.setCreator(jsonDeck["creator"].get<string>());

	//Get game-piece arrays from json
	json raceBanners = jsonDeck["raceBanners"];
	json badges = jsonDeck["badges"];
	json victoryCoins = jsonDeck["victoryCoins"];
	json gamePieces = jsonDeck["gamePieces"];

	//Cycle through each array populate deck object
	for (int i = 0; i < raceBanners.size(); i++)
	{
		RaceBanner raceBanner;

		//RaceBanner properties
		raceBanner.setRace(raceBanners[i]["race"].get<string>());
		raceBanner.setinitialTokens(raceBanners[i]["initialTokens"].get<int>());
		raceBanner.setdescription(raceBanners[i]["description"].get<string>());

		//Add the RaceBanner to the decks's list of RaceBanners
		deck.getRaceBanners().push_back(raceBanner);
	}

	for (int i = 0; i < badges.size(); i++)
	{
		Badge badge;

		//Badge properties
		badge.setName(badges[i]["name"].get<string>());
		badge.setInitialTokens(badges[i]["initialTokens"].get<int>());
		badge.setBonusCoins(badges[i]["bonusCoins"].get<int>());
		badge.setDescription(badges[i]["description"].get<string>());

		//Add the Badge to the decks's list of Badges
		deck.getBadges().push_back(badge);
	}

	for (int i = 0; i < victoryCoins.size(); i++)
	{
		VictoryCoin victoryCoin;

		//VictoryCoin properties
		victoryCoin.setValue(victoryCoins[i]["value"].get<int>());
		victoryCoin.setNumberOfCoins(victoryCoins[i]["numberOfCoins"].get<int>());

		//Add the VictoryCoin to the decks's list of VictoryCoins
		deck.getVictoryCoins().push_back(victoryCoin);
	}

	for (int i = 0; i < gamePieces.size(); i++)
	{
		GamePiece gamePiece;

		//RaceBanner properties
		gamePiece.setName(gamePieces[i]["name"].get<string>());
		gamePiece.setNumberOfPieces(gamePieces[i]["numberOfPieces"].get<int>());
		gamePiece.setDescription(gamePieces[i]["description"].get<string>());

		//Add the RaceBanner to the decks's list of RaceBanners
		deck.getGamePieces().push_back(gamePiece);
	}
	
	return Deck();
}

string Deck::getName()
{
	return this->name;
}

void Deck::setName(string name)
{
	this->name = name;
}

string Deck::getCreator()
{
	return this->creator;
}

void Deck::setCreator(string creator)
{
	this->creator = creator;
}

vector<RaceBanner>& Deck::getRaceBanners()
{
	return this->raceBanners;
}

void Deck::setRaceBanners(vector<RaceBanner>& raceBanners)
{
	this->raceBanners = raceBanners;
}

vector<Badge>& Deck::getBadges()
{
	return this->badges;
}

void Deck::setBadges(vector<Badge>& badges)
{
	this->badges = badges;
}

vector<VictoryCoin>& Deck::getVictoryCoins()
{
	return this->victoryCoins;
}

void Deck::setVictoryTokens(vector<VictoryCoin>& victoryTokens)
{
	this->victoryCoins = victoryCoins;
}

vector<GamePiece>& Deck::getGamePieces()
{
	return this->gamePieces;
}

void Deck::setGamePieces(vector<GamePiece>& gamePieces)
{
	this->gamePieces = gamePieces;
}