#include "Render.h"
#include <iostream>
#include "Cat.h"
#include <Windows.h>
#include <conio.h>

using namespace std;

	void Render::menu()
	{
		std::cout << "\n\n\n1 чтобы Покормить\n";
		std::cout << "2 чтобы Сходить в туалет\n";
		std::cout << "3 чтобы Погладить\n";
		std::cout << "4 чтобы Поспать\n";
	}



	void Render::start(Cat animal)
	{
		while (1)
		{
			animal.live();
			Cat::showIndicators(animal);
			if (animal.isDeath())
			{
				system("cls");
				std::cout << animal.getnickName() << " УМЕРЛА! ТЫ ПЛОХОЙ ХОЗЯИН!\n";
				break;
			}
			menu();

			if (kbhit())
			{
				int choose = 0;

				std::cin >> choose;

				switch (choose)
				{
				case 1: animal.feed();
					break;
				case 2: animal.toilet();
					break;
				case 3: animal.stroke();
					break;
				case 4: animal.sleep();
					break;
				default: std::cout << "Неверный ввод";
					

				}
			}
			Sleep(1200);
			system("cls");

		}
	}
	

