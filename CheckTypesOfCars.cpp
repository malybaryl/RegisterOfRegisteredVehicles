#include "CheckTypesOfCars.h"
#include <vector>
#include <fstream>

void checkTypesOfCars(std::string marka, std::string model, std::string type, bool& WasType, std::string& firstInf, std::string& secondInf, std::string& thirdInf)
{
	std::vector <std::string> typesOfCarVector;
	std::string text;
	std::ifstream typesOfCar("rodzaje_pojazdow.txt");
	int i = 0;
	if (typesOfCar.is_open())
	{
		std::string wyraz;
		while (typesOfCar >> wyraz)
		{
			typesOfCarVector.push_back(wyraz);
		}
	}
	else
	{
		std::cout << "Nie udalo się otworzyc pliku..." << std::endl;
	}

	for (int x = 0; x < typesOfCarVector.size(); x++)
	{
		if (typesOfCarVector[x] == type && typesOfCarVector[x-1] == model && typesOfCarVector[x - 2] == marka)
		{
			i++;
			firstInf = typesOfCarVector[x + 1];
			secondInf = typesOfCarVector[x + 2];
			thirdInf = typesOfCarVector[x + 3];
		}
	}
	if (i > 0)
	{
		WasType = true;
	}
	else
	{
		WasType = false;
	}
}
