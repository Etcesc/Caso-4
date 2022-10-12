#include "personaje.h"

using namespace std;


class Explorador: public Personaje{

    public:

        Explorador(/* args */);
        ~Explorador();
        // funcion para que camine
        // aqui hay una basica para herencia
        void camina(){
        }

        // funcion para que recoja
        void recoje(){
        }

        // funcion para que cambie tuneles
        void cambiaTunel(){
        }

};
