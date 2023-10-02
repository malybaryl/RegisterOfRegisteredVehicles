#include "Owner.h"

Owner::Owner()
{
	name = "Jan";
	lastName = "Kowalski";
	homeCountry = "Polska";
	cityOfResidence = "Warszawa";
	streetName = "Krakowska";
	numberOfBuilding = "12b";
	dayOfBirth = 1;
	monthOfBirth = 1;
	yearOfBirth = 1960;
}

Owner::Owner(std::string name_, std::string lastName_, std::string homeCountry_, std::string cityOfResidence_, std::string streetName_, std::string numberOfBuilding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_)
{
	name = name_;
	lastName = lastName_;
	homeCountry = homeCountry_;
	cityOfResidence = cityOfResidence_;
	streetName = streetName_;
	numberOfBuilding = numberOfBuilding_;
	dayOfBirth = dayOfBirth_;
	monthOfBirth = monthOfBirth_;
	yearOfBirth = yearOfBirth_;
}

Owner::~Owner()
{

}

void Owner::setName(std::string n)
{
	name = n;
}

void Owner::printName()
{
	std::cout << name;
}

void Owner::getName(std::string& name_)
{
	name_ = name;
}

void Owner::setLastName(std::string n)
{
	lastName = n;
}

void Owner::printLastName()
{
	std::cout << lastName;
}

void Owner::getLastName(std::string& lastName_)
{
	lastName_ = lastName;
}

void Owner::setHomeCountry(std::string n)
{
	homeCountry = n;
}

void Owner::printHomeCoutry()
{
	std::cout << homeCountry;
}

void Owner::getHomeCountry(std::string& homeCountry_)
{
	homeCountry_ = homeCountry;
}

void Owner::setCityOfResidence(std::string n)
{
	cityOfResidence = n;
}

void Owner::printCityOfResidence()
{
	std::cout << cityOfResidence;
}

void Owner::getCityOfResidence(std::string& cityOfResidence_)
{
	cityOfResidence_ = cityOfResidence;
}

void Owner::setStreetName(std::string n)
{
	streetName = n;
}

void Owner::printStreetName()
{
	std::cout << streetName;
}

void Owner::getStreetName(std::string& streetName_)
{
	streetName_ = streetName;
}

void Owner::setNumberOfBuilding(std::string n)
{
	numberOfBuilding = n;
}

void Owner::printNumberOfBuilding()
{
	std::cout << numberOfBuilding;
}

void Owner::getNumberOfBuilding(std::string& numberOfBuilding_)
{
	numberOfBuilding_ = numberOfBuilding;
}

int Owner::setDayOfBirth(int n)
{
	return dayOfBirth = n;
}

int Owner::getDayOfBirth()
{
	return dayOfBirth;
}

void Owner::printDayOfBirth()
{
	std::cout << dayOfBirth;
}

int Owner::setMonthOfBirth(int n)
{
	return monthOfBirth = n;
}

int Owner::getMonthOfBirth()
{
	return monthOfBirth;
}

void Owner::printMonthOfBirth()
{
	std::cout << monthOfBirth;
}

int Owner::setYearOfBirth(int n)
{
	return yearOfBirth = n;
}

int Owner::getYearOfBirth()
{
	return yearOfBirth;
}

void Owner::printYearOfBirth()
{
	std::cout << yearOfBirth;
}

int Owner::getIDnumber()
{
	return IDnumber;
}

void Owner::printIDnumber()
{
	std::cout << IDnumber;
}

int Owner::setIDnumber(int n)
{
	return IDnumber = n;
}
