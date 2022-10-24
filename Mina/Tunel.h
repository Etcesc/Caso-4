#include <string>
#include <iostream>
#include "../AVL/Arbol.h"

using namespace std;

#ifndef TUNEL
#define TUNEL 1 

class Tunel {
    private:
        Arbol *tunel = new Arbol();
        int largo;

    public:

        int getLargo(){
            return this->largo;
        }

        void inicializarNodo(){
            
            bool continuar = true;
            while(continuar){

                continuar = tunel->addNodo();                

            }
            
            tunel->root->profundidad = 0;
            tunel->root->camara->setMaterial(0);
            tunel->root->key = 0;

        }
        

        void preOrden(){
            tunel->preOrder(tunel->root);
            cout << "preorden\n" ;
        }

        void right(){
            tunel->coutRight(tunel->root->left);
            cout << "right\n" ;
        }
    
        Arbol* getTunel(){
            return this->tunel;
        }
};
#endif
