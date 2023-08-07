#include "updateVector.h"

void updateVector(std::vector<std::string>& bazaVector)
{

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
}
