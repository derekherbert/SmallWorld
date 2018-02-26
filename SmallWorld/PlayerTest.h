#pragma once
#include <iostream>
#include "RaceBanner.h"
#include "VictoryCoin.h"
#include "Badge.h"
#include "GamePiece.h"
#include <string>
#include "Player.h"
using namespace std;

class PlayerTest
{
public:
	
	static void printPlayerObject()
	{
		Player player;
		player.setDie(ReinforcementsDie());
		player.setSummarySheet("Summary sheet contents...");
		
		RaceBanner raceBanner;
		raceBanner.setRace("Amazons");
		raceBanner.setinitialTokens(5);
		player.setRaceBanner(raceBanner);

		Badge badge;
		badge.setName("Alchemist");
		badge.setInitialTokens(4);
		badge.setBonusCoins(2);
		player.setBadge(badge);

		Region region;
		region.setId(1);
		region.setLostTribe(true);
		region.setRegionType("FOREST");
		player.getRegions().push_back(region);

		cout << "\n\nDie Roll: " << player.getDie().rollDie() << endl;
		cout << "Race Banner: " << endl;
		cout << "\tRace: " << player.getRaceBanner().getRace() << endl;
		cout << "\\t Initial Tokens: " << player.getRaceBanner().getinitialTokens() << endl;

		cout << "Badge: " << endl;
		cout << "\tName: " << player.getBadge().getName() << endl;
		cout << "\\tBonus Coins: " << player.getBadge().getBonusCoins() << endl;

		cout << "Regions: " << endl;
		cout << "\tId: " << player.getRegions()[0].getId() << endl;
		cout << "\tType: " << player.getRegions()[0].getRegionType() << endl;
	}
};