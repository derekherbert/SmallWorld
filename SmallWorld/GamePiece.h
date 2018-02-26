#pragma once
#include <string>
using namespace std;

class GamePiece
{
	string name;
	string description;
	int numberOfPieces;
	//Image icon;  //Maybe implement later

	public:
		GamePiece();
		~GamePiece();
		string getName();
		void setName(string name);
		string getDescription();
		void setDescription(string description);
		int getNumberOfPieces();
		void setNumberOfPieces(int numberOfPieces);
};