#include "GamePiece.h"

GamePiece::GamePiece() {}

GamePiece::~GamePiece() {}

string GamePiece::getName()
{
	return this->name;
}

void GamePiece::setName(string name)
{
	this->name = name;
}

string GamePiece::getDescription()
{
	return this->description;
}

void GamePiece::setDescription(string description)
{
	this->description = description;
}

int GamePiece::getNumberOfPieces()
{
	return this->numberOfPieces;
}

void GamePiece::setNumberOfPieces(int numberOfPieces)
{
	this->numberOfPieces = numberOfPieces;
}