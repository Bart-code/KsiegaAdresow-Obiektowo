#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
    int idOstatniegoAdresata;
    const string nazwaPlikuZAdresatami;
    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string , int );
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string);
    string pobierzNazwePliku();
    int wrocNumerLiniiSzukanegoAdresata(int);
    void usunPlik(string);
    void zmienNazwePliku(string, string);
    int zwrocNumerLiniiSzukanegoAdresata(int);
    void usunWybranaLinieWPliku(int);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI)
    : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI)
    {
       idOstatniegoAdresata=0;
    };
    void dopiszAdresataDoPliku(Adresat adresat);
    void zapiszWszystkichAdresatowDoPliku(vector <Adresat> &adresaci);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    int usunAdresata(vector <Adresat> &adresaci);
    int podajIdWybranegoAdresata();

};

#endif
