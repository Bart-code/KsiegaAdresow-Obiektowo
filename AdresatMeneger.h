#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"
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
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    int idUsunietegoAdresata;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat);
    void wyswietlIloscWyszukanychAdresatow(int);


public:
    AdresatMeneger(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami),
    ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
        fstream plikTekstowy;
        plikTekstowy.open(nazwaPlikuZAdresatami.c_str(), ios::out|ios::app);
        plikTekstowy.close();
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};

#endif
