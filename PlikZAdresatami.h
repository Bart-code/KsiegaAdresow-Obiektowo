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
    const string nazwaPlikuZAdresatami;
    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string , int );
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string);


public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI)
    : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZPliku(void);
    void zapiszWszystkichAdresatowDoPliku(vector <Adresat> &adresaci);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

};

#endif
