#include <iostream>
#include <vector>
#include "MainMenu.h"
#include "Owner.h"
#include "Vechicle.h"
#include "PersonalCar.h"
#include "Truck.h"
#include "Motorbike.h"
#include "Registration.h"
#include "ReadBase.h"
#include "Print.h"
#include "Search.h"
#include "Delete.h"
#include "ChangeOwner.h"
#include "CheckTypesOfCars.h"
#include "Security.h"
#include "updateVector.h"
#include "checkID.h"

int main()
{
	bool theProgramIsOn = true;
	bool correct;
	int choice;
	int choice2;
	int choice3;
	int choice4;
	std::string doYouWantToPrintAllBase;
	std::string registrationNumber;
	std::vector <std::string> bazaVector;
	

	while (theProgramIsOn == true)
	{
		updateVector(bazaVector);
		drawMainMenu();
		std::cin >> choice;
		cinInt(choice);
		if (choice == 1)
		{
			Vechicle* wsk;
			bool correct = true;
			bool check4 = true;
			bool WasType = false;
			bool checkID = false;
			std::string marka;
			std::string model;
			std::string regiNum;
			std::string firstInf;
			std::string secondInf;
			std::string thirdInf;
			int firstInfint;
			int secondInfint;
			int thirdINfint;
			int mil;
			int IDnumber;
			
			enterTypeOfCar();
			while (check4 == true)
			{
				std::cin >> choice4;
				cinInt(choice4);
				if (choice4 == 1)
				{
					PersonalCar car;
					car.setType("PersonalCar");
					printQuestionMarka();
					std::cin >> marka;
					car.setMarka(marka);
					printQuestionModel();
					std::cin >> model;
					std::cout << std::endl;
					car.setModel(model);
					checkTypesOfCars(marka, model, "PersonalCar", WasType,firstInf,secondInf,thirdInf);
					if (WasType == true)
					{
						firstInfint = std::stoi(firstInf);
						secondInfint = std::stoi(secondInf);
						thirdINfint = std::stoi(thirdInf);
						car.setNumberOfPassegers(firstInfint);
						car.setEngineCapacity(secondInfint);
						car.setWeight(thirdINfint);
						printType("numer rejestracyjny");
						std::cin >> regiNum;
						car.setRegistrationNumber(regiNum);
						printType("przebieg");
						std::cin >> mil;
						car.setMileage(mil);
						car.typeOwner(bazaVector,correct);
					}
					else
					{
						std::cin >> car;
						car.typeOwner(bazaVector,correct);
					}
					if (correct == true)
					{
						car.getIDnumber(IDnumber);
						wsk = &car;
						wsk->printData();
						wsk->saveVechicle();
						car.~PersonalCar();
						printSaveData();
					}
					else
					{
						std::cout << "niepoprawne dane..." << std::endl;
					}
					check4 = false;
				}
				else if (choice4 == 2)
				{
					Truck tru;
					tru.setType("Truck");
					printQuestionMarka();
					std::cin >> marka;
					tru.setMarka(marka);
					printQuestionModel();
					std::cin >> model;
					std::cout << std::endl;
					tru.setModel(model);
					checkTypesOfCars(marka, model, "Truck", WasType,firstInf, secondInf, thirdInf);
					if (WasType == true)
					{
						secondInfint = std::stoi(secondInf);
						thirdINfint = std::stoi(thirdInf);
						if (firstInf == "yes")
						{
							firstInf = "tak";
						}
						else
						{
							firstInf = "nie";
						}
						tru.setIsThereATrailer(firstInf);
						tru.setWeight(secondInfint);
						tru.setMaximumLoad(thirdINfint);
						printType("numer rejestracyjny");
						std::cin >> regiNum;
						tru.setRegistrationNumber(regiNum);
						printType("przebieg");
						std::cin >> mil;
						tru.setMileage(mil);
						tru.typeOwner(bazaVector,correct);
					}
					else
					{
						std::cin >> tru;
						tru.typeOwner(bazaVector,correct);
					}
					if (correct == true)
					{
						wsk = &tru;
						wsk->printData();
						wsk->saveVechicle();
						tru.~Truck();
						printSaveData();
					}
					else
					{
						std::cout << "niepoprawne dane..." << std::endl;
					}
					check4 = false;
				}
				else if (choice4 == 3)
				{
					Motorbike mot;
					mot.setType("MotorBike");
					printQuestionMarka();
					std::cin >> marka;
					mot.setMarka(marka);
					printQuestionModel();
					std::cin >> model;
					std::cout << std::endl;
					mot.setModel(model);
					checkTypesOfCars(marka, model, "MotorBike", WasType, firstInf, secondInf, thirdInf);
					if (WasType == true)
					{
						firstInfint = std::stoi(firstInf);
						secondInfint = std::stoi(secondInf);
						thirdINfint = std::stoi(thirdInf);
						mot.setWeight(firstInfint);
						mot.setAmountOfWheels(secondInfint);
						mot.setAmountOfPassagers(thirdINfint);
						printType("numer rejestracyjny");
						std::cin >> regiNum;
						mot.setRegistrationNumber(regiNum);
						printType("przebieg");
						std::cin >> mil;
						mot.setMileage(mil);
						mot.typeOwner(bazaVector,correct);
					}
					else
					{
						std::cin >> mot;
						mot.typeOwner(bazaVector,correct);
					}
					if (correct == true)
					{
					wsk = &mot;
					wsk->printData();
					wsk->saveVechicle();
					mot.~Motorbike();
					printSaveData();
					}
					else
					{
						std::cout << "niepoprawne dane..." << std::endl;
					}
					check4 = false;
				}
				else
				{
					std::cout << std::endl << "niepoprawna komenda..." << std::endl;
				}
			}
		}
		else if (choice == 2)
		{
			bool check1 = true;
			readBase(bazaVector);
			drawDoYouWantToPrint();
			while (check1 == true)
			{
				std::cin >> doYouWantToPrintAllBase;
				if (doYouWantToPrintAllBase == "TAK" || doYouWantToPrintAllBase == "tak")
				{
					printAllBase(bazaVector);
					check1 = false;
				}
				else if (doYouWantToPrintAllBase == "NIE" || doYouWantToPrintAllBase == "nie")
				{
					check1 = false;
				}
				else
				{
					std::cout << std::endl << "niepoprawna komenda..." << std::endl;
				}
			}
		}
		else if (choice == 3)
		{
			bool check2 = true;
			enterRegistrationNumber();
			std::cin >> registrationNumber;
			searchRegistrationNumber(registrationNumber, correct);
			if (correct == true)
			{
			drawWhatYouWantToDoNextRegistrationNumber();
			cinInt(choice2);
				while (check2 == true)
				{
					if (choice2 == 1)
					{
						printRegistrationNumber(registrationNumber);
						check2 = false;
					}
					else if (choice2 == 2)
					{
						changeOwnerRegistrationNumber(registrationNumber,bazaVector);
						check2 = false;
					}
					else if (choice2 == 3)
					{
						deleteVechicleRegistrationNumber(registrationNumber);
						check2 = false;
					}
					else if (choice2 == 4)
					{
						check2 = false;
					}
					else
					{
						std::cout << std::endl << "niepoprawna komenda..." << std::endl;
					}
				}
			}
			else
			{
				std::cout << "niepoprawnie wprowadzone dane..." << std::endl;
			}
		}
		else if (choice == 4)
		{
			bool check3 = true;
			std::string doYouWantToPrint;
			enterTypeOfCar();
			std::cin >> choice3;
			cinInt(choice3);
			{
				if (choice3 == 1)
				{
					readBaseTypeOfCar(1);
					drawDoYouWantToPrint();
					while (check3 == true)
					{
						std::cin >> doYouWantToPrint;
						if (doYouWantToPrint == "TAK" || doYouWantToPrint == "tak")
						{
							printTypeOfCar(1);
							check3 = false;
						}
						else if (doYouWantToPrint == "NIE" || doYouWantToPrint == "nie")
						{
							check3 = false;
						}
						else
						{
							std::cout << std::endl << "niepoprawna komenda..." << std::endl;
						}
					}
				}
				else if (choice3 == 2)
				{
					readBaseTypeOfCar(2);
					drawDoYouWantToPrint();
					std::cin >> doYouWantToPrint;
					while (check3 == true)
					{
						if (doYouWantToPrint == "TAK" || doYouWantToPrint == "tak")
						{
							printTypeOfCar(2);
							check3 = false;
						}
						else if (doYouWantToPrint == "NIE" || doYouWantToPrint == "nie")
						{
							check3 = false;
						}
						else
						{
							std::cout << std::endl << "niepoprawna komenda..." << std::endl;
						}
					}
				}
				else if (choice3 == 3)
				{
					readBaseTypeOfCar(3);
					drawDoYouWantToPrint();
					while (check3 == true)
					{
						std::cin >> doYouWantToPrint;
						if (doYouWantToPrint == "TAK" || doYouWantToPrint == "tak")
						{
							printTypeOfCar(3);
							check3 = false;
						}
						else if (doYouWantToPrint == "NIE" || doYouWantToPrint == "nie")
						{
							check3 = false;
						}
						else
						{
							std::cout << std::endl << "niepoprawna komenda..." << std::endl;
						}
					}
				}
				else
				{
					std::cout << std::endl << "niepoprawna komenda..." << std::endl;
				}
			}
			
		}
		else if (choice == 5)
		{
			int WhatYoiWantToDoNextUser;
			bool check5 = true;
			bool ifCorrect = true;
			std::string IDNumber = "";
			readBaseUser(IDNumber,ifCorrect,bazaVector);
			if (ifCorrect == true)
			{
			drawWhatYoiWantToDoNextUser();
				while (check5 == true)
				{
					std::cin >> WhatYoiWantToDoNextUser;
					if (WhatYoiWantToDoNextUser == 1)
					{
						printUserCars(IDNumber, bazaVector);
						check5 = false;
					}
					else if (WhatYoiWantToDoNextUser == 2)
					{
						enterRegistrationNumber();
						std::cin >> registrationNumber;
						if (ifCorrect == true)
						{
							deleteVechicleRegistrationNumber(registrationNumber);
						}
						check5 = false;
					}
					else if (WhatYoiWantToDoNextUser == 3)
					{
						check5 = false;
					}
					else
					{
						std::cout << std::endl << "niepoprawna komenda..." << std::endl;
					}
				}
			}
			else
			{
				std::cout << "niepoprawne dane..." << std::endl;
			}
		}
		else
		{
			drawEnd();
			theProgramIsOn = false;
		}
	}
	return 0;
}