/*Lake View Hotel Bill Calculator
04/06/2018
Author: ShawnD Herrick */

#include <iostream>
#include <string>

int main()
{
	int nightsStayed;
	int perNightRate = 100;
	int roomServiceYoN;
	int oneTimePhoneYoN;
	int phoneMin;
	int roomService = 35;
	double phoneCharge = 0.25;
	double tax = 1.07;

	std::cout << "Welcome to the Lake View Hotel! \n How many nights would you like to stay? ($100 per night) \n >";
	std::cin >> nightsStayed;

	std::cout << "Would you like room service?  ($35 one time fee) \n 1.Yes  or  2.No \n > #";
	std::cin >> roomServiceYoN;
	if (roomServiceYoN == 2)
	{
		roomService = 0;
	}
	else
	{
		phoneMin = 0;
	}

	std::cout << "Would you like to use our one-time telephone? \n 1.Yes  or  2.No \n > #";
	std::cin >> oneTimePhoneYoN;
	if (oneTimePhoneYoN == 1)
	{
		std::cout << "In minuites, how long would you like to use the phone? ($0.25 per minuite or to cancel press 0) \n >";
		std::cin >> phoneMin;
	}
	else
	{
		phoneMin = 0;
	}
	std::cout << "Your total is $" << ((nightsStayed * perNightRate) + (roomServiceYoN * roomService) + 
		(phoneMin * phoneCharge)) * tax << std::endl;


	system("pause");
	return 0;
}