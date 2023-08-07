#include "PersonalCar.h"
#include <vector>
#include <fstream>

PersonalCar::PersonalCar(): Vechicle()
{
	model = "Astra";
	marka = "Opel";
	numberOfPassegers = 3;
	engineCapacity = 1200;
	weight = 1200;
	setOwner("Jan", "Kowalski", "Polska", "Warszawa", "Krakowska", "2b", 1, 1, 1960,12345678901);
}

PersonalCar::PersonalCar(std::string model_, std::string marka_, int numberOfPassengers_, int engineCapacity_, int weight_, std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string surname_, std::string homeCountry_, std::string city_, std::string street_, std::string numberOfBuilding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_, int IDnumber_)
{
	model = model_;
	marka = marka_;
	numberOfPassegers = numberOfPassengers_;
	engineCapacity = engineCapacity_;
	weight = weight_;
	type = type_;
	registrationNumber = registrationNumber_;
	mileage = mileage_;
	setOwner(name_, surname_, homeCountry_, city_, street_, numberOfBuilding_, dayOfBirth_, monthOfBirth_, yearOfBirth_ , IDnumber_);
}

PersonalCar::~PersonalCar()
{

}

void PersonalCar::setMarka(std::string n)
{
	marka = n;
}

void PersonalCar::getMarka(std::string& n)
{
	n = marka;
}

void PersonalCar::printMarka()
{
	std::cout << marka;
}

void PersonalCar::setModel(std::string n)
{
	model = n;
}

void PersonalCar::getModel(std::string& n)
{
	n = model;
}

void PersonalCar::printModel()
{
	std::cout << model;
}

int PersonalCar::setNumberOfPassegers(int n)
{
	return numberOfPassegers = n;
}

int PersonalCar::getNumberOfPassegers()
{
	return numberOfPassegers;
}

void PersonalCar::printNumberOfPassegers()
{
	std::cout << numberOfPassegers;
}

int PersonalCar::setEngineCapacity(int n)
{
	return engineCapacity = n;
}

int PersonalCar::getEngineCapacity()
{
	return engineCapacity;
}

void PersonalCar::printEngineCapacity()
{
	std::cout << engineCapacity;
}

int PersonalCar::setWeight(int n)
{
	return weight = n;
}

int PersonalCar::getWeight()
{
	return weight;
}

void PersonalCar::printWeight()
{
	std::cout << weight;
}

void PersonalCar::printData()
{
	int monthOfBirth;
	monthOfBirth = owner.getMonthOfBirth();

	std::cout
		<< "MARKA:                  " << marka << std::endl
		<< "MODEL:                  " << model << std::endl
		<< "RODZAJ:                 " << "Samochod osobowy" << std::endl
		<< "NUMER REJESTRACYJNY:    " << registrationNumber << std::endl
		<< "PRZEBIEG:               " << mileage << " [KM]" << std::endl
		<< "ILOSC PASAZEROW:        " << numberOfPassegers << std::endl
		<< "POJEMNOSC SILNIKA:      " << engineCapacity << " [KW]" << std::endl
		<< "WAGA:                   " << weight  << " [KG]" << std::endl 
		<< "DANE POSIADACZA;" << std::endl
		<< "IMIE:                   "; 
	owner.printName();
	std::cout << std::endl
		<< "NAZWISKO:               ";
	owner.printLastName();
	std::cout << std::endl
		<< "NARODOWOSC:             ";
	owner.printHomeCoutry();
	std::cout << std::endl
		<< "MIASTO ZAMIESZKANIA:    ";
	owner.printCityOfResidence();
	std::cout << std::endl
		<< "ADRES:                  ";
	owner.printStreetName();
	std::cout << " ";
	owner.printNumberOfBuilding();
	std::cout << std::endl
		<< "DATA URODZENIA:         ";
	owner.printDayOfBirth();
	if (monthOfBirth < 10)
	{
		std::cout << "/0";
	}
	else
	{
		std::cout << "/";
	}
	owner.printMonthOfBirth();
	std::cout << "/";
	owner.printYearOfBirth();
	std::cout << std::endl
		<< "PESEL:                  ";
	owner.printIDnumber();
	std::cout << std::endl << std::endl;
}

void PersonalCar::saveVechicle()
{
	std::ofstream base("baza.txt",std::ios_base::app);
	
	std::string name;
	owner.getName(name);
	std::string lastName;
	owner.getLastName(lastName);
	std::string homeCountry;
	owner.getHomeCountry(homeCountry);
	std::string cityOfResidence;
	owner.getCityOfResidence(cityOfResidence);
	std::string street;
	owner.getStreetName(street);
	std::string numberOfBuilding;
	owner.getNumberOfBuilding(numberOfBuilding);
	int dayOfBirth = owner.getDayOfBirth();
	int monthOfBirth = owner.getMonthOfBirth();
	int yearOfBirth = owner.getYearOfBirth();
	int IDnumber = owner.getIDnumber();

	if (base.is_open())
	{
		if (monthOfBirth > 9)
		base << " " << marka << " " << model << " " << type << " " << registrationNumber << " " << mileage << " " << numberOfPassegers << " " << engineCapacity << " " << weight << " " << name << " " << lastName << " " << homeCountry << " " << cityOfResidence << " " << street << " " << numberOfBuilding << " " << dayOfBirth << " " << monthOfBirth << " " << yearOfBirth << " " << IDnumber << " " << std::endl;
		else
		base << " " << marka << " " << model << " " << type << " " << registrationNumber << " " << mileage << " " << numberOfPassegers << " " << engineCapacity << " " << weight << " " << name << " " << lastName << " " << homeCountry << " " << cityOfResidence << " " << street << " " << numberOfBuilding << " " << dayOfBirth << " 0" << monthOfBirth << " " << yearOfBirth << " "  << IDnumber << " " << std::endl;
	}
	else
	{
		std::cout << "Nie udalo się otworzyc pliku..." << std::endl;
	}
}

void PersonalCar::printToBase()
{
	std::string name;
	owner.getName(name);
	std::string lastName;
	owner.getLastName(lastName);
	std::string homeCountry;
	owner.getHomeCountry(homeCountry);
	std::string cityOfResidence;
	owner.getCityOfResidence(cityOfResidence);
	std::string streetName;
	owner.getStreetName(streetName);
	std::string numberOfBuilding;
	owner.getNumberOfBuilding(numberOfBuilding);
	
	std::ofstream wydruk("wydruk.txt", std::ios::app);
	wydruk << std::endl
		<< "MARKA:                  " << marka << std::endl
		<< "MODEL:                  " << model << std::endl
		<< "RODZAJ:                 " << "Samochod osobowy" << std::endl
		<< "NUMER REJESTRACYJNY:    " << registrationNumber << std::endl
		<< "PRZEBIEG:               " << mileage << " [KM]" << std::endl
		<< "ILOSC PASAZEROW:        " << numberOfPassegers << std::endl
		<< "MOC SILNIKA:            " << engineCapacity << " [KW]" << std::endl
		<< "WAGA:                   " << weight << " [KG]" << std::endl
		<< "DANE POSIADACZA;        " << std::endl
		<< "IMIE:                   " << name << std::endl
		<< "NAZWISKO:               " << lastName << std::endl
		<< "NARODOWOSC:             " << homeCountry << std::endl
		<< "MIASTO ZAMIESZKANIA:    " << cityOfResidence << std::endl
		<< "ADRES:                  " << streetName << " " << numberOfBuilding << std::endl
		<< "DATA URODZENIA:         " << owner.getDayOfBirth() << "/" << owner.getMonthOfBirth() << "/" << owner.getYearOfBirth() << std::endl;
}

std::istream& operator>>(std::istream& s, PersonalCar& p)
{
	std::cout << "Wprowadz ilosc pasazerow: ";
	s >> p.numberOfPassegers;
	std::cout << "Wprowadz pojemnosc silnika: ";
	s >> p.engineCapacity;
	std::cout << "Wprowadz wage: ";
	s >> p.weight;
	std::cout << "Wprowadz numer rejestracyjny: ";
	s >> p.registrationNumber;
	std::cout << "Wprowadz przebieg: ";
	s >> p.mileage;
	return s;
}
