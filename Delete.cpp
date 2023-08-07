#include "Delete.h"
#include "ReadBase.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

void deleteVechicleRegistrationNumber(std::string registrationNumber)
{
	int i = 0;
	std::vector <std::string> bazaVector;
	std::string text;
	std::ifstream base("baza.txt");
	
	
	if (base.is_open())
	{
		std::string wyraz;
		while (base >> wyraz)
		{
				bazaVector.push_back(wyraz);
		}
	}
	else
	{
		std::cout << "Nie udalo się otworzyc pliku..." << std::endl;
	}

	for (int x = 0; x < bazaVector.size(); x++)
	{
		
		if (bazaVector[x] == registrationNumber)
		{
			for (int i = 0; i < 17; i++)
			{
				bazaVector.erase(bazaVector.begin() + (x - 3));
			}
		}
	}
	std::ofstream baseOF("baza.txt");
	for (int x = 0; x < bazaVector.size(); x++)
	{
		baseOF << bazaVector[x] << " ";
	}
}
