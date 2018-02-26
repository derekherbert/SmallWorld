#pragma once
#include <vector>
#include <string>
#include "RaceBanner.h"
#include "VictoryCoin.h"
#include "Badge.h"
#include "GamePiece.h"
#include <string>
using namespace std;

class Deck
{
	string name;
	string creator;
	vector<RaceBanner> raceBanners;
	vector<Badge> badges;
	vector<VictoryCoin> victoryCoins;
	vector<GamePiece> gamePieces;

	public:
		Deck();
		~Deck();
		Deck loadDeck(string fileName);
		string getName();
		void setName(string name);
		string getCreator();
		void setCreator(string creator);
		vector<RaceBanner>& getRaceBanners();
		void setRaceBanners(vector<RaceBanner>& raceBanners);
		vector<Badge>& getBadges();
		void setBadges(vector<Badge>& badges);
		vector<VictoryCoin>& getVictoryCoins();
		void setVictoryTokens(vector<VictoryCoin>& victoryTokens);
		vector<GamePiece>& getGamePieces();
		void setGamePieces(vector<GamePiece>& gamePieces);
};