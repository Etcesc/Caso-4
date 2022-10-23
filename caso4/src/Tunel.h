#include <iostream>
#include "Node.h"

using namespace std;

template <class T>
class Tunel
{
private:
    int cantidadMineral;
    //int distanciaGeneral; no se si usar este o distanciaATunel
    int distanciaATunel; // distancia para llegar a este tunel. EL ACUMULADO NUNCA PUEDE LLEGAR A SER 720 (ver especificacion en seccion camaras de las instrucciones del caso)
    Node<T>* camaraRaiz; // entrada principal del tunel

public:
    Tunel(){
    };

    void setDistanciaATunel(int pDistancia){
        int distanciaATunel = pDistancia;
    }


    int getDistanciaATunel(){
        return this->distanciaATunel;
    }

};

