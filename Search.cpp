#include "Search.h"

void searchRegistrationNumber(std::string registrationNumber, bool& correct)
{
	int counter = 0;
	
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
			counter++;
			int y = x;
			if (bazaVector[y-1] == "PersonalCar")
			{
				std::cout << std::endl
					<< "MARKA:                  " << bazaVector[y - 3] << std::endl
					<< "MODEL:                  " << bazaVector[y - 2] << std::endl
					<< "RODZAJ:                 " << "Samochod osobowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[y] << std::endl
					<< "PRZEBIEG:               " << bazaVector[y + 1] << " [KM]" << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[y + 2] << std::endl
					<< "MOC SILNIKA:            " << bazaVector[y + 3] << " [KW]" << std::endl
					<< "WAGA:                   " << bazaVector[y + 4] << " [KG]" << std::endl
					<< "DANE POSIADACZA;        " << std::endl
					<< "IMIE:                   " << bazaVector[y + 5] << std::endl
					<< "NAZWISKO:               " << bazaVector[y + 6] << std::endl
					<< "NARODOWOSC:             " << bazaVector[y + 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[y + 8] << std::endl
					<< "ADRES:                  " << bazaVector[y + 9] << " " << bazaVector[y + 10] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[y + 11] << "/" << bazaVector[y + 12] << "/" << bazaVector[y + 13] << std::endl;
			}
			else if (bazaVector[y - 1] == "Truck")
			{
				std::cout << std::endl
					<< "MARKA:                  " << bazaVector[y - 3] << std::endl
					<< "MODEL:                  " << bazaVector[y - 2] << std::endl
					<< "RODZAJ:                 " << "Samochod ciezarowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[y] << std::endl
					<< "PRZEBIEG:               " << bazaVector[y+1] << " [KM]" << std::endl
					<< "CZY JEST PRZYCZEPA:     " << bazaVector[y+2] << std::endl
					<< "WAGA:                   " << bazaVector[y+3] << " [KG]" << std::endl
					<< "MAKSYMALNY UDZWIG:      " << bazaVector[y+4] << " [KG]" << std::endl
					<< "DANE POSIADACZA;" << std::endl
					<< "IMIE:                   " << bazaVector[y+5] << std::endl
					<< "NAZWISKO:               " << bazaVector[y+6] << std::endl
					<< "NARODOWOSC:             " << bazaVector[y+7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[y+8] << std::endl
					<< "ADRES:                  " << bazaVector[y+9] << " " << bazaVector[y+10] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[y+11] << "/" << bazaVector[y+12] << "/" << bazaVector[y+13] << std::endl;
			}
			else if (bazaVector[y - 1] == "MotorBike")
			{
				std::cout << std::endl
					<< "MARKA:                  " << bazaVector[y - 3] << std::endl
					<< "MODEL:                  " << bazaVector[y - 2] << std::endl
					<< "RODZAJ:                 " << "Motor" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[y] << std::endl
					<< "PRZEBIEG:               " << bazaVector[y+1] << " [KM]" << std::endl
					<< "WAGA:                   " << bazaVector[y+2] << " [KG]" << std::endl
					<< "ILOSC KOL:              " << bazaVector[y+3] << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[y+4] << std::endl
					<< "DANE POSIADACZA;" << std::endl
					<< "IMIE:                   " << bazaVector[y+5] << std::endl
					<< "NAZWISKO:               " << bazaVector[y+6] << std::endl
					<< "NARODOWOSC:             " << bazaVector[y+7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[y+8] << std::endl
					<< "ADRES:                  " << bazaVector[y+9] << " " << bazaVector[y+10] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[y+11] << "/" << bazaVector[y+12] << "/" << bazaVector[y+13] << std::endl;
			}
		}
	}
	if (counter > 0)
	{
		correct = true;
	}
	else
	{
		correct = false;
	}
}
