#include "Vechicle.h"
#include "checkID.h"
#include "Security.h"

Vechicle::Vechicle()
{
	type = "PersonalCar";
	registrationNumber = "WA12345";
	mileage = 0;
	setOwner("JAN", "Kowalski", "Polska", "Warszawa", "Krakowska", "2b", 1, 1, 1960,12345678901);
}

Vechicle::Vechicle(std::string type_, std::string registrationNumber_, int mileage_, std::string name_, std::string lastName_, std::string homeCountry_, std::string cityOfResidence_, std::string streetName_, std::string numberOfBuilding_,int dayOfBirth_,int monthOfBirth_,int yearOfBirth_, int IDnumber_)
{
	type = type_;
	registrationNumber = registrationNumber_;
	mileage = mileage_;
	setOwner(name_, lastName_, homeCountry_, cityOfResidence_, streetName_, numberOfBuilding_, dayOfBirth_, monthOfBirth_, yearOfBirth_, IDnumber_);
}

void Vechicle::typeOwner(std::vector<std::string> bazaVector,bool&correct)
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

	std::cout << "Podaj imie: ";
	std::cin >> name;
	std::cout << "Podaj nazwisko: ";
	std::cin >> lastName;
	std::cout << "Podaj kraj zamieszkania: ";
	std::cin >> homeCountry;
	std::cout << "Podaj miejscowosc zamieszkania: ";
	std::cin >> cityOfResidence;
	std::cout << "Podaj ulice: ";
	std::cin >> streetName;
	std::cout << "Podaj numer budynku: ";
	std::cin >> numberOfBuilding;
	std::cout << "Podaj dzien urodzenia: ";
	cinInt(dayOfBirth);
	std::cout << "Podaj miesiac urodzenia: ";
	cinInt(monthOfBirth);
	std::cout << "Podaj rok urodzenia: ";
	cinInt(yearOfBirth);
	std::cout << "Podaj Pesel / IDnumber: ";
	cinInt(IDnumber);
	
	correct=checkID(IDnumber,bazaVector,name,lastName,homeCountry,cityOfResidence,streetName,numberOfBuilding,dayOfBirth,monthOfBirth,yearOfBirth);
	
	owner.setName(name);
	owner.setLastName(lastName);
	owner.setHomeCountry(homeCountry);
	owner.setCityOfResidence(cityOfResidence);
	owner.setStreetName(streetName);
	owner.setNumberOfBuilding(numberOfBuilding);
	owner.setDayOfBirth(dayOfBirth);
	owner.setMonthOfBirth(monthOfBirth);
	owner.setYearOfBirth(yearOfBirth);
	owner.setIDnumber(IDnumber);
}

Vechicle::~Vechicle()
{

}

void Vechicle::setRegistrationNumber(std::string n)
{
	registrationNumber = n;
}

void Vechicle::printRegistrationNumber()
{
	std::cout << registrationNumber;
}

void Vechicle::setType(std::string n)
{
	type = n;
}

void Vechicle::printType()
{
	std::cout << type;
}

void Vechicle::setOwner(std::string _name, std::string _lastName, std::string _homeCountry, std::string _cityOfResidence, std::string _streetName, std::string _numberOfBuilding, int _dayOfBirth, int _monthOfBirth, int _yearOfBirth, int _IDnumber)
{
	owner.setName(_name);
	owner.setLastName(_lastName);
	owner.setHomeCountry(_homeCountry);
	owner.setCityOfResidence(_cityOfResidence);
	owner.setStreetName(_streetName);
	owner.setNumberOfBuilding(_numberOfBuilding);
	owner.setDayOfBirth(_dayOfBirth);
	owner.setMonthOfBirth(_monthOfBirth);
	owner.setYearOfBirth(_yearOfBirth);
	owner.setIDnumber(_IDnumber);
}

int Vechicle::setMileage(int n)
{
	return mileage = n;
}

int Vechicle::getMileage()
{
	return mileage;
}

void Vechicle::printMileage()
{
	std::cout << mileage;
}

void Vechicle::getIDnumber(int& n)
{
	n = owner.getIDnumber();
}
