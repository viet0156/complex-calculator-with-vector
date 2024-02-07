/**
 * Rechnen mit komplexen Zahlen
 * 
 * Addition und Multiplikation von komplexen Zahlen
 * Berechnung von Skalarprodukt und Bogenmaß 
 * angepasste Eingabe und Ausgabe
 * 
 * @author Viet Pham
*/

#include <iostream>

class KomplexeZahlen {

    public:
        
        KomplexeZahlen();

        
        KomplexeZahlen operator+(KomplexeZahlen c2);
        KomplexeZahlen operator*(KomplexeZahlen c2);
        KomplexeZahlen operator*(double s);

        friend std::istream &operator>>(std::istream &eingabe, KomplexeZahlen &kmplx);
        friend std::ostream &operator<<(std::ostream &ausgabe, KomplexeZahlen const &kmplx);

        double bogenmaß();
    
    private:

        double real, img;
    

};