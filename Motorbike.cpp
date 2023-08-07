#include "Motorbike.h"
#include <fstream>

Motorbike::Motorbike()
{
	marka = "ROMET";
	model = "ZXT";
	weight = 100;
	amountOfWheels = 2;
	amountOfPassagers = 1;
	type = "Motorbike";
	registrationNumber = "WA123";
	mileage = 0;
	setOwner("Jan", "Kowalski", "Polska", "Warszawa", "Krakowska", "2b", 1, 1, 1960,12345678901);
}

Motorbike::Motorbike(std::string model_, std::string marka_, int weight_,int amountOfWheels_, int amountOfPassagers_, std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string surname_, std::string homeCountry_, std::string cityOfResidence_, std::string street_, std::string numberOfBuilding_, int dayOfbirth_, int monthOfBirth_, int yearOfBirth_, int IDnumber_)
{
	marka = marka_;
	model = model_;
	weight = weight_;
	amountOfWheels = amountOfWheels_;
	amountOfPassagers =amountOfPassagers_ ;
	type = type_;
	registrationNumber = registrationNumber_;
	mileage = mileage_;
	setOwner(name_, surname_, homeCountry_, cityOfResidence_, street_, numberOfBuilding_, dayOfbirth_, monthOfBirth_, yearOfBirth_, IDnumber_);
}

Motorbike::~Motorbike()
{

}

void Motorbike::setMarka(std::string n)
{
	marka = n;
}

void Motorbike::printMarka()
{
	std::cout << marka;
}

void Motorbike::setModel(std::string n)
{
	model = n;
}

void Motorbike::printModel()
{
	std::cout << model;
}

int Motorbike::setWeight(int n)
{
	return weight = n;
}

int Motorbike::getWeight()
{
	return weight;
}

void Motorbike::printWeight()
{
	std::cout << weight;
}

int Motorbike::setAmountOfWheels(int n)
{
	return amountOfWheels = n;
}

int Motorbike::getAmountOfWheels()
{
	return amountOfWheels;
}

void Motorbike::printAmountOfWheels()
{
	std::cout << amountOfWheels;
}

int Motorbike::setAmountOfPassagers(int n)
{
	return amountOfPassagers = n;
}

int Motorbike::getAmountOfPassagers()
{
	return amountOfPassagers;
}

void Motorbike::printAmountOfPassegers()
{
	std::cout << amountOfPassagers;
}

void Motorbike::printData()
{
	int monthOfBirth;
	monthOfBirth = owner.getMonthOfBirth();

	std::cout
		<< "MARKA:                  " << marka << std::endl
		<< "MODEL:                  " << model << std::endl
		<< "RODZAJ:                 " << "Motor" << std::endl
		<< "NUMER REJESTRACYJNY:    " << registrationNumber << std::endl
		<< "PRZEBIEG:               " << mileage << " [KM]" << std::endl
		<< "WAGA:                   " << weight << " [KG]" << std::endl
		<< "ILOSC KOL:              " << amountOfWheels << std::endl
		<< "ILOSC PASAZEROW:        " << amountOfPassagers << std::endl
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

void Motorbike::saveVechicle()
{
	std::ofstream base("baza.txt", std::ios_base::app);

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
			base << " " << marka << " " << model << " " << type << " " << registrationNumber << " " << mileage << " " << weight << " " << amountOfWheels << " " << amountOfPassagers << " " << name << " " << lastName << " " << homeCountry << " " << cityOfResidence << " " << street << " " << numberOfBuilding << " " << dayOfBirth << " " << monthOfBirth << " " << yearOfBirth << " " << IDnumber << " " << std::endl;
		else
			base << " " << marka << " " << model << " " << type << " " << registrationNumber << " " << mileage << " " << weight << " " << amountOfWheels << " " << amountOfPassagers << " " << name << " " << lastName << " " << homeCountry << " " << cityOfResidence << " " << street << " " << numberOfBuilding << " " << dayOfBirth << " 0" << monthOfBirth << " " << yearOfBirth << " "<< IDnumber << " "  << std::endl;
	}
	else
	{
		std::cout << "Nie udalo się otworzyc pliku..." << std::endl;
	}
}

void Motorbike::printToBase()
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
		<< "RODZAJ:                 " << "Motor" << std::endl
		<< "NUMER REJESTRACYJNY:    " << registrationNumber << std::endl
		<< "PRZEBIEG:               " << mileage << " [KM]" << std::endl
		<< "WAGA:                   " << weight << " [KG]" << std::endl
		<< "ILOSC KOL:              " << amountOfWheels << std::endl
		<< "ILOSC PASAZEROW:        " << amountOfPassagers << std::endl
		<< "DANE POSIADACZA;" << std::endl
		<< "IMIE:                   " << name << std::endl
		<< "NAZWISKO:               " << lastName << std::endl
		<< "NARODOWOSC:             " << homeCountry << std::endl
		<< "MIASTO ZAMIESZKANIA:    " << cityOfResidence << std::endl
		<< "ADRES:                  " << streetName << " " << numberOfBuilding << std::endl
		<< "DATA URODZENIA:         " << owner.getDayOfBirth() << "/" << owner.getMonthOfBirth() << "/" << owner.getYearOfBirth() << std::endl;
}

std::istream& operator>>(std::istream& s, Motorbike& p)
{
	std::cout << "Wprowadz wage: ";
	s >> p.weight;
	std::cout << "Wprowadz ilosc kol: ";
	s >> p.amountOfWheels;
	std::cout << "Wprowadz ilosc pasazerow: ";
	s >> p.amountOfPassagers;
	std::cout << "Wprowadz numer rejestracyjny: ";
	s >> p.registrationNumber;
	std::cout << "Wprowadz przebieg: ";
	s >> p.mileage;
	return s;
}
