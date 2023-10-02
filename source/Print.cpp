#include "Print.h"
#include "Vechicle.h"
#include "PersonalCar.h"
#include "Truck.h"
#include "Motorbike.h"
#include <iostream>
#include <fstream>
#include <vector>

void printAllBase(std::vector <std::string> bazaVector)
{
	std::ofstream wydruk("wydruk.txt");
	if (wydruk)
	{
		for (int x = 0; x < bazaVector.size(); x++)
		{
			Vechicle* wsk = NULL;
			if (bazaVector[x] == "PersonalCar")
			{
				int a = std::stoi(bazaVector[x + 3]);
				int b = std::stoi(bazaVector[x + 4]);
				int c = std::stoi(bazaVector[x + 5]);
				int d = std::stoi(bazaVector[x + 2]);
				int e = std::stoi(bazaVector[x + 12]);
				int f = std::stoi(bazaVector[x + 13]);
				int g = std::stoi(bazaVector[x + 14]);
				int h = std::stoi(bazaVector[x + 15]);

				wsk = new PersonalCar(bazaVector[x - 1], bazaVector[x - 2], a, b, c, bazaVector[x], bazaVector[x + 1], d, bazaVector[x + 6], bazaVector[x + 7], bazaVector[x + 8], bazaVector[x + 9], bazaVector[x + 10], bazaVector[x + 11], e, f, g, h);
			}
			else if (bazaVector[x] == "Truck")
			{
				int b = std::stoi(bazaVector[x + 4]);
				int c = std::stoi(bazaVector[x + 5]);
				int d = std::stoi(bazaVector[x + 2]);
				int e = std::stoi(bazaVector[x + 12]);
				int f = std::stoi(bazaVector[x + 13]);
				int g = std::stoi(bazaVector[x + 14]);
				int h = std::stoi(bazaVector[x + 15]);

				wsk = new Truck(bazaVector[x - 1], bazaVector[x - 2], bazaVector[x + 3], b, c, bazaVector[x], bazaVector[x + 1], d, bazaVector[x + 6], bazaVector[x + 7], bazaVector[x + 8], bazaVector[x + 9], bazaVector[x + 10], bazaVector[x + 11], e, f, g, h);
			}
			else if (bazaVector[x] == "MotorBike")
			{
				int a = std::stoi(bazaVector[x + 3]);
				int b = std::stoi(bazaVector[x + 4]);
				int c = std::stoi(bazaVector[x + 5]);
				int d = std::stoi(bazaVector[x + 2]);
				int e = std::stoi(bazaVector[x + 12]);
				int f = std::stoi(bazaVector[x + 13]);
				int g = std::stoi(bazaVector[x + 14]);
				int h = std::stoi(bazaVector[x + 15]);

				wsk = new Motorbike(bazaVector[x - 1], bazaVector[x - 2], a, b, c, bazaVector[x], bazaVector[x + 1], d, bazaVector[x + 6], bazaVector[x + 7], bazaVector[x + 8], bazaVector[x + 9], bazaVector[x + 10], bazaVector[x + 11], e, f, g, h);
			}
			if (wsk != NULL)
			{
				wsk->printToBase();
				delete wsk;
			}
		}
	}
	else
	{
		std::cout << std::endl << "nie udalo sie znalezc pliku... \"wydruk.txt\"" << std::endl;
	}

}

