#pragma once
#include "json.hpp"
#include <fstream>
#include <iostream>
#include "Deck.h"
#include "RaceBanner.h"
#include "VictoryCoin.h"
#include "Badge.h"
#include "GamePiece.h"
#include <string>
using namespace std;
using json = nlohmann::json;

class DeckTest
{
public:
	
	///Change to toString() ??
	static void printDeckObject(string fileName)
	{
		Deck deck;
		deck = deck.loadDeck(fileName);

		cout << "\n\nName: " << deck.getName() << endl;
		cout << "Creator: " << deck.getCreator() << endl;
		cout << "Race Banners: " << deck.getRaceBanners().size() << endl;

		vector<RaceBanner> raceBanners = deck.getRaceBanners();
		for (int i = 0; i < raceBanners.size(); i++)
		{
			cout << "\t Race: " << raceBanners[i].getRace() << endl;
			cout << "\t Initial Tokens: " << raceBanners[i].getinitialTokens() << endl;
			cout << "\t Description: " << raceBanners[i].getdescription().substr(0, 20) << endl;
		}

		vector<Badge> badges = deck.getBadges();
		for (int i = 0; i < badges.size(); i++)
		{
			cout << "\t Name: " << badges[i].getName() << endl;
			cout << "\t Initial Tokens: " << badges[i].getInitialTokens() << endl;
			cout << "\t Bonus Coins: " << badges[i].getBonusCoins() << endl;
			cout << "\t Description: " << badges[i].getDescription().substr(0, 20) << endl;
		}

		vector<VictoryCoin> victoryCoins = deck.getVictoryCoins();
		for (int i = 0; i < victoryCoins.size(); i++)
		{
			cout << "\t Value: " << victoryCoins[i].getValue() << endl;
			cout << "\t Number of Coins: " << victoryCoins[i].getNumberOfCoins() << endl;
		}

		vector<GamePiece> gamePieces = deck.getGamePieces();
		for (int i = 0; i < gamePieces.size(); i++)
		{
			cout << "\t Name: " << gamePieces[i].getName() << endl;
			cout << "\t Number of Pieces: " << gamePieces[i].getNumberOfPieces() << endl;
			cout << "\t Description: " << gamePieces[i].getDescription().substr(0, 20) << endl;
		}
	}
};