#pragma once
#include <iostream>
#include <vector>

/**@brief
*Fukcja zmienia numer rejestracyjny danego pojazdu.
* @param y int rok urodzenia
* @param m int miesiąc urodzenia
* @param y int rok urodzenia
* @param bazaVector wektor stringów, który przechowuje pojedyncze słowa z pliku baza.txt.
* @param text strig, który pomaga przy zapisywaniu słów do wektora bazaVector.
* @praram base ifstream odczytuje plik baza.txt.
*/
void changeOwnerRegistrationNumber(std::string registrationNumber, std::vector<std::string>& bazaVector);