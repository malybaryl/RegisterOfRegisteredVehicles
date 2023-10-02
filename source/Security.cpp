#include "Security.h"

void cinInt(int& variable)
{
	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n');
		std::cin >> variable;
	}
}
