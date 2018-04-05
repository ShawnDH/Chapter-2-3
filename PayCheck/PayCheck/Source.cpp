//Paycheck Calculator
//04/05/2018
//Author: ShawnD Herrick


#include <iostream>


int main()
{
	double hoursWorked;
	double hourlyPay;
	double netPaid;
	netPaid = hourlyPay * hoursWorked;

	std::cout << "Please input your hourly pay \n >";
	std::cin >> hourlyPay;
	std::cout << "Please input the hours you worked \n >";
	std::cin >> hoursWorked;
	std::cout << "Your net pay is >>>" << netPaid << std::endl;


	system("Paused");
	return 0;
}