#pragma once
#include <iostream>

/**@brief
* Funkcja usuwa konkretny pojazd z bazy pojazdów.
* @param bazaVector wektor stringów przechowujący słowa z pliku baza.txt.
* @param text string pomagający zapisać słowa do pliku baza.txt.
* @param base ifstrem odczytujący z pliku baza.txt.
* @param baseOF ofsteam zapisujący do pliku baza.txt.
*/
void deleteVechicleRegistrationNumber(std::string registrationNumber);