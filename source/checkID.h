#pragma once
#include <iostream>
#include <vector>
#include <fstream>

/**@brief
	*Fukcja sprawdza czy wprowadzony pesel jest poprawny.
	*/
bool checkID(int IDnumber, std::vector<std::string> bazaVector, std::string name_, std::string lastName_, std::string homeCountry_, std::string cityOfResidence_, std::string streetName_, std::string numberOfbulding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_);