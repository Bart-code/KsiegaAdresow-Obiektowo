#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <vector>
#include <sstream>
#include "windows.h"
#include <fstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMeneger
{
    int idZalogowanegoUzytkownik;
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
    };
>>>>>>> feature/setup-filename-at-begining
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
};

#endif
