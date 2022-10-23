#include <iostream>
#include <cstdlib>
#include "Node.h"

#ifndef Camara

using namespace std;

template <class T>
class Camara : public Node
{
private:
    int potencialMinado;
    int unidadesMineral;
    int profundidadDeCamara;

    int profundidadSuperior; // valor de profundidad de arriba


public:
Camara(){
    //unidadesMineral = setUnidadesMineral();
    // falta profundidad
    // falta potencial de minado
};

    int getPotencialMinado(){
        return this->potencialMinado;
    }

    // las camaras de mayor potencial SIEMPRE estan a la IZQUIERDA
    void setPotencialMinado(){ // define el potencial de minado automaticamente dependiendo de 
                               // distancia y cantidad de mineral dentro de camara.
        this->potencialMinado = this->getUnidadesMineral() * this->getProfundidadCamara();
        return;
    }

    int getUnidadesMineral(){
        return this->unidadesMineral;
    }

    void setUnidadesMineral(){
        int randomUnidades;
        srand(time(0));  // inicia semilla generadora de numero
        for(int i=0;i<10;i++) // hace 10 calculos para obtener un random
            randomUnidades = (rand() % 20); 
        this->unidadesMineral = randomUnidades+1; // +1 para asegurarse que nunca va a ser 0
    }


    int getProfundidadCamara(){
        return this->profundidadDeCamara;
    }

    void setProfundidadCamara(int pProfundidad){
        this->profundidadDeCamara = pProfundidad;
    }
};

#endif