#pragma once
#include <iostream>

/**@brief
* Fukncja sprawdza, czy wprowadzony pojazd był już w pliku rodzaje_pojazdów.txt. Jeśli dane się pokrywają z jakimś pojazdem, to dane się automatycznie nadpisują np. waga, ilość pasażerów, ilość kół, etc.
* @param typesOfCarVector wektor stringów przechowujący pojedyncze słowa z pliku rodzaje_pojazdów.txt.
* @param text string pomagający zapisać słowa do wektora typesOfCarVector.
* @param typesOfCar ifsteam odczytuje plik rodzaje_pojazdow.txt.
* @param i int licznik ktory inkrementuje za każdym razem gdy znajdzie pokrywający się pojazd.
* @param WasType bool który zwraca true, gdy i > 0, a false gdy i = 0.
* @param firstInf string przechowujący jedna informajce na temat pojazdu. Dane zależą od rodzaju pojazdu.
* @param secondInf string przechowujący jedna informajce na temat pojazdu. Dane zależą od rodzaju pojazdu.
* @param thirdInf string przechowujący jedna informajce na temat pojazdu. Dane zależą od rodzaju pojazdu.
*/
void checkTypesOfCars(std::string marka, std::string model, std::string type, bool& WasType, std::string& firstInf, std::string& secondInf, std::string& thirdInf);