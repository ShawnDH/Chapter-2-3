//#9Crispies Bagels
//04/09/2018
//Author:ShawnD Herrick

#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

int main()
{
	double totalPrice;
	int bagelsOrdered;
	double bagel = 0.99;
	int donutsOrdered;
	double donut = 0.75;
	int coffeeOrdered;
	double coffee = 1.20;
	double tax = 1.07;

	std::cout << "WELCOME TO CRISPIE'S BAGEL AND BITES!! \n " << std::endl;
	std::cout << " ---=Menu=--- " << std::endl;
	std::cout << "Bagel --- $0.99" << std::endl;
	std::cout << "Donut --- $0.75" << std::endl;
	std::cout << "Coffee -- $1.20 \n" << std::endl;
	std::cout << "How many Bagels would you like? \n >";
	std::cin >> bagelsOrdered;
	std::cout << "How many Donuts would you like? \n >";
	std::cin >> donutsOrdered;
	std::cout << "How many cups of Coffee would you like? \n >";
	std::cin >> coffeeOrdered;

	totalPrice = (((bagelsOrdered * bagel) + (donutsOrdered * donut) + (coffeeOrdered * coffee))* tax);
	std::cout << "Your total is ----- $" << std::fixed << std::setprecision(2) << std::setfill('0') << totalPrice << std::endl;

	system("pause");
	return 0;
}