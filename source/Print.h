#pragma once
#include <iostream>
#include <vector>

/**@brief
	* Funkcja zapisuje całą baze do pliku wydruk.txt.
	* @param wydruk ofstream plik wydruk.txt do którego zapisywane są dane.
	* @param bazaVector wektor stringów zawierający wszystkie słowa z pliku baza.txt.
	* @param text string pomagający zapisać słowa do wektora bazaVector.
	* @param base ifstream plik baze.txt z którego są odczytywane dane
	*/
void printAllBase(std::vector <std::string> bazaVector);

/**@brief
	* Funkcja zapisuje pojazd znaleziony po numerze rejestracyjnym do pliku wydruk.txt.
	* @param wydruk ofstream plik wydruk.txt do którego zapisywane są dane.
	* @param bazaVector wektor stringów zawierający wszystkie słowa z pliku baza.txt.
	* @param text string pomagający zapisać słowa do wektora bazaVector.
	* @param base ifstream plik baze.txt z którego są odczytywane dane
	*/
void printRegistrationNumber(std::string registrationNumber);

/**@brief
	* Funkcja zapisuje dane typy pojazdów do pliku wydruk.txt.
	* @param wydruk ofstream plik wydruk.txt do którego zapisywane są dane.
	* @param bazaVector wektor stringów zawierający wszystkie słowa z pliku baza.txt.
	* @param text string pomagający zapisać słowa do wektora bazaVector.
	* @param base ifstream plik baze.txt z którego są odczytywane dane
	*/
void printTypeOfCar(int type);


/**@brief
	* Funkcja zapisuje pojazdy danego właściciela do pliku wydruk.txt.
	* @param wydruk ofstream plik wydruk.txt do którego zapisywane są dane.
	* @param bazaVector wektor stringów zawierający wszystkie słowa z pliku baza.txt.
	* @param text string pomagający zapisać słowa do wektora bazaVector.
	* @param base ifstream plik baze.txt z którego są odczytywane dane
	*/
void printUserCars(std::string IDNumber, std::vector<std::string> bazaVector);