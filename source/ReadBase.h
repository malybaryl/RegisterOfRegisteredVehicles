#pragma once
#include <iostream>
#include <vector>

/**@brief
	* Funkcja czyta plik baza.txt i wyświetla na ekranie zapisane pojazdy.
	* @param bazaVector wektor stringów przechowujący słowa z pliku baza.txt.
	* @param text string pomaga zapisać słowa do wektora bazaVector.
	* @param base ifstream odczytujący z pliku baza.txt.
	*/
void readBase(std::vector <std::string> bazaVector);

/**@brief
	* Funkcja czyta plik baza.txt i wyświetla na ekranie dany typ pojazdów.
	* @param bazaVector wektor stringów przechowujący słowa z pliku baza.txt.
	* @param text string pomaga zapisać słowa do wektora bazaVector.
	* @param base ifstream odczytujący z pliku baza.txt.
	* @param choice int od wartości tego inta zależy jaki typ pojazdów zostanie wyświetlony.
	*/
void readBaseTypeOfCar(int choice);

/**@brief
	* Funkcja czyta plik baza.txt i wyświetla na ekranie pojazdy kokretnego właściciela.
	* @param bazaVector wektor stringów przechowujący słowa z pliku baza.txt.
	* @param text string pomaga zapisać słowa do wektora bazaVector.
	* @param base ifstream odczytujący z pliku baza.txt.
	*/
void readBaseUser(std::string &IDNumber, bool& ifCorrect, std::vector<std::string> base);