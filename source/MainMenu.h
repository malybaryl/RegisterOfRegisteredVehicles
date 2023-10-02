#pragma once

/**@brief
* Funkcja wyświetla główne menu na ekranie.
*/
void drawMainMenu();

/**@brief
* Funkcja wyświetla ekran końcowy na ekranie.
*/
void drawEnd();

/**@brief
* Funkcja wyświetla napis "CZY CHCESZ TE DANE WYDRUKOWAĆ? TAK/NIE" na ekranie.
*/
void drawDoYouWantToPrint();

/**@brief
* Funkcja wyświetla napis "WPROWADZ NUMER REJESTRACYJNY" na ekranie.
*/
void enterRegistrationNumber();

/**@brief
* Funkcja wyświetla menu dla znalezionego już kokretnego pojazdu na ekranie.
*/
void drawWhatYouWantToDoNextRegistrationNumber();

/**@brief
* Funkcja wyświetla meny wyboru rodzaju pojazdu na ekranie.
*/
void enterTypeOfCar();

/**@brief
* Funkcja wyświetla menu dla kokretnych pojazdów danego właściciela na ekranie.
*/
void drawWhatYoiWantToDoNextUser();

/**@brief
* Funkcja wyświetla napis "Wprowadz Marke pojazdu: " na ekranie.
*/
void printQuestionMarka();

/**@brief
* Funkcja wyświetla napis "Wprowadz Model pojazdu: " na ekranie.
*/
void printQuestionModel();

/**@brief
* Funkcja wyświetla napis "Dane zostaly zapisane: " na ekranie.
*/
void printSaveData();

/**@brief
* Funkcja wyświetla napis "Wprowadz " i napis wprowadzony przez użytkownika na ekranie.
* @param n string napis który chcemy wyświetlić
*/
void printType(std::string n);