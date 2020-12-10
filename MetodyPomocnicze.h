#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H


#include <iostream>
#include <sstream>

using namespace std;

class MetodyPomocnicze
{

public:
    static string konwersjaIntNaString(int);
    static string wczytajLinie();
    static char wczytajZnak();
    static int konwersjaStringNaInt(string);
};

#endif // METODYPOMOCNICZE_H
