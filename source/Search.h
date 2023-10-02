#pragma once
#include <iostream>
#include <vector>
#include <fstream>

/**@brief
	* Funkcja wyszukuje kokretny pojazd i wyświetla go na ekranie.
	* @param bazaVector wektor stringów przechowujący słowa z pliku baza.txt.
	* @param text string pomaga zapisać słowa do wektora bazaVector.
	* @param base ifstream odczytujący z pliku baza.txt.
	* @param counter int inkrementuje się na każdym razem gdy pojazd zostanie znaleziony.
	* @param correct bool zwraca true gdy counter > 0 i false gdy counter = 0.
	*/
void searchRegistrationNumber(std::string registrationNumber, bool& correct);
