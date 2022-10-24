#include <iostream>
#include "../Estrategia.h"

using namespace std;


#ifndef NORMAL

#define NORMAL 1

class Normal: public Strategy{
    public:
        Normal(){
            this->setNombre("Normal");
        }
        
        AVLNode* criterioTunel(AVLNode* pNodeCam){
            if (!pNodeCam){
                return NULL;
            }
            if(pNodeCam->camara->getCantidadDeMaterial()){ //Entra en la primer camara con material que encuentr
                //cout << "crit tunel " << pNodeCam->camara->getCantidadDeMaterial() <<  endl;
                return pNodeCam;
            }
            if (pNodeCam->right){
                criterioTunel(pNodeCam->right);
            }else if (pNodeCam->left){
                criterioTunel(pNodeCam->left);
            }
            
            
        }
        
        Puerta* validateCriterioPuerta(List<Puerta> pPuertas) 
        {
            for (int i = 0; i < pPuertas.getSize(); i++)
            {
                if(pPuertas.find(i)->getTunel()){ 
                    return pPuertas.find(i);
                }    
            }

            return NULL;
        }
};
#endif