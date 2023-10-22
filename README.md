# Rejestr Zarejestrowanych Pojazdów

## Opis

Program "Rejestr Zarejestrowanych Pojazdów" to aplikacja napisana w języku C++, która służy do zarządzania bazą danych zarejestrowanych pojazdów. Program umożliwia użytkownikowi rejestrowanie nowych pojazdów, przeglądanie istniejących wpisów, zmianę właścicieli pojazdów, wyszukiwanie konkretnych pojazdów oraz usuwanie wpisów. Ponadto, program pozwala na generowanie wydruków wybranych pojazdów do pliku "wydruk.txt". Działa na zasadzie interaktywnej konsoli, co ułatwia użytkownikowi zarządzanie danymi pojazdów. Więcej na temat projektu możesz przeczytać na witrynie: https://malybaryl.github.io/RejestrZarejestrownychPojazdow/ lub pdf: Rejestr Zarejestrowanych Pojazdów - Kacper Baryłowicz.pdf.

## Funkcje

### Rejestracja Nowego Pojazdu

1. Po uruchomieniu programu, użytkownik ma do wyboru opcję "Rejestracja nowego pojazdu".
2. Może wybrać rodzaj pojazdu, który chce zarejestrować, takie jak samochód osobisty, motocykl, czy inny.
3. Następnie program prosi o wprowadzenie szczegółowych informacji o pojeździe, w zależności od rodzaju pojazdu (marka, model, numer rejestracyjny, przebieg, itp.).
4. Po wprowadzeniu danych, program wyświetla je na ekranie i zapisuje w pliku tekstowym "baza.txt".

### Podgląd Zarejestrowanych Pojazdów

1. Po zakończeniu rejestracji lub na początku działania programu, użytkownik wraca do menu głównego, gdzie ma możliwość wyboru opcji "Podgląd zarejestrowanych pojazdów".
2. Program wyświetla listę wszystkich wcześniej zarejestrowanych pojazdów.
3. Użytkownik ma opcję wygenerowania wydruku danych, które zostają zapisane w pliku "wydruk.txt", lub powrotu do menu głównego.

### Wyszukanie Konkretnego Pojazdu

1. Opcja "Wyszukanie konkretnego pojazdu" pozwala użytkownikowi wyszukać pojazd po numerze rejestracyjnym.
2. Jeśli numer rejestracyjny zostanie znaleziony, program wyświetla dane pojazdu i oferuje różne operacje, takie jak zapisanie danych pojazdu do pliku "wydruk.txt", edycja danych lub usunięcie pojazdu.
3. W przypadku błędnie wprowadzonego numeru rejestracyjnego, program wyświetla komunikat o błędzie i wraca do menu głównego.

### Wyszukanie Pojazdów Danego Typu

1. Opcja "Wyszukanie pojazdów danego typu" umożliwia użytkownikowi wyszukiwanie pojazdów określonego rodzaju, np. samochodów osobistych.
2. Znalezione pojazdy są wyświetlane, a użytkownik ma możliwość wygenerowania wydruku danych, które zostaną zapisane w pliku "wydruk.txt".
3. Po wygenerowaniu wydruku lub niewygenerowaniu, program wraca do menu głównego.

### Wyszukanie Pojazdów Danego Właściciela

1. Opcja "Wyszukanie pojazdów danego właściciela" umożliwia użytkownikowi wyszukanie pojazdów należących do określonego właściciela.
2. Użytkownik wprowadza dane właściciela, takie jak imię, nazwisko, data urodzenia, a następnie program wyświetla pojazdy należące do tego właściciela i dostępne operacje (zapisanie do "wydruk.txt", usunięcie pojazdu).
3. Po zakończeniu operacji, program powraca do menu głównego.

## Używanie Programu

1. Uruchom program i wybierz odpowiednią opcję z menu głównego (1-5), aby zarządzać pojazdami.
2. Podążaj za instrukcjami wyświetlanymi na ekranie, aby wprowadzać i edytować dane pojazdów.
3. Program jest przyjazny dla użytkownika i umożliwia łatwe zarządzanie bazą pojazdów.

## Budowanie Programu

1. Za pomocą Cmake (wymagane jest zainstalowanie Cmake): 
                                                                                           
   1.1 Dla Linux (przykład dla: Ubuntu):   
                                                           
       Otwórz konsole w katalogu z programem i wpisz:    
                                               
       cd build                                              
       cmake ..                                 
       make                                                           
       cd source                                               
       ./run                                          
   1.2 Dla Windows (przykład dla: MinGW64) 
                                                  
       Otwórz konsole w katalogu z programem i wpisz:
   
       cd build      
       cmake .. -G "MinGW Makefiles"      
       make         
       cd source         
       ./run.exe         

   1.3 Dla Windows (przykład dla: Visual Studio):
   
       Stwórz nowy projekt w Visualu. W katalogu source znajdziesz wszystkie pliki źródłowe.
       Zaznacz je i przeciągnij do aplikacji Visuala do zakładki Source Files. Naciśnij F5,
       albo zieloną strzałke u góry.
## Wymagania

Program nie ma dodatkowych zależności i może być uruchamiany na dowolnym systemie obsługującym C++.

## Autor

Autor: Kacper Baryłowicz                  
Kontakt: kacper.barylowicz@outlook.com
