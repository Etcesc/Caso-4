#include <iostream>
#include <cstdlib>

#ifndef CAMARA
#define CAMARA 1
using namespace std;

class Camara{
    private:
        int unidadesMineral;
        int potencialMinado;
        int profundidadDeCamara;

public:

    int getPotencialMinado(){
        return this->potencialMinado;
    }

    // las camaras de mayor potencial SIEMPRE estan a la IZQUIERDA
    void setPotencialMinado(){ // define el potencial de minado automaticamente dependiendo de 
                               // distancia y cantidad de mineral dentro de camara.
        this->potencialMinado = this->getUnidadesMineral() * this->profundidadDeCamara;
        return;
    }

    int getUnidadesMineral(){
        return this->unidadesMineral;
    }

    void setUnidadesMineral(int pCant){
            this->unidadesMineral = pCant;
        }


    int getProfundidadCamara(){
        return this->profundidadDeCamara;
    }

    void setProfundidadCamara(int pProfundidad){
        this->profundidadDeCamara = pProfundidad;
    }

    void decreaseMateriales(int pCant){
        if (this->unidadesMineral-pCant >= 0){ 
            this->unidadesMineral -= pCant;


        }else{
            this->unidadesMineral = 0;
        }
    }
};

#endif