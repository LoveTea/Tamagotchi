#include "Cat.h"
#include <iostream>
#include <Windows.h>

Cat::Cat(std::string name)
{
	nickName = name;
	currentMood = 100;
	satiety = 100;
	bladderLevel = 0;
	cheerfulness = 100;
}



int Cat::getMood()
{
	return currentMood;
}



std::string Cat::getnickName()
{
	return nickName;
}

void Cat::setnickName(std::string nickName)
{
	this->nickName = nickName;
}

void Cat::setSatiety(int satiety)
{
	this->satiety += satiety;
}

void Cat::feed()
{
	setSatiety(5);	
}

void Cat::sleep()
{
	cheerfulness += 5;	
}

int  Cat::getBladderLevel()
{
	return bladderLevel;
}

void Cat::setBladderLevel(int bladderLevel)
{
	this->bladderLevel = bladderLevel;
}

void Cat::toilet()
{
	setBladderLevel(0);
}



void Cat::stroke()
{
	currentMood += 5;
}

void Cat::live()
{	
	bladderLevel += 1;
	cheerfulness -= 1;
	satiety -= 1;
	currentMood -= 1;

	if (satiety > 100)
	{
		satiety = 100;
	}
	if (bladderLevel > 100)
	{
		bladderLevel = 100;
	}
	if (cheerfulness > 100)
	{
		cheerfulness = 100;
	}
	if (currentMood > 100)
	{
		currentMood = 100;
	}

	if (satiety < 0)
	{
		satiety = 0;
	}
	if (bladderLevel < 0)
	{
		bladderLevel = 0;
	}
	if (cheerfulness < 0)
	{
		cheerfulness = 0;
	}
	if (currentMood < 0)
	{
		currentMood = 0;
	}

}

int Cat::getCheerfulness()
{
	return cheerfulness;
}

int Cat::getSatiety()
{
	return satiety;
}

 void Cat::showIndicators(Cat animal)
{
	 std::cout << "Кличка: " << animal.getnickName() << std::endl << std::endl;
	 std::cout << "Уровень мочевого пузыря: " << animal.getBladderLevel() << std::endl;
	 std::cout << "Уровень бодрости: " << animal.getCheerfulness() << std::endl;
	 std::cout << "Уровень сытости: " << animal.getSatiety() << std::endl;
	 std::cout << "Уровень настроения: " << animal.getMood() << std::endl;	 
	 
}

 bool Cat::isDeath()
 {
	 if (currentMood == 0) return true;
	 if (cheerfulness == 0) return true;
	 if (satiety == 0) return true;
	 if (bladderLevel == 100) return true;
 }






