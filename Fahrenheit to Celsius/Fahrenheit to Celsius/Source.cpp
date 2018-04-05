//Fahrenheit to Celsius Conversion
//04/05/2018
//Author: ShawnD Herrick

#include <iostream>

int main()
{
	double degreesF1;
	double degreesF2;
	double degreesF3;
	double f_to_C1;
	double f_to_C2;
	double f_to_C3;

	std::cout << "Insert the number of degrees Fahrenheit at 8am \n >";
	std::cin >> degreesF1;
	std::cout << "Insert the number of degrees Fahrenheit at 12pm \n >";
	std::cin >> degreesF2;
	std::cout << "Insert the number of degrees Fahrenheit at 5pm \n >";
	std::cin >> degreesF3;

	f_to_C1 = (degreesF1 - 32) * .55;
	f_to_C2 = (degreesF2 - 32) * .55;
	f_to_C3 = (degreesF3 - 32) * .55;

	std::cout << degreesF1 << " degrees Fahrenheit at 8am is equal to " << f_to_C1 << " degrees Celcius." << std::endl;
	std::cout << degreesF2 << " degrees Fahrenheit at 12pm is equal to " << f_to_C2 << " degrees Celcius." << std::endl;
	std::cout << degreesF3 << " degrees Fahrenheit at 5pm is equal to " << f_to_C3 << " degrees Celcius." << std::endl;

	system("Pause");
	return 0;
}