#include "Truck.h"
#include <fstream>

Truck::Truck()
{
	model = "ZTX";
	marka = "MAN";
	isThereATrailer = "tak";
	weight = 4500;
	maximumLoad = 20000;
	type = "Truck";
	registrationNumber = "WA12345";
	mileage = 0;
	setOwner("JAN", "Kowalski", "Polska", "Warszawa", "Krakowska", "2b", 1, 1, 1960,12345678901);
}

Truck::Truck(std::string model_, std::string marka_, std::string isThereATrailer_, int weight_, int maximumLoad_, std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string surname_, std::string homeCountry_, std::string cityOfResidence_, std::string street_, std::string numberOfBuilding_, int dayOfBirth_, int mounthOfBirth_, int yearOfBirth_, int IDnumber_)
{
	model = model_;
	marka = marka_;
	isThereATrailer = isThereATrailer_;
	weight = weight_;
	maximumLoad = maximumLoad_;
	type = type_;
	registrationNumber = registrationNumber_;
	mileage = mileage_;
	setOwner(name_, surname_, homeCountry_, cityOfResidence_, street_, numberOfBuilding_, dayOfBirth_, mounthOfBirth_, yearOfBirth_, IDnumber_);
}

Truck::~Truck()
{

}

void Truck::setMarka(std::string n)
{
	marka = n;
}

void Truck::printMarka()
{
	std::cout << marka;
}

void Truck::setModel(std::string n)
{
	model = n;
}

void Truck::printModel()
{
	std::cout << model;
}

int Truck::setWeight(int n)
{
	return weight = n;
}

int Truck::getWeight()
{
	return weight;
}

void Truck::printWeight()
{
	std::cout << weight;
}

void Truck::setIsThereATrailer(std::string n)
{
	isThereATrailer = n;
}

void Truck::printIsThereATrailer()
{
	std::cout << isThereATrailer;
}

int Truck::setMaximumLoad(int n)
{
	return maximumLoad = n;
}

int Truck::getMaximumLoad()
{
	return maximumLoad;
}

void Truck::printMaximumLoad()
{
	std::cout << maximumLoad;
}

void Truck::printData()
{
	int monthOfBirth;
	monthOfBirth = owner.getMonthOfBirth();

	std::cout
		<< "MARKA:                  " << marka << std::endl
		<< "MODEL:                  " << model << std::endl
		<< "RODZAJ:                 " << "Samochod ciezarowy" << std::endl
		<< "NUMER REJESTRACYJNY:    " << registrationNumber << std::endl
		<< "PRZEBIEG:               " << mileage << " [KM]" << std::endl
		<< "CZY JEST PRZYCZEPA:     " << isThereATrailer << std::endl
		<< "WAGA:                   " << weight << " [KG]" << std::endl
		<< "MAKSYMALNY UDZWIG:      " << maximumLoad << " [KG]" << std::endl
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

void Truck::saveVechicle()
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
			base << " " << marka << " " << model << " " << type << " " << registrationNumber << " " << mileage << " " << isThereATrailer << " " << weight << " " << maximumLoad << " " << name << " " << lastName << " " << homeCountry << " " << cityOfResidence << " " << street << " " << numberOfBuilding << " " << dayOfBirth << " " << monthOfBirth << " " << yearOfBirth << " " << IDnumber << " " << std::endl;
		else
			base << " " << marka << " " << model << " " << type << " " << registrationNumber << " " << mileage << " " << isThereATrailer << " " << weight << " " << maximumLoad << " " << name << " " << lastName << " " << homeCountry << " " << cityOfResidence << " " << street << " " << numberOfBuilding << " " << dayOfBirth << " 0" << monthOfBirth << " " << yearOfBirth << " " << IDnumber << " " << std::endl;
	}
	else
	{
		std::cout << "Nie udalo się otworzyc pliku..." << std::endl;
	}
}

void Truck::printToBase()
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
		<< "RODZAJ:                 " << "Samochod ciezarowy" << std::endl
		<< "NUMER REJESTRACYJNY:    " << numberOfBuilding << std::endl
		<< "PRZEBIEG:               " << mileage << " [KM]" << std::endl
		<< "CZY JEST PRZYCZEPA:     " << isThereATrailer << std::endl
		<< "WAGA:                   " << weight << " [KG]" << std::endl
		<< "MAKSYMALNY UDZWIG:      " << maximumLoad << " [KG]" << std::endl
		<< "DANE POSIADACZA;" << std::endl
		<< "IMIE:                   " << name << std::endl
		<< "NAZWISKO:               " << lastName << std::endl
		<< "NARODOWOSC:             " << homeCountry << std::endl
		<< "MIASTO ZAMIESZKANIA:    " << cityOfResidence << std::endl
		<< "ADRES:                  " << streetName << " " << numberOfBuilding << std::endl
		<< "DATA URODZENIA:         " << owner.getDayOfBirth() << "/" << owner.getMonthOfBirth() << "/" << owner.getYearOfBirth() << std::endl
		<< "PESEL:                  " << owner.getIDnumber() << std::endl;
}

std::istream& operator>>(std::istream& s, Truck& p)
{
	std::cout << "Czy jest przyczepa: ";
	s >> p.isThereATrailer;
	std::cout << "Wprowadz wage: ";
	s >> p.weight;
	std::cout << "Wprowadz maksymalna ladownosc: ";
	s >> p.maximumLoad;
	std::cout << "Wprowadz numer rejestracyjny: ";
	s >> p.registrationNumber;
	std::cout << "Wprowadz przebieg: ";
	s >> p.mileage;
	return s;
}