void printRegistrationNumber(std::string registrationNumber)
{
	std::ofstream wydruk("wydruk.txt");
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
			if (bazaVector[x-1] == "PersonalCar")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 3] << std::endl
					<< "MODEL:                  " << bazaVector[x - 2] << std::endl
					<< "RODZAJ:                 " << "Samochod osobowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x ] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x + 1] << " [KM]" << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[x + 2] << std::endl
					<< "MOC SILNIKA:            " << bazaVector[x + 3] << " [KW]" << std::endl
					<< "WAGA:                   " << bazaVector[x + 4] << " [KG]" << std::endl
					<< "DANE POSIADACZA;        " << std::endl
					<< "IMIE:                   " << bazaVector[x + 5] << std::endl
					<< "NAZWISKO:               " << bazaVector[x + 6] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x + 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x + 8] << std::endl
					<< "ADRES:                  " << bazaVector[x + 9] << " " << bazaVector[x + 10] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x + 11] << "/" << bazaVector[x + 12] << "/" << bazaVector[x + 13] << std::endl;
			}
			else if (bazaVector[x-1] == "Truck")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 3] << std::endl
					<< "MODEL:                  " << bazaVector[x - 2] << std::endl
					<< "RODZAJ:                 " << "Samochod ciezarowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x ] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x + 1] << " [KM]" << std::endl
					<< "CZY JEST PRZYCZEPA:     " << bazaVector[x + 2] << std::endl
					<< "WAGA:                   " << bazaVector[x + 3] << " [KG]" << std::endl
					<< "MAKSYMALNY UDZWIG:      " << bazaVector[x + 4] << " [KG]" << std::endl
					<< "DANE POSIADACZA;" << std::endl
					<< "IMIE:                   " << bazaVector[x + 5] << std::endl
					<< "NAZWISKO:               " << bazaVector[x + 6] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x + 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x + 8] << std::endl
					<< "ADRES:                  " << bazaVector[x + 9] << " " << bazaVector[x + 10] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x + 11] << "/" << bazaVector[x + 12] << "/" << bazaVector[x + 13] << std::endl;
			}
			else if (bazaVector[x-1] == "MotorBike")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 3] << std::endl
					<< "MODEL:                  " << bazaVector[x - 2] << std::endl
					<< "RODZAJ:                 " << "Motor" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x ] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x + 1] << " [KM]" << std::endl
					<< "WAGA:                   " << bazaVector[x + 2] << " [KG]" << std::endl
					<< "ILOSC KOL:              " << bazaVector[x + 3] << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[x + 4] << std::endl
					<< "DANE POSIADACZA;" << std::endl
					<< "IMIE:                   " << bazaVector[x + 5] << std::endl
					<< "NAZWISKO:               " << bazaVector[x + 6] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x + 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x + 8] << std::endl
					<< "ADRES:                  " << bazaVector[x + 9] << " " << bazaVector[x + 10] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x + 11] << "/" << bazaVector[x + 12] << "/" << bazaVector[x + 13] << std::endl;
			}
		}
	}
		std::cout << "DANE ZOSTALY WYDRUKOWANE" << std::endl << std::endl;
}

void printTypeOfCar(int type)
{
	std::ofstream wydruk("wydruk.txt");
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

	if (type == 1)
	{
		for (int x = 0; x < bazaVector.size(); x++)
		{
			if (bazaVector[x] == "PersonalCar")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 2] << std::endl
					<< "MODEL:                  " << bazaVector[x - 1] << std::endl
					<< "RODZAJ:                 " << "Samochod osobowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x + 1] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x + 2] << " [KM]" << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[x + 3] << std::endl
					<< "MOC SILNIKA:            " << bazaVector[x + 4] << " [KW]" << std::endl
					<< "WAGA:                   " << bazaVector[x + 5] << " [KG]" << std::endl
					<< "DANE POSIADACZA;        " << std::endl
					<< "IMIE:                   " << bazaVector[x + 6] << std::endl
					<< "NAZWISKO:               " << bazaVector[x + 7] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x + 8] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x + 9] << std::endl
					<< "ADRES:                  " << bazaVector[x + 10] << " " << bazaVector[x + 11] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x + 12] << "/" << bazaVector[x + 13] << "/" << bazaVector[x + 14] << std::endl;
			}
		}
	}

	if (type == 2)
	{
		for (int x = 0; x < bazaVector.size(); x++)
		{
			if (bazaVector[x] == "Truck")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 2] << std::endl
					<< "MODEL:                  " << bazaVector[x - 1] << std::endl
					<< "RODZAJ:                 " << "Samochod ciezarowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x + 1] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x + 2] << " [KM]" << std::endl
					<< "CZY JEST PRZYCZEPA:     " << bazaVector[x + 3] << std::endl
					<< "WAGA:                   " << bazaVector[x + 4] << " [KG]" << std::endl
					<< "MAKSYMALNY UDZWIG:      " << bazaVector[x + 5] << " [KG]" << std::endl
					<< "DANE POSIADACZA;" << std::endl
					<< "IMIE:                   " << bazaVector[x + 6] << std::endl
					<< "NAZWISKO:               " << bazaVector[x + 7] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x + 8] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x + 9] << std::endl
					<< "ADRES:                  " << bazaVector[x + 10] << " " << bazaVector[x + 11] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x + 12] << "/" << bazaVector[x + 13] << "/" << bazaVector[x + 14] << std::endl;
			}
		}
	}

	if (type == 3)
	{
		for (int x = 0; x < bazaVector.size(); x++)
		{
			if (bazaVector[x] == "MotorBike")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 2] << std::endl
					<< "MODEL:                  " << bazaVector[x - 1] << std::endl
					<< "RODZAJ:                 " << "Motor" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x + 1] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x + 2] << " [KM]" << std::endl
					<< "WAGA:                   " << bazaVector[x + 3] << " [KG]" << std::endl
					<< "ILOSC KOL:              " << bazaVector[x + 4] << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[x + 5] << std::endl
					<< "DANE POSIADACZA;" << std::endl
					<< "IMIE:                   " << bazaVector[x + 6] << std::endl
					<< "NAZWISKO:               " << bazaVector[x + 7] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x + 8] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x + 9] << std::endl
					<< "ADRES:                  " << bazaVector[x + 10] << " " << bazaVector[x + 11] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x + 12] << "/" << bazaVector[x + 13] << "/" << bazaVector[x + 14] << std::endl;
			}
		}
	}
	std::cout << "DANE ZOSTALY WYDRUKOWANE" << std::endl << std::endl;
}

