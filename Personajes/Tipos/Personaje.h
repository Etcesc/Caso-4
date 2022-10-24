#include <string>
//#include <queue.h>
#include "../Mina/Camara.h"
#include "../Mina/Puerta.h"
#include "../caso4/src/List.h"
//#include "Arbol.h"
#include "Estrategia.h"

using namespace std;

class Personaje
{
protected:
    string nombre;
    int velocidad;
    int unidadesActuales; // unidades que recoge
    int cantMaximaUnidades; // unidades maximas que puede cargar
    bool puedeCambiarTuneles;
    Estrategia *estrategiaActual;

    int state; /*
                0 - en raiz
                1 - en puerta
                2 - a traves de un tunel
                3 - dentro una una camara
                4 - tomando desicion
                5 - mina
                6 - se mueve
                */ 
    
public:
    Personaje(){//(string pNombre, int pVelocidad, int pUnidadesActuales, int pCantMaxUnits, bool pPuedeCamb){
        // this->nombre = pNombre;
        // this->velocidad = pVelocidad;
        // this->unidadesActuales = 0;
        // this->cantMaximaUnidades = pCantMaxUnits;

        puedeCambiarTuneles = false; // siempre se inicia en false a menos que otro personaje lo requiera True.
                                     // En ese caso, ejecuta un metodo set de este atributo y convierte a True.
    }
    
    string getNombre(){
        return this->nombre;
    }

    void setNombre(string pNombre){
        this->nombre = pNombre;
    }


    int getVelocidad(){
        return this->velocidad;
    }

    void setVelocidad(int pVelocidad){
        this->velocidad = pVelocidad;
    }


    int getCantMaximaUnidades(){
        return cantMaximaUnidades;
    }

    void setCantMaximaUnidades(int pCantidad){
        this->cantMaximaUnidades = pCantidad;
    }
    

    bool getPuedeCambiar(){
        return this->puedeCambiarTuneles;
    }

    void setPuedeCambiar(bool pPuede){
        this->puedeCambiarTuneles = pPuede;
    }


    int getState(){
        return this->state;
    }

    void setState(int pState){
        this->state = pState;
        cout << to_string(getState()); // muestra el estado que tiene el personaje actual
    }

    void seMueve(int profundidad){
        clock_t presente = clock();
        double tiempo = profundidad / this->getVelocidad();
        this->setState(6); // se mueve

        // mientras el tiempo actual sea menor al tiempo de juego
        // siga ejecutando.
    }

    void serEstrategia (Estrategia *pEstrategia){
        this -> estrategiaActual = pEstrategia;
    }

    Estrategia* getEstrategia(){
        return this -> estrategiaActual;
    }


    // ------------------------------- FUNCIONES DE JUEGO
    int minar(Arbol<Camara> *pArbol, Camara *pCamaraActual){
        int profundidad = 0;
        while(pArbol->getSize() > 0){
            profundidad += pArbol->getSize();
        }
        unidadesActuales += pCamaraActual->getUnidadesMineral(); // suma las unidades de mineral
        return 25;
    } // INCOMPLETO. falta implementacion dentro de arbol

};