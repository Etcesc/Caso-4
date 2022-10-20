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
    
public:
Personaje(){
    puedeCambiarTuneles = false;
}
    
    string getNombre(){
        return nombre;
    }


    void setNombre(string pNombre){
        this->nombre = pNombre;
    }


    int getVelocidad(){
        return velocidad;
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
        return puedeCambiarTuneles;
    }


    void setPuedeCambiar(bool pPuede){
        this->puedeCambiarTuneles = pPuede;
    }


    // ------------------------------- FUNCIONES DE JUEGO
    void movimiento(double pTiempo){
        return;
    } // INCOMPLETO
    
};


