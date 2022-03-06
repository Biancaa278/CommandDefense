#define _CRT_SECURE_NO_WARNINGS

#include "Enemy_ex2.h"
#include <cstring>



void Enemy_ex2::Init()
{
	name[0] = '\0';
	NrEnemy=0;
	InitHeath=0;
	MoneyPerEnemy=0;
}

void Enemy_ex2::SetName(char* name)
{
	strcpy(this->name, name);
}

char* Enemy_ex2::GetName()
{
	return this->name;
}

void Enemy_ex2::SetNrEnemy(int NrEnemy)
{
	if (NrEnemy > 0)
	    this->NrEnemy = NrEnemy;
}

int Enemy_ex2::GetNrEnemy()
{
	return this->NrEnemy;
}

void Enemy_ex2::SetInitHeath(int InitHeath)
{
	if (InitHeath > 0)
	     this->InitHeath = InitHeath;
}

int Enemy_ex2::GetInitHeath()
{
	return this->InitHeath;
}

void Enemy_ex2::SetMoneyPerEnemy(float MoneyPerEnemy)
{
	this->MoneyPerEnemy = MoneyPerEnemy;
}

float Enemy_ex2::GetMoneyPerEnemy()
{
	return this->MoneyPerEnemy;
}
