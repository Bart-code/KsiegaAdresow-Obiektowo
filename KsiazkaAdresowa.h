#include <iostream>
#include <vector>
#include <sstream>
#include "windows.h"
#include <fstream>

#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownik;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    string nazwaPlikuZUzytkownikami;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
public:
        KsiazkaAdresowa();
        void rejestracjaUzytkownika();
        void wypiszWszystkichUzytkownikow();
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
        string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
        string konwerjsaIntNaString(int);
        bool czyPlikJestPusty(fstream &plikTekstowy);
};
