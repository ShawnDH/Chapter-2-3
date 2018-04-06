/* Eggs
04/06/2018
Author: ShawnD Herrick*/

#include <iostream>

int main()
{
	int eggsWanted;
	int dozenEggs;
	int eggsRemained;

	std::cout << "Hi, welcome to Egg-Mart. A dozen eggs is $2.00 each and any remaining eggs are $0.25 each.";
	std::cout << "\n How many eggs would you like? \n >";
	std::cin >> eggsWanted;

	dozenEggs = eggsWanted / 12;
	eggsRemained = eggsWanted % 12;

	std::cout << "Your total is bought " << dozenEggs << " dozen eggs and " << eggsRemained << 
		" leftover. \n Your total is $" << (dozenEggs * 2.00) + (eggsRemained * 0.25) << std::endl;

	system("pause");
	return 0;
}