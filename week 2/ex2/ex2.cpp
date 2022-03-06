#include <iostream>
#include "Enemy_ex2.h"
#include "Global.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main()
{
	Enemy_ex2 emn1, emn2;
	char name[20];
	int NrEnemy;
	int InitHeath;
	float MoneyPerEnemy;
	cin >> name;
	cin>> NrEnemy>>InitHeath>>MoneyPerEnemy;
	emn1.Init();
	emn1.SetName(name);
	cout<<emn1.GetName();
	emn1.SetNrEnemy(NrEnemy);
	cout<<emn1.GetNrEnemy();
	emn1.SetInitHeath(InitHeath);
	cout<<emn1.GetInitHeath();
	emn1.SetMoneyPerEnemy(MoneyPerEnemy);
	cout<<emn1.GetMoneyPerEnemy();
	cout << "\n";

	cin >> name;
	cin >> NrEnemy >> InitHeath >> MoneyPerEnemy;
	emn2.Init();
	emn2.SetName(name);
	cout << emn2.GetName();
	emn2.SetNrEnemy(NrEnemy);
	cout << emn2.GetNrEnemy();
	emn2.SetInitHeath(InitHeath);
	cout << emn2.GetInitHeath();
	emn2.SetMoneyPerEnemy(MoneyPerEnemy);
	cout << emn2.GetMoneyPerEnemy();
	cout << "\n";

	cout<<ComparWavesNrEnemy(emn1, emn2);
	cout << " ";
	cout<<ComparWavesMoneyPerEnemy(emn1, emn2);
	
}

/*
	Design a C++ class that reflects the properties of an wave of  enemies. The class should include the following:
 - methods to set and get the name of the wave
 - methods to set and get the number of enemies  (must be bigger than 0)
 - methods to set and get the starting health (bigger than 0)
 - methods to set and get the money per enemy (must be a float value)
	Create 2 global functions that compare two wave in terms of: number of enemies and money per enemy.
If two waves are equal the return value of such a function will be 0. If the first wave is bigger
than the second one, the return value will be 1, otherwise -1.
	Make sure that you have the following:
a cpp file for the methods specific to the class
a header file for the global functions
a cpp file for the global functions implementation
a main.cpp file that shows how the methods and global functions can be used.
*/