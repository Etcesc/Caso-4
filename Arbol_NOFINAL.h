//#include "Node.h"

template<typename T>
class Arbol
{
private:
    Node<T>* raiz;
    int tamano;

public:
    Arbol(){
        //size =  LO QUE DEVUELVA EL PROGRAMA EN arbol avl/test.cpp
        raiz = NULL; // inicializa la raiz como nula
    }

    bool isEmpty(){
        return !(tamano) // asi retorna false si el arbol tiene contenido
    }

    int getSize(){
        return tamano;
    }

    void setSize(){
        //this->size = LO QUE DEVUELVA EL PROGRAMA EN arbol avl/test.cpp
    }

    Node<T>* getRaiz(){
        return raiz;
    }

    // Node<T>* agregaAArbol(T* pData, Node<T>* pNode){
    //     Node<T>* nNodo = new Node<T>(pData); // crea nodo a agregar a arbol. hojas

    //     if (this->isEmpty())
    //     {
    //         raiz = nNodo; // define nodo como raiz si esta vacio el arbol
    //     }
        
    //     // FALTA
    // }



};