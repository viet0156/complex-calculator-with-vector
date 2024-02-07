/**
 * Vektor zum Speichern von n Komplexen Zahlen
 * 
 * Zeiger reserviert Speicher 
 * at gibt Komplexe Zahl an der Stelle n des Vektors aus
 * einfügen von Komplexen Zahlen im Vektor 
 * @see KomplexeZahlen
 * 
 * @author Viet Pham
*/

#include "KomplexeZahlen.hpp"

class KomplexND {

    KomplexeZahlen c;

    public:
        KomplexeZahlen *z = nullptr;
        KomplexND();
        ~KomplexND();
        void erzeugen(int s);
        int get_size();
        void einfügen();
        KomplexeZahlen at(int v);
        
    private:
        int size;
};