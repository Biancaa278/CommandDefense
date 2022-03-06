#include "Global.h"

int ComparWavesNrEnemy(Enemy_ex2 wave1, Enemy_ex2 wave2)
{
	if (wave1.GetNrEnemy() < wave2.GetNrEnemy())
		return -1;
	if (wave1.GetNrEnemy() > wave2.GetNrEnemy())
		return 1;
	return 0;
}

int ComparWavesMoneyPerEnemy(Enemy_ex2 wave1, Enemy_ex2 wave2)
{
	if (wave1.GetMoneyPerEnemy() < wave2.GetMoneyPerEnemy())
		return -1;
	if (wave1.GetMoneyPerEnemy() > wave2.GetMoneyPerEnemy())
		return 1;
	return 0;
}
