#include <iostream>
#include "Estrategia.h"

using namespace std;

#ifndef RIESGOSO

#define RIESGOSO 1

class Riesgoso: public Estrategia{
    private:
        Node<Camara> *nodeAux = new Node<Camara>();
    public:
        Riesgoso(){
            this->setNombre("Riesgoso");
        }
        
        Node<Camara>* criterioTunel(Node<Camara>* pNodeCam){
            if(pNodeCam->profundidad > nodeAux->profundidad){ // elige al de mayor profundidad con mejor chance
                nodeAux = pNodeCam;
            }
            if (pNodeCam->right){
                criterioTunel(pNodeCam->right);
            }else if (pNodeCam->left){
                criterioTunel(pNodeCam->left);
            }
            return nodeAux;
        }
        
        Puerta* validateCriterioPuerta(List<Puerta> pPuertas) 
        {
            int mayor = 0;
            int pos;
            for (int i = 0; i < pPuertas.getSize(); i++)
            {   
                int aux = pPuertas.find(i)->getTunel()->Theight();
                if (aux > mayor){
                    mayor = aux;
                    pos = i;
                    
                }
            }
            return pPuertas.find(pos);
        }
};
#endif