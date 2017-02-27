#pragma once
#include <string> 
 class Cat
{
private:
	std::string nickName;  //кличка
	int cheerfulness; //Бодрость
	int bladderLevel;    //Уровень мочевого пузыря
	int satiety;      //Сытость
	int currentMood; //Настроение

	void setSatiety(int satiety);
	void setBladderLevel(int bladderLevel);
	void setnickName(std::string nickName);

public:
	Cat(std::string name);
	static void showIndicators(Cat animal);
	bool isDeath();
	int getCheerfulness();
	int getBladderLevel();
	int getSatiety();
	int getMood();
	std::string getnickName();

	void stroke();
	void live();
	void feed();
	void sleep();
	void toilet();

	
};