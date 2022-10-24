#include <iostream>
#include <queue.h>
#include <string.h>
#include "Puerta.h"
#include "Camara.h"
#include "../AVL/Node.h"
#include "../src/List.h"

using namespace std;

#ifndef ESTRATEGIA

class Estrategia
{
protected:
    int minerales;
    int state;
    int desicion;
    string nombre;

    Queue<Camara> lugaresRecorridos;// = new queue<Camara>();


public:
    Estrategia();

    Queue<Camara> getLugaresRecorridos(){
        return this->lugaresRecorridos;
    }

    void setNombre(string pNombre){
        this->nombre = pNombre;
    }
    
};

#endif
