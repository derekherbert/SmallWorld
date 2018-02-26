#pragma once
class VictoryCoin
{
	int value;
	int numberOfCoins;
	//Image icon;  //Maybe implement this later

	public:
		VictoryCoin();
		~VictoryCoin();
		int getValue();
		void setValue(int value);
		int getNumberOfCoins();
		void setNumberOfCoins(int numberOfCoins);
};

