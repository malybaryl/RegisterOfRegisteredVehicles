#pragma once
#include <string>
#include "Vechicle.h"

/**@brief
* Klasa dla pojazdu typu Samochód Ciężarowy
*/
class Truck : public Vechicle
{
	std::string model;
	std::string marka;
	std::string isThereATrailer;
	int weight;
	int maximumLoad;
public:
	Truck();
	Truck(std::string model_, std::string marka_, std::string isThereATrailer_, int weight_, int maximumLoad_, std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string surname_, std::string homeCountry_, std::string cityOfResidence_, std::string street_, std::string numberOfBuilding_, int dayOfBirth_, int mounthOfBirth_, int yearOfBirth_,int IDnumber_);
	~Truck();

	/**@brief
	* Funkcja ustawia marke pojazdu.
	* @param n string marka pojazdu.
	*/
    void setMarka(std::string n);

	/**@brief
	* Funkcja wyświetla marke pojazdu na ekranie.
	*/
	void printMarka();

	/**@brief
	* Funkcja ustawia model pojazdu.
	* @param n string model pojazdu.
	*/
	void setModel(std::string n);

	/**@brief
	* Funkcja wyświetla model pojazdu na ekranie.
	*/
	void printModel();

	/**@brief
	* Funkcja ustawia wagę pojazdu.
	* @param n int wagę pojazdu.
	*/
	int setWeight(int n);

	/**@brief
	* Funkcja zwraca wagę pojazdu.
	* @return int wagę pojazdu.
	*/
	int getWeight();

	/**@brief
	* Funkcja wyświetla wagę pojazdu na ekranie.
	*/
	void printWeight();

	/**@brief
	* Funkcja ustawia czy pojazd zawiera przyczepę.
	* @param n string czy pojazd zawiera przyczepę.
	*/
	void setIsThereATrailer(std::string n);

	/**@brief
	* Funkcja wyświetla czy pojazd zawiera przyczepę na ekranie.
	*/
	void printIsThereATrailer();

	/**@brief
	* Funkcja ustawia maksymalną ładowność pojazdu.
	* @param n int maksymalną ładowność pojazdu.
	*/
	int setMaximumLoad(int n);

	/**@brief
	* Funkcja maksymalną ładowność pojazdu.
	* @return int maksymalna ładowność pojazdu.
	*/
	int getMaximumLoad();

	/**@brief
	* Funkcja wyświetla maksymalną ładowność pojazdu na ekranie.
	*/
	void printMaximumLoad();
 

	/**@brief
	*Fukcja wyświetla na ekranie wszystkie dane pojazdu.
	*/
	virtual void printData();

	/**@brief
	*Fukcja zapisuje dane pojazdu.
	*/
	virtual void saveVechicle();
	/**@brief
	*Fukcja zapisuje dane do pliku tekstowego baza.txt.
	*/
	virtual void printToBase();

	friend std::istream& operator >> (std::istream& s, Truck& p);
};

