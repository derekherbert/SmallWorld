#include <iostream>
#include <string>
#include "MapLoader.h"
#include "Map.h"
#include "MapLoaderTest.h"
#include "ReinforcementsDieTest.h"
#include "DeckTest.h"
#include "PlayerTest.h"
using namespace std;

void playerTest()
{
	PlayerTest::printPlayerObject();
}

void testDeck()
{
	DeckTest::printDeckObject("decks/default.deck");
}

void testReinforcementsDie()
{
	ReinforcementsDieTest::rollDie(100);
}

void testMapLoader()
{
	//MapLoaderTest::printMapFile("maps/2Player.map");
	MapLoaderTest::printMapObject("maps/2Player.map");
}

/*
	Driver method for all tests. Each class has its own test method which 
	is called here. Toggle on/off by commenting (for now). 
*/
void runTests()
{
	//testMapLoader();
	//testReinforcementsDie();
	//testDeck();
	playerTest();
}

int main()
{
	runTests(); //Run test cases. Toggle on/off with comments

	return 0;
}