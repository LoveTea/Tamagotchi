#include <iostream>
#include <conio.h>
#include <string>
#include "Cat.h"
#include "Render.h"


int main() {
	setlocale(LC_ALL,"Russian");
	
	std::string name;
	std::cout << "Как зовут вашу кошку?\n";
	std::cin >> name;

	Cat murka(name);
	Render render;
	render.start(murka);
	
}
