#include "KomplexND.hpp"

int main(){
    
    // Erzeugung der Objekte
    KomplexND a,b, erg;
    KomplexeZahlen c1, c2,c3;

    // Variabeln
    short auswahl;
    double skalar, bogenmaß;
    int grß;

    // Menü
    std::cout << " " << std::endl;
    std::cout << "Berechnung von Komplexen Zahlen" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "[1] Addition" << std::endl;
    std::cout << "[2] Multiplikation" << std::endl;
    std::cout << "[3] Skalar" << std::endl;
    std::cout << "[4] Bogenmaß" << std::endl;
    std::cout << "[5] Vektorberechnung" << std::endl;
    std::cout << " :";
    std::cin >> auswahl;

    
    // Operationen
    if(auswahl < 6){

        switch(auswahl){

            case 1:
                std::cout << "Addition" << std::endl;

                std::cout << "c1 = " ;
                std::cin >> c1;

                std::cout << "c2 = ";
                std::cin >> c2;

                c3 = c1.operator+(c2);

                std::cout << c3 << std::endl;
            break;

            case 2:
                std::cout << "Multiplikation" << std::endl;

                std::cout << "c1 = " ;
                std::cin >> c1;

                std::cout << "c2 = ";
                std::cin >> c2;

                c3 = c1.operator*(c2);

                std::cout << c3 << std::endl;
            break;

            case 3:
                std::cout << "Skalarprodukt" << std::endl;
                
                std::cout << "c1 = " ;
                std::cin >> c1;

                std::cout << "Skalar: ";
                std::cin >> skalar;

                c3 = c1.operator*(skalar);

                std::cout << c3 << std::endl;;
            break;

            case 4:
                
                std::cout << "Betrag & Bogenmaß" << std::endl;
                
                std::cout << "c1 = " ;
                std::cin >> c1;
                
                bogenmaß = c1.bogenmaß();

                std::cout << "Bogenmaß = " << bogenmaß << std::endl;

            break;

            case 5:
                std::cout << "Vektoren an kmplx Zahlen" << std::endl;
                std::cout << "N: ";
                std::cin >> grß;
                a.erzeugen(grß);
                b.erzeugen(grß);
                erg.erzeugen(grß);
                
                std::cout << "Vektor 1:" << std::endl;
                a.einfügen();

                std::cout << "  " << std::endl;

                std::cout << "Vektor 2:" << std::endl;
                b.einfügen();
                
                // Addition von zwei Vektoren
                for (int i = 0; i <= a.get_size(); ++i){

                    erg.z[i] = a.at(i) + b.at(i);

                }
        
                
                std::cout << "  " << std::endl;
                
                // Ausgabe des Ergebnis - Vektor
                std::cout << "Ergebnis:" << std::endl;
                for (int j = 0; j < erg.get_size(); ++j){

                    std::cout << erg.at(j) << std::endl;
            
                }

            break;

        } 

    } else {

        std::cout << "Abbruch, keine Aufgabe wurde gewählt" << std::endl;
        std::cout << "Programm beendet !" << std::endl;

    }

};