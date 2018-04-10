//#10Cartwright Industries
//04/09/2018
//Author:ShawnD Herrick

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	double netPay;
	int grossPay;
	double ftw = .2;
	double fica = .08;
	double incomeTax = .04;
	int randomNumber = rand();

	srand((unsigned)time(0));
	randomNumber = (rand() % 100) + 1;

	std::cout << "Please input employee #" << randomNumber << "'s weekly gross pay \n >$";
	std::cin >> grossPay;

	netPay = (grossPay - ((grossPay * ftw) + (grossPay * fica) + (grossPay * incomeTax)));
	std::cout << "Emplyee #" << randomNumber << "'s weekly net pay is $" << netPay << "." << std::endl;

	system("pause");
	return 0;
}