#ifndef ADRESATMENEGER_H
#define ADRESATMENEGER_H

#include "Adresat.h"
#include "MetodyPomocnicze.h"
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

    Adresat podajDaneNowegoAdresata();

public:
    AdresatMeneger();
    void dodajAdresata();
};

#endif
