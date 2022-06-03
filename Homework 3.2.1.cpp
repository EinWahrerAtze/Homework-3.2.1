#include <iostream>

enum Months
{
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

int main()
{
	std::cout << "Enter number of a month of the year. Enter \"0\" to quit: ";
	
	int answer = 0;

	while (!(std::cin >> answer) || !(answer >= 0) || !(answer <= 12))
	{
		std::cin.clear();
		
		while (std::cin.get() != '\n');
		{
			std::system("cls");
			std::cout << "Please enter an integer value between \"1\" and \"12\" or \"0\" to exit: \n";
			continue;
		}

	Months variable = static_cast<Months>(answer);

	switch (variable)
	{
	case January: std::cout << "January\n";
		break;
	case February: std::cout << "February\n";
		break;
	case March: std::cout << "March\n";
		break;
	case April: std::cout << "April\n";
		break;
	case May: std::cout << "May\n";
		break;
	case June: std::cout << "June\n";
		break;
	case July: std::cout << "July\n";
		break;
	case August: std::cout << "August\n";
		break;
	case September: std::cout << "September\n";
		break;
	case October: std::cout << "October\n";
		break;
	case November: std::cout << "November\n";
		break;
	case December: std::cout << "December\n";
		break;
	default:
		break;
	}

	return 0;
}