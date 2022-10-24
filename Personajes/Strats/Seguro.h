#include <iostream>
#include "Estrategia.h"

using namespace std;


#ifndef PASIVO

#define PASIVO 1

class Seguro: public Estrategia{
    private:
        Node<Camara> *node_temp = new Node<Camara>();
    public:
        Seguro(){
            this->setNombre("Pasivo");
        }
        
        Node<Camara>* criterioTunel(Node<Camara>* pNodeCam){

            // if(pNodeCam->getCantidadDeMaterial() > node_temp->camara->getCantidadDeMaterial()){ //Entra en la primer camara con material que encuentr
            //     node_temp = pNodeCam;
                
            // }
            if (pNodeCam->right){
                criterioTunel(pNodeCam->right);
            }else if (pNodeCam->left){
                criterioTunel(pNodeCam->left);
            }
            return node_temp;
        }
        
        Puerta* validateCriterioPuerta(List<Puerta> pPuertas) 
        {
            int mayor = 0;
            int pos;
            for (int i = 0; i < pPuertas.getSize(); i++)
            {   
                int temp = pPuertas.find(i)->getTunel()->Theight();
                if (temp > mayor){
                    mayor = temp;
                    pos = i;
                }
            }
            return pPuertas.find(pos);
        }
};
#endif