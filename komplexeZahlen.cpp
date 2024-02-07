#include <cmath>
#include "KomplexeZahlen.hpp"

KomplexeZahlen erg;

/**
 * Konstruktor 
 * Bei Erzeugung des Objekts, nimmt es die Werte null an
*/
KomplexeZahlen::KomplexeZahlen(){

    real = 0;
    img = 0;

};

/**
 * Überladung >>
 * Eingabe von einer kmplx Zahl
 * 
 * @param eingabe initialisiert die Attribute von kmplx
 * @param kmplx als Bezeichner der Klasse Komplexe Zahlen
 * @return eingabe 
*/
std::istream &operator>>(std::istream& eingabe, KomplexeZahlen& kmplx){
 
    eingabe >> kmplx.real >> kmplx.img;
    return eingabe;

};

/**
 * Überladung << 
 * Ausgabe einer kmplx Zahl
 * 
 * @param ausgabe überlädt den Operator über std::ostream
 * @param kmplx dient als Bezeichner für Klasse Komplexe Zahlen
 * @return ausgabe gibt die Komplexe Zahl in passender Form aus 
*/
std::ostream &operator<<(std::ostream &ausgabe, KomplexeZahlen const &kmplx){

    ausgabe << " = " << kmplx.real << " + i" << kmplx.img;
    return ausgabe;

};

/**
 * Überladung +
 * Addition von 2 kmplx Zahlen
 * 
 * @param c2 dient als 2.kmplx Zahl 
 * @return erg als Ergebnis 
*/
KomplexeZahlen KomplexeZahlen::operator+(KomplexeZahlen c2){

    erg.real = real + c2.real;
    erg.img = img + c2.img;

    return erg;

};

/**
 * Überladung *
 * Multiplikation von 2 kmplx Zahlen 
 * 
 * @param c2 dient als 2.kmplx Zahl
 * @return erg für das Ergebnis
*/
KomplexeZahlen KomplexeZahlen::operator*(KomplexeZahlen c2){

    erg.real = real * c2.real - img * c2.img;
    erg.img = real * c2.img + img * c2.real;
    return erg;

};

/**
 * weitere Überladung *
 * Skalarprodukt einer kmplx Zahl 
 * 
 * @param s als Skalar zum Multiplizieren von real / img Teil
 * @return erg für das Ergebnis
*/
KomplexeZahlen KomplexeZahlen::operator*(double s){

    erg.real = s * real;
    erg.img = s * img;
    return erg;

};

/**
 * Berechnung des Bogenmaßes einer kmplx Zahl
 * 
 * @return atan(real,img)
*/
double KomplexeZahlen::bogenmaß(){

    return atan2(real,img);

};


