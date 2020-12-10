#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"
#include <iostream>
#include <vector>
#include <sstream>
#include "windows.h"
#include <fstream>

using namespace std;

class AdresatMeneger
{
    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat);

public:
    AdresatMeneger(string nazwaPlikuZAdresatami)
    : plikZAdresatami(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata=0;
    };

    void dodajAdresata();
    void ustawIdZalogowanegoUzytkownika(int);
    void wyswietlWszystkichAdresatow();
};

#endif
