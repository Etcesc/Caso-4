#include <string>
#include "List.h"

using namespace std;

class Personaje
{
protected:
    string nombre;
    int velocidad;
    int cantMaximaUnidades;
    bool puedeCambiarTuneles;

    int state; // 1 - entra a mina
    
public:
    Personaje(){ //(string pNombre, int pVelocidad, int pCantMaxUnits){
    // this->nombre = pNombre;
    // this->velocidad = pVelocidad;
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
    }


    // ------------------------------- FUNCIONES DE JUEGO
    void minar(double pTiempo, int pState){
        return;
    } // INCOMPLETO. falta implementacion dentro de arbol

};


