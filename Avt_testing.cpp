// Avt_testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Header.h"

int main()
{
	int wei, hei;
	std::string bre, at;

	/*std::cout << "Enter the weight of animal you have. \n";
	std::cin >> wei;
	std::cout << "Enter the height of animal you have. \n";
	std::cin >> hei;
	std::cout << "Enter the bread of animal you have. \n";
	std::cin >> bre;*/

	MyClass pet[3];
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter the weight of animal you have. \n";
		std::cin >> wei;
		std::cout << "Enter the height of animal you have. \n";
		std::cin >> hei;
		std::cout << "Enter the bread of animal you have. \n";
		std::cin >> bre;
		std::cout << "Enter the sex of your animal. \n";
		std::cin >> at;
		pet[i].info(wei, hei, bre);
		pet[i].action(at);

	}

	for (int i = 0; i < 3; i++) {
		pet[i].print();
	}
	/*std::cout << "Enter the sex of your animal m/f. \n";
	std::cin >> at;
	pet[1].action(at);
	//MyClass pet2;
	pet[2].info(54, 67,"lion");*/

}

