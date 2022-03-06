#pragma once
class Enemy_ex2
{
private:
	char name[20];
	int NrEnemy;
	int InitHeath;
	float MoneyPerEnemy;
public:
	void Init();
	void SetName(char* name);
	char* GetName();
	void SetNrEnemy(int NrEnemy);
	int GetNrEnemy();
	void SetInitHeath(int InitHeath);
	int GetInitHeath();
	void SetMoneyPerEnemy(float MoneyPerEnemy);
	float GetMoneyPerEnemy();
};

