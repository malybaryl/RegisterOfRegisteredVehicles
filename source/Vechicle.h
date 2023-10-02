#pragma once
#include "Owner.h"
#include <iostream>
#include <string>
#include <vector>

/**@brief
*Klasa jest wspólna dla wszystkich typów pojazdów. Są wniej zapisane podstawowe cechy i parametry dla pojazdów.
*/
class Vechicle
{
protected:
	std::string type;
	std::string registrationNumber;
	int mileage;
	Owner owner;
public:
	Vechicle();
	Vechicle(std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string lastName_, std::string homeCountry_, std::string cityOfResidence_, std::string streetName_, std::string numberOfBuilding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_, int IDnumber_);
	~Vechicle();
	
	/**@brief
	*Fukcja ustwia numer rejestracyjny pojazu.
	*/
	void setRegistrationNumber(std::string n);

	/**@brief
	*Fukcja wyświetla na ekranie numer rejestracyjny pojazu.
	*/
	void printRegistrationNumber();

	/**@brief
	*Fukcja ustwia typ pojazdu.
	*/
	void setType(std::string n);

	/**@brief
	*Fukcja wyświetla na ekranie typ pojazu.
	*/
	void printType();

	/**@brief
	*Fukcja ustwia własciciela pojazdu.
	*/
	void setOwner(std::string _name, std::string _lastName, std::string _homecountry, std::string _cityOfResidence, std::string _streetName, std::string _numberOfBuilding, int _dayOfBirth, int _monthOfBirth, int _yearOfBirth,int _IDnumber);
	
	/**@brief
	*Fukcja pozwala wprowadzic własciciela pojazdu przez użytkownika.
	*/
	void typeOwner(std::vector<std::string> bazaVector, bool& correct);
	
	/**@brief
	*Fukcja ustwia przebieg pojazdu.
	*/
	int setMileage(int n);
	
	/**@brief
	*Fukcja zwraca przebieg pojazdu.
	* @return zwraca int przebieg pojazdu
	*/
	int getMileage();
	
	/**@brief
	*Fukcja wyświetla na ekranie przebieg pojazdu.
	*/
	void printMileage();

	void getIDnumber(int &n);

	/**@brief
	*Fukcja wyświetla na ekranie wszystkie dane pojazdu.
	*/
	virtual void printData() = 0;
	
	/**@brief
	*Fukcja zapisuje dane pojazdu.
	*/
	virtual void saveVechicle() = 0;
	/**@brief
	*Funkcja zapisuje dane do priku tekstowego baza.txt.
	*/
	virtual void printToBase() = 0;
};

