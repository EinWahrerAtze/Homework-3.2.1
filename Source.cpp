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
	std::cout << "Pick a number of any month of the year.\n";
	std::cout << "Enter \"0\" to quit: ";

	int answer = 0;

	while (!(std::cin >> answer) || (answer < 0 || answer > 12))
	{
		std::cin.clear();

		while (std::cin.get() != '\n');
		{
			std::system("cls");
			std::cout << "Please enter an integer value between \"1\" and \"12\" or \"0\" to exit: ";
			continue;
		}
	}

	Months variable = static_cast<Months>(answer);

	std::system("cls");
	
	switch (variable)
	{
	case January: std::cout << "It's January.\n";
		break;
	case February: std::cout << "It's February.\n";
		break;
	case March: std::cout << "It's March.\n";
		break;
	case April: std::cout << "It's April.\n";
		break;
	case May: std::cout << "It's May.\n";
		break;
	case June: std::cout << "It's June.\n";
		break;
	case July: std::cout << "It's July.\n";
		break;
	case August: std::cout << "It's August.\n";
		break;
	case September: std::cout << "It's September.\n";
		break;
	case October: std::cout << "It's October.\n";
		break;
	case November: std::cout << "It's November.\n";
		break;
	case December: std::cout << "It's December.\n";
		break;
	default: std::cout << "Bye!\n";
		break;
	}

	return 0;
}