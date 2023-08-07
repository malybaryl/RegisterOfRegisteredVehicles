#pragma once
#include <iostream>
#include <string>

/**@brief
* Klasa dla właściciela pojazdu.
*/
class Owner
{
	std::string name;
	std::string lastName;
	std::string homeCountry;
	std::string cityOfResidence;
	std::string streetName;
	std::string numberOfBuilding;
	int dayOfBirth;
	int monthOfBirth;
	int yearOfBirth;
	int IDnumber;
public:
	Owner();
	Owner(std::string name_, std::string lastName_, std::string homeCountry_, std::string cityOfResidence_, std::string streetName_, std::string numberOfBuilding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_);
	~Owner();

	/**@brief
	* Fukcja zapisuje imie właściciela.
	* @param n string imie właściciela.
	*/
	void setName(std::string n);

	/**@brief
	* Fukcja wyświetla imie właściciela na ekranie.
	*/
	void printName();

	/**@brief
	* Fukcja zwraca imie właściciela.
	*/
    void getName(std::string& name_);

	/**@brief
	* Fukcja zapisuje nazwisko właściciela.
	* @param n string nazwisko właściciela.
	*/
	void setLastName(std::string n);

	/**@brief
	* Fukcja wyświetla nazwisko właściciela na ekranie.
	*/
	void printLastName();

	/**@brief
	* Fukcja zwraca nazwisko właściciela.
	*/
	void getLastName(std::string& lastName_);

	/**@brief
	* Fukcja zapisuje kraj pochodzenia właściciela.
	* @param n string kraj pochodzenia właściciela.
	*/
	void setHomeCountry(std::string n);

	/**@brief
	* Fukcja wyświetla kraj pochodzenia właściciela na ekranie.
	*/
	void printHomeCoutry();

	/**@brief
	* Fukcja zwraca kraj pochodzenia właściciela.
	*/
	void getHomeCountry(std::string& homeCountry_);

	/**@brief
	* Fukcja zapisuje miejscowość zamieszkania właściciela.
	* @param n string miejscowość zamieszkania właściciela.
	*/
	void setCityOfResidence(std::string n);

	/**@brief
	* Fukcja wyświetla miejscowość zamieszkania właściciela na ekranie.
	*/
	void printCityOfResidence();

	/**@brief
	* Fukcja zwraca miejscowość zamieszkania właściciela.
	*/
	void getCityOfResidence(std::string& cityOfResidence_);

	/**@brief
	* Fukcja zapisuje ulice właściciela.
	* @param n string ulice właściciela.
	*/
	void setStreetName(std::string n);

	/**@brief
	* Fukcja wyświetla ulice właściciela na ekranie.
	*/
	void printStreetName();

	/**@brief
	* Fukcja zwraca ulice właściciela.
	*/
	void getStreetName(std::string& streetName_);

	/**@brief
	* Fukcja zapisuje numer budynku właściciela.
	* @param n string numer budynku właściciela.
	*/
	void setNumberOfBuilding(std::string n);

	/**@brief
	* Fukcja wyświetla numer budynku właściciela na ekranie.
	*/
	void printNumberOfBuilding();

	/**@brief
	* Fukcja zwraca numer budynku właściciela.
	*/
	void getNumberOfBuilding(std::string& numberOfBuilding_);

	/**@brief
	* Fukcja zapisuje dzień urodzenia właściciela.
	* @param n int dzień urodzenia właściciela.
	*/
	int setDayOfBirth(int n);

	/**@brief
	* Fukcja zwraca dzień urodzenia właściciela.
	* @return int dzień urodzenia
	*/
	int getDayOfBirth();

	/**@brief
	* Fukcja wyświetla dzień urodzenia właściciela na ekranie.
	*/
	void printDayOfBirth();

	/**@brief
	* Fukcja zapisuje miesiąc urodzenia właściciela.
	* @param n int miesiąc urodzenia właściciela.
	*/
	int setMonthOfBirth(int n);

	/**@brief
	* Fukcja zwraca miesiąc urodzenia właściciela.
	* @return int miesiąc urodzenia
	*/
	int getMonthOfBirth();

	/**@brief
	* Fukcja wyświetla miesiąc urodzenia właściciela na ekranie.
	*/
	void printMonthOfBirth();

	/**@brief
	* Fukcja zapisuje rok urodzenia właściciela.
	* @param n int rok urodzenia właściciela.
	*/
	int setYearOfBirth(int n);

	/**@brief
	* Fukcja zwraca rok urodzenia właściciela.
	* @return int rok urodzenia
	*/
	int getYearOfBirth();

	/**@brief
	* Fukcja wyświetla rok urodzenia właściciela na ekranie.
	*/
	void printYearOfBirth();

	/**@brief
	*Fukcja zapisuje pesel właściciela.
	* @param n int pesel właściciela.
	*/
	int setIDnumber(int n);
	/**@brief
	*Fukcja zwraca pesel właściciela.
	* @return IDNumber
	*/
	int getIDnumber();
	/**@brief
	*Fukcja wyświetla pesel właściciela na ekranie.
	*/
	void printIDnumber();
};