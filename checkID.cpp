#include "checkID.h"
#include <string>

bool checkID(int IDnumber, std::vector<std::string> bazaVector,std::string name_,std::string lastName_,std::string homeCountry_,std::string cityOfResidence_,std::string streetName_, std::string numberOfbulding_, int dayOfBirth_, int monthOfBirth_, int yearOfBirth_)
{
	std::string IDnumber_ = std::to_string(IDnumber);
	std::string dayOfBirth__= std::to_string(dayOfBirth_);
	std::string monthOfBirth__ = std::to_string(monthOfBirth_);
	std::string yearOfBirth__ = std::to_string(yearOfBirth_);
	std::string name = "";
	std::string lastName = "";
	std::string homeCountry = "";
	std::string cityOfResidence = "";
	std::string streetName = "";
	std::string numberOfBuilding = "";
	std::string dayOfBirth = "";
	std::string monthOfBirth = "";
	std::string yearOfBirth = "";
	int counter = 0;

	for (int x = 0; x < bazaVector.size(); x++)
	{
		if (IDnumber_ == bazaVector[x])
		{
			yearOfBirth = bazaVector[x - 1];
			monthOfBirth = bazaVector[x - 2];
			dayOfBirth = bazaVector[x - 3];
			numberOfBuilding = bazaVector[x - 4];
			streetName = bazaVector[x - 5];
			cityOfResidence = bazaVector[x - 6];
			homeCountry = bazaVector[x - 7];
			lastName = bazaVector[x - 8];
			name = bazaVector[x - 9];
			counter++;
			if (name == name_ && lastName == lastName_ && homeCountry == homeCountry_ && cityOfResidence == cityOfResidence_ && streetName == streetName_ && numberOfBuilding == numberOfbulding_ && dayOfBirth == dayOfBirth__ && monthOfBirth == monthOfBirth__ && yearOfBirth == yearOfBirth__)
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
		
    }
	if (counter < 1)
	{
		return true;
	}
}
