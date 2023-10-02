#include <iostream>
#include "MainMenu.h"

void drawMainMenu()
{
	std::cout << "\t \" Co chcesz zrobic?\"" << std::endl << std::endl
		<< "1. Rejestracja nowego pojazdu" << std::endl
		<< "2. Podglad zarejestrowanych pojazdow" << std::endl
		<< "3. Wyszukanie konkretnego pojazdu" << std::endl
		<< "4. Wyszukanie pojazdow danego typu" << std::endl
		<< "5. Wyszukanie pojazdow danego wlasciciela" << std::endl << std::endl;
}

void drawEnd()
{
	std::cout << "\t KONIEC PROGRAMU" << std::endl;
}

void drawDoYouWantToPrint()
{
	std::cout << "CZY CHCESZ TE DANE WYDRUKOWAC? TAK/NIE" << std::endl;
}

void enterRegistrationNumber()
{
	std::cout << "WPROWADZ NUMER REJESTRACYJNY :";
}

void drawWhatYouWantToDoNextRegistrationNumber()
{
	std::cout << std::endl << "Co chcesz zrobić z tymi danymi?" << std::endl
		<< "1. Wydruk" << std::endl
		<< "2. Zmiana wlasciciela" << std::endl
		<< "3. usun" << std::endl
		<< "4. nic" << std::endl;
}

void enterTypeOfCar()
{
	std::cout << std::endl << "Wprowadz typ pojadu;" << std::endl
		<< "1. Samochod osobisty" << std::endl
		<< "2. Samochod ciezarowy" << std::endl
		<< "3. Motocykl" << std::endl;
}

void drawWhatYoiWantToDoNextUser()
{
	std::cout << std::endl << "Co chcesz zrobić z tymi danymi?" << std::endl
	<< "1. Wydruk" << std::endl
	<< "2. usun" << std::endl
	<< "3. nic" << std::endl;
}

void printQuestionMarka()
{
	std::cout << "Wprowadz Marke pojadu: ";
}

void printQuestionModel()
{
	std::cout  << "Wprowadz Model pojazdu : ";
}

void printSaveData()
{
	std::cout << "Dane zostaly zapisane." << std::endl << std::endl;
}

void printType(std::string n)
{
	std::cout << "Wprowadz " << n << ": ";
}