void printUserCars(std::string IDNumber, std::vector<std::string> bazaVector)
{
	std::ofstream wydruk("wydruk.txt");

	for (int x = 0; x < bazaVector.size(); x++)
	{
		if (bazaVector[x] == IDNumber)
		{
			if (bazaVector[x - 15] == "PersonalCar")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 17] << std::endl
					<< "MODEL:                  " << bazaVector[x - 16] << std::endl
					<< "RODZAJ:                 " << "Samochod osobowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x - 14] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x - 13] << " [KM]" << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[x - 12] << std::endl
					<< "MOC SILNIKA:            " << bazaVector[x - 11] << " [KW]" << std::endl
					<< "WAGA:                   " << bazaVector[x - 10] << " [KG]" << std::endl
					<< "DANE POSIADACZA;        " << std::endl
					<< "IMIE:                   " << bazaVector[x - 9] << std::endl
					<< "NAZWISKO:               " << bazaVector[x - 8] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x - 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x - 6] << std::endl
					<< "ADRES:                  " << bazaVector[x - 5] << " " << bazaVector[x - 4] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x - 3] << "/" << bazaVector[x - 2] << "/" << bazaVector[x - 1] << std::endl
					<< "PESEL:                  " << bazaVector[x] << std::endl;
			}
			else if (bazaVector[x - 15] == "Truck")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 17] << std::endl
					<< "MODEL:                  " << bazaVector[x - 16] << std::endl
					<< "RODZAJ:                 " << "Samochod ciezarowy" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x - 14] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x - 13] << " [KM]" << std::endl
					<< "CZY JEST PRZYCZEPA:     " << bazaVector[x - 12] << std::endl
					<< "WAGA:                   " << bazaVector[x - 11] << " [KG]" << std::endl
					<< "MAKSYMALNY UDZWIG:      " << bazaVector[x - 10] << " [KG]" << std::endl
					<< "DANE POSIADACZA;        " << std::endl
					<< "IMIE:                   " << bazaVector[x - 9] << std::endl
					<< "NAZWISKO:               " << bazaVector[x - 8] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x - 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x - 6] << std::endl
					<< "ADRES:                  " << bazaVector[x - 5] << " " << bazaVector[x - 4] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x - 3] << "/" << bazaVector[x - 2] << "/" << bazaVector[x - 1] << std::endl
					<< "PESEL:                  " << bazaVector[x] << std::endl;
			}
			else if (bazaVector[x - 15] == "MotorBike")
			{
				wydruk << std::endl
					<< "MARKA:                  " << bazaVector[x - 17] << std::endl
					<< "MODEL:                  " << bazaVector[x - 16] << std::endl
					<< "RODZAJ:                 " << "Motor" << std::endl
					<< "NUMER REJESTRACYJNY:    " << bazaVector[x - 14] << std::endl
					<< "PRZEBIEG:               " << bazaVector[x - 13] << " [KM]" << std::endl
					<< "WAGA:                   " << bazaVector[x - 12] << " [KG]" << std::endl
					<< "ILOSC KOL:              " << bazaVector[x - 11] << std::endl
					<< "ILOSC PASAZEROW:        " << bazaVector[x - 10] << std::endl
					<< "DANE POSIADACZA;        " << std::endl
					<< "IMIE:                   " << bazaVector[x - 9] << std::endl
					<< "NAZWISKO:               " << bazaVector[x - 8] << std::endl
					<< "NARODOWOSC:             " << bazaVector[x - 7] << std::endl
					<< "MIASTO ZAMIESZKANIA:    " << bazaVector[x - 6] << std::endl
					<< "ADRES:                  " << bazaVector[x - 5] << " " << bazaVector[x - 4] << std::endl
					<< "DATA URODZENIA:         " << bazaVector[x - 3] << "/" << bazaVector[x - 2] << "/" << bazaVector[x - 1] << std::endl
					<< "PESEL:                  " << bazaVector[x] << std::endl;
			}
		
		}
	}
	std::cout << "DANE ZOSTALY WYDRUKOWANE" << std::endl << std::endl;
}
