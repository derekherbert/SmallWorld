#pragma once
#include <vector>
#include "Region.h"
#include "ReinforcementsDie.h"
#include "RaceBanner.h"
#include "VictoryCoin.h"
#include "Badge.h"
#include "GamePiece.h"
using namespace std;

class Player
{
	vector<Region> regions;
	ReinforcementsDie die;
	string summarySheet;
	RaceBanner raceBanner;
	vector<VictoryCoin> victoryCoins;
	Badge badge;
	vector<GamePiece> gamePieces;

	public:
		Player();
		~Player();
		vector<Region>& getRegions();
		void setRegions(vector<Region>& regions);
		ReinforcementsDie getDie();
		void setDie(ReinforcementsDie die);
		string getSummarySheet();
		void setSummarySheet(string summarySheet);
		RaceBanner getRaceBanner();
		void setRaceBanner(RaceBanner raceBanner);
		vector<VictoryCoin>& getVictoryCoins();
		void setVictoryCoins(vector<VictoryCoin>& victoryCoins);
		Badge getBadge();
		void setBadge(Badge badge);
		vector<GamePiece>& getGamePieces();
		void setGamePieces(vector<GamePiece>& gamePieces);
		void picksRace();
		bool conquers();
		void scores();
};

