
#include<iostream>
using namespace std;

class Personaje
{
protected:
    int velocidad;
    int cantMaximaUnidades;
    bool puedeCambiarTuneles;
    
public:
    Personaje(/* args */);
    ~Personaje();

    // ---------------------------------------
    int getVelocidad(){
        return velocidad;
    }

    void setVelocidad(int pVelocidad){
        this->velocidad = pVelocidad;
    }
    // ---------------------------------------
    int getCantMaximaUnidades(){
        return cantMaximaUnidades;
    }

    void setCantMaximaUnidades(int pCantidad){
        this->cantMaximaUnidades = pCantidad;
    }
    // ---------------------------------------
    bool getPuedeCambiar(){
        return puedeCambiarTuneles;
    }

    void setPuedeCambiar(bool pPuede){
        this->puedeCambiarTuneles = pPuede;
    }
    
};

