#include <iostream>
#include "../Mina/Camara.h"


#define NODE 1

#ifndef Node

using namespace std;
template<class T>
class Node{
    public:   
    
    bool activado = true;
    int key;
    int altura;

    Camara *camara = new Camara();  

    int profundidad; // tuneles
    int longitud; // limitado
    
    Node *previous;
    Node *left;
    Node *right;

    
      
};
#endif