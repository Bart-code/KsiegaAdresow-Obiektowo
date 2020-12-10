#ifndef UZYTKOWNIKMENEGER_H
#define UZYTKOWNIKMENEGER_H

#include <iostream>
#include <vector>
#include <sstream>
#include "windows.h"
#include <fstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class UzytkownikMeneger
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMeneger(string nazwaPlikuZUzytkownikami)
<<<<<<< HEAD
    : plikZUzytkownikami(nazwaPlikuZUzytkownikami){}
=======
    : plikZUzytkownikami(nazwaPlikuZUzytkownikami)
    {
        idZalogowanegoUzytkownika=0;
    };
>>>>>>> feature/setup-filename-at-begining
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();

};

#endif
