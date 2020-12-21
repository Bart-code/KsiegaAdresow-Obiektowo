#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string , int );
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string);
    string pobierzNazwePliku();
    int wrocNumerLiniiSzukanegoAdresata(int);
    void usunPlik(string);
    void zmienNazwePliku(string, string);
    void usunWybranegoAdresataZPliku(int);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat);
    void edytujWybranegoAdresataWPliku(int, string);

public:
    PlikZAdresatami(string nazwaPliku)
    : PlikTekstowy(nazwaPliku)
    {
       idOstatniegoAdresata=0;
    };
    void dopiszAdresataDoPliku(Adresat adresat);
    void zapiszWszystkichAdresatowDoPliku(vector <Adresat> &adresaci);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    int usunAdresata(vector <Adresat> &adresaci);
    void edytujAdresata(vector <Adresat> &adresaci);
};

#endif
