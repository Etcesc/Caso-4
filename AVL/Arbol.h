#include "../AVL/Node.h" // nodoavl
#include "Camara.h"
#include <typeinfo>
#include <iostream>
#include <algorithm>

#ifndef ARBOL 

#define ARBOL 1

template<class T>
class Arbol
{
private:
    int profundidad;
    int longitud;
    int profundidadTotal;
    int mineralEnLugar;
    int longitudTun;

public:
    Node *raiz = NULL; // inicializa que la raiz sea nula

    Node *busqueda(Node* raiz, int pData){
        
        Node *nodoBusqueda = NULL; // inicia con valor NULL

        if (raiz!=NULL){
            if(raiz->key == pData){
                nodoBusqueda = raiz;
            }
            else if (raiz->key < pData){
                busqueda(raiz->right, pData);
            }
            else{
                busqueda(raiz->left, pData);
            }
        }
        return nodoBusqueda;
    }
    
    bool borrar(int pData){
        Node* nodoBorrado = busqueda(raiz, pData);
        if (nodoBorrado){
            cout << " \n\nCamara eliminada\n\n";
            nodoBorrado = NULL;
            return true;
        }
        return false;
    }

    int altura(Node *hght)
    {
        if (hght == NULL)
            return 0;
        return hght->altura;
    }

    int alturaSub()
    {
        altura(raiz);
    }

    int mayor(int num1, int num2)
    {
        return (num1 > num2) ? num1 : num2;
    }

    Node *newNode(int pData, Node *pPrev)
    {
        Node *node = new Node();
    
        node->key = pData;
        node->longitud = this->longitud;
        node->camara->setMaterial(mineralEnLugar);
        node->left = NULL;
        node->right = NULL;
        node->altura = 1; 
        if (pPrev != NULL){
            node->previous = pPrev;
            node->profundidad = node->previous->profundidad + node->longitud;
            this->profundidad = node->profundidad;
        }            
        return (node);
    }

    Node *rightRotate(Node *y)
    {
        Node *x = y->left;
        Node *T2 = x->right;

        x->right = y;
        y->left = T2;

        y->altura = mayor(altura(y->left),
                        altura(y->right)) +
                    1;
        x->altura = mayor(altura(x->left),
                        altura(x->right)) +
                    1;
        return x;
    }

    Node *leftRotate(Node *x)
    {
        Node *y = x->right;
        Node *T2 = y->left;

        y->left = x;

        x->right = T2;

        x->altura = mayor(altura(x->left),
                        altura(x->right)) +
                    1;
        y->altura = mayor(altura(y->left),
                        altura(y->right)) +
                    1;

        return y;
    }

    int getBalance(Node *N)
    {
        if (N == NULL)
            return 0;
        return altura(N->left) - altura(N->right);
    }
    
    Node *insert(Node *node, int key, Node *pAnt)
    {

        if (node == NULL){
            return (newNode(key, pAnt));
        }                     
        if (key < node->key){             
            node->left = insert(node->left, key, node);  
        }                
        else if (key > node->key){              
            node->right = insert(node->right, key, node);
        }
            
        else{
            return node;
        } 
            

        node->altura = 1 + mayor(altura(node->left),
                            altura(node->right));

        int balance = getBalance(node);

        if (balance > 1 && key < node->left->key)
            return rightRotate(node);

        if (balance < -1 && key > node->right->key)
            return leftRotate(node);

        if (balance > 1 && key > node->left->key)
        {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        if (balance < -1 && key < node->right->key)
        {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    void preOrder(Node *raiz)
    {
        if (raiz != NULL)
        {
            cout << " | " << raiz->key << " : " << raiz->profundidad <<  " : " << raiz->longitud <<   " | \n";
            cout << "   <             >" << endl;
            preOrder(raiz->left);
            preOrder(raiz->right);
            cout <<  endl;
        }
    }

    void coutRight(Node *raiz)

    {
        if (raiz != NULL)
        {
            cout << " | " << raiz->key << " : " << raiz->profundidad <<  " : " << raiz->longitud <<   " : " << raiz->camara->getCantidadDeMaterial() <<" | \n";
            coutRight(raiz->right);
        }
    }

    int getProfunidadActual(){
        return this->profundidadActual;
    }
    bool addNodo(){
        longitud = rand() % 71 + 10;    
        mineralEnLugar = rand() % 20 + 1;
        int key = mineralEnLugar * profundidad;

        if (raiz == NULL){
            profundidad = longitud;
        }
        if (profundidad >= 720){
            return false;
        }

        this->raiz = insert(this->raiz, key, raiz);

        return true;
    }

};

#endif

