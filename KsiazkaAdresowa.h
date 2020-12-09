#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMeneger.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMeneger uzytkownikMeneger;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami)
    : uzytkownikMeneger(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMeneger.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    bool czyZalogowano();
};

#endif
