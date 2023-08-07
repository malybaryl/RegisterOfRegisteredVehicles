#pragma once
#include "Vechicle.h"
#include <iostream>
#include <string>

/**@brief
* Klasa dla pojazdu typu Motor
*/
class Motorbike : public Vechicle
{
	std::string model;
	std::string marka;
	int weight;
	int amountOfWheels;
	int amountOfPassagers;
public:
	Motorbike();
	Motorbike(std::string model_, std::string marka_, int weight_, int amountOfWheels_, int amountOfPassagers_, std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string surname_, std::string homeCountry_, std::string cityOfResidence_, std::string street_, std::string numberOfBuilding_, int dayOfbirth_, int monthOfBirth_, int yearOfBirth_, int IDnumber_);
	~Motorbike();

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
	* @param n int waga pojazdu.
	*/
	int setWeight(int n);
	
	/**@brief
	* Funkcja zwraca wagę pojazdu.
	* @return int waga pojazdu.
	*/
	int getWeight();

	/**@brief
	* Funkcja wyświetla wage pojazdu na ekranie.
	*/
	void printWeight();

	/**@brief
	* Funkcja ustawia liczbę kół pojazdu.
	* @param n int liczba kół pojazdu.
	*/
	int setAmountOfWheels(int n);

	/**@brief
	* Funkcja zwraca liczbę kół pojazdu.
	* @return int liczba kół pojazdu.
	*/
	int getAmountOfWheels();

	/**@brief
	* Funkcja wyświetla liczbę kół pojazdu na ekranie.
	*/
	void printAmountOfWheels();

	/**@brief
	* Funkcja ustawia liczbę pasażerów pojazdu.
	* @param n int liczba pasażerów pojazdu
	*/
	int setAmountOfPassagers(int n);

	/**@brief
	* Funkcja zwraca liczbę pasażerów pojazdu.
	* @return int liczba pasażerów pojazdu.
	*/
	int getAmountOfPassagers();

	/**@brief
	* Funkcja wyświetla liczbę pasażerów pojazdu na ekranie.
	*/
	void printAmountOfPassegers();
	
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
	
	friend std::istream& operator >> (std::istream& s, Motorbike& p);
};

