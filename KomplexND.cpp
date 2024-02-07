#include "KomplexND.hpp"

/**
 * Erzeugung eines leeren Konstruktors
*/
KomplexND::KomplexND(){



}

/**
 * Pointer z reserviert Speicher
 * 
 * @param s dient als Anzahl der zu reservierende Speicher
 * @param s vergibt den Wert an size
*/
void KomplexND::erzeugen(int s){

    z = new KomplexeZahlen[s];
    
    size = s;

};

/**
 * Iterierte Eingabe der Elemente
 * 
 * @var c als Initialisierung einer kmplx Zahl an i-ten Speicherstelle
*/
void KomplexND::einfügen(){

    std::cout << "Eingabe" << std::endl;

    for (int i = 0; i < size; i++){

        std::cin >> c;
        z[i] = c;

    }

};

/**
 * Größe des Vektors
 * 
 * @return size gibt die Größe des Vektors aus
*/
int KomplexND::get_size(){

    return size;

};

/**
 * Element an der Stelle v
 * 
 * @param v ist die v-te Speicherstelle
 * @return z gibt das Element an der Stelle v aus 
*/
KomplexeZahlen KomplexND::at(int v){

    return z[v];

};

/**
 * Destruktor
 * 
 * löscht den Vektor nach der Verwendung
*/
KomplexND::~KomplexND(){

    delete [] z;

};



