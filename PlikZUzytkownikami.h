#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZUzytkownikami : public PlikTekstowy
{
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);


public:

    PlikZUzytkownikami(string nazwaPliku)
    : PlikTekstowy(nazwaPliku)
    {
    };
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku(void);
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);

};

#endif
