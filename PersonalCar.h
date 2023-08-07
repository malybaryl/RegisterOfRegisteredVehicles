#pragma once
#include <string>
#include "Vechicle.h"

/**@brief
* Klasa dla pojazdu typu Samochód Osobowy.
*/
class PersonalCar : public Vechicle
{
	std::string model;
	std::string marka;
	int numberOfPassegers;
	int engineCapacity;
	int weight;
public:
	PersonalCar();
	PersonalCar(std::string model_, std::string marka_, int numberOfPassengers_, int engineCapacity_, int weight_, std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string surname_, std::string homeCountry_, std::string city_, std::string street_, std::string numberOfBuilding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_, int IDnumber_);
	~PersonalCar();
	
	/**@brief
	* Fukcja ustwia marka pojazu.
	* @param n string marka pojazdu.
	*/
	void setMarka(std::string n);

	/**@brief
	* Funkcja zwraca marke pojazdu.
	*/
	void getMarka(std::string& n);

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
	* Funkcja zwraca model pojazdu.
	*/
	void getModel(std::string& n);

	/**@brief
	* Funkcja wyświetla model pojazdu na ekranie.
	*/
	void printModel();

	/**@brief
	* Funkcja ustawia ilość pasażerów pojazdu.
	* @param n int ilość pasażerów pojazdu.
	*/
	int setNumberOfPassegers(int n);

	/**@brief
	* Funkcja zwraca ilość pasażerów pojazdu.
	* @return int ilość pasażerów pojazdu.
	*/
	int getNumberOfPassegers();

	/**@brief
	* Funkcja wyświetla ilość pasażerów pojazdu na ekranie.
	*/
	void printNumberOfPassegers();

	/**@brief
	* Funkcja ustawia pojemność silnika pojazdu.
	* @param n int pojemność silnika pojazdu.
	*/
	int setEngineCapacity(int n);

	/**@brief
	* Funkcja zwraca pojemność silnika pojazdu.
	* @return int pojemność silnika pojazdu.
	*/
	int getEngineCapacity();

	/**@brief
	* Funkcja wyświetla pojemność silnika pojazdu na ekranie.
	*/
	void printEngineCapacity();

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

	friend std::istream& operator >> (std::istream& s, PersonalCar& p);
};

