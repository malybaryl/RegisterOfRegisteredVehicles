#include "ChangeOwner.h"
#include <iostream>
#include <vector>
#include <fstream>
#include "checkID.h"
#include <string>

void changeOwnerRegistrationNumber(std::string registrationNumber,std::vector<std::string> &bazaVector)
{
	std::string name;
	std::string surname;
	std::string country;
	std::string city;
	std::string street;
	std::string nrBuilding;
	std::string d;
	std::string m;
	std::string y;
	std::string IDnumber;
	bool correct = true;

	std::cout << "Wprowadz IMIE: ";
	std::cin >> name;
	std::cout << "Wprowadz NAZWISKO: ";
	std::cin >> surname;
	std::cout << "Wprowadz KRAJ ZAMIESZKANIA: ";
	std::cin >> country;
	std::cout << "Wprowadz MIEJSCOWOSC: ";
	std::cin >> city;
	std::cout << "Wprowadz ULICE: ";
	std::cin >> street;
	std::cout << "Wprowadz NUMER BUDYNKU: ";
	std::cin >> nrBuilding;
	std::cout << "Wprowadz DZIEN URODZENIA: ";
	std::cin >> d;
	std::cout << "Wprowadz MIESIAC URODZENIA: ";
	std::cin >> m;
	std::cout << "Wprowadz ROK URODZENIA: ";
	std::cin >> y;
	std::cout << "Wprowadz PESEL: ";
	std::cin >> IDnumber;

	int d_ = std::stoi(d);
	int m_ = std::stoi(m);
	int y_ = std::stoi(y);
	int IDnumber_ = std::stoi(IDnumber);

	correct = checkID(IDnumber_, bazaVector, name, surname, country, city, street, nrBuilding, d_, m_, y_);
	if (correct == true)
	{
		for (int x = 0; x < bazaVector.size(); x++)
		{
			if (bazaVector[x] == registrationNumber)
			{
				bazaVector[x + 5] = name;
				bazaVector[x + 6] = surname;
				bazaVector[x + 7] = country;
				bazaVector[x + 8] = city;
				bazaVector[x + 9] = street;
				bazaVector[x + 10] = nrBuilding;
				bazaVector[x + 11] = d;
				bazaVector[x + 12] = m;
				bazaVector[x + 13] = y;
			}
		}

		std::ofstream baseOF("baza.txt");
		for (int x = 0; x < bazaVector.size(); x++)
		{
			baseOF << bazaVector[x] << " ";
		}
	}
	else
	{
		std::cout << "niepoprawne dane..." << std::endl;
	}
}
