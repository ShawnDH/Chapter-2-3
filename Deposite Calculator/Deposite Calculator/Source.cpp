//#8 Sharon's Deposite Calculator
//04/09/2018
//Author:ShawnD Herrick

#include <iostream>

int main()
{
	int grossPay;
	int bonusCheck = 100;
	int totalDeposited;

	std::cout << "Please enter your gross pay for the year \n >$";
	std::cin >> grossPay;

	totalDeposited = (grossPay * .1) + bonusCheck;

	std::cout << "By depositing 10% of your gross pay each year, your \n total deposited this year is $" << totalDeposited << "." << std::endl;

	system("pause");
	return 0;
}