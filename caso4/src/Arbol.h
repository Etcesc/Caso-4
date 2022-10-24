#include "Node.h"
#include "Camara.h"
#include <typeinfo>
#include <iostream>

#ifndef ARBOL 

#define ARBOL 1


template<typename T>
class Arbol
{
private:
    
    Node<T> *left;
    Node<T> *right;
    Node<T> *root;
    int alturaArbol;
    int element;

    int distanciaTotalDeArbol;
    int size;



public:
    Arbol(){
        Node *root=NULL;
        int size;

        //size =  LO QUE DEVUELVA EL PROGRAMA EN arbol avl/test.cpp

        //en test.cpp size es definida por el usuario en el main, podemos definirla hardcoded si es necesario
        //con tal de que realice insertar() por n veces
    }

    //Arreglar variable element, creo que no deberia ser integer
    Node<T> *Insertar(T Tree, T *pData)
    {
        /* dentro de un while:
        cual es la distacia total de las hojas?
        si es menor a 720, entonces construye otro nodo */
        
        while (distanciaTotalDeArbol < 720){
            Node<T> *newNode = new Node(pData);

            if(this->size == NULL){
                root = (Node*)malloc(sizeof(Node));
                root = newNode;
                newNode->data = pData;
                Tree -> left = NULL;
                Tree -> right = NULL;
                // while (this->distanciaEnHojas<720):
                //     distanciaEnHojas += random()
                //     break
            }
            else

                if(pData > Tree->element)        
                {

                    Tree -> right = Insertar(Tree -> right,pData);
                    if(balanceFactor(Tree) == -2)
                        if( pData > Tree -> right -> element)
                            Tree = RR(T);
                        else
                            Tree = RL(T);

                }
                else
                    if(pData<Tree->element)
                    {
                        Tree -> left = Insertar(T -> left,pData);
                        if(balanceFactor(Tree)==2)
                            if(pData < Tree-> left -> element)
                                Tree=LL(Tree);
                            else
                                Tree=LR(Tree);

                    }

                Tree -> alturaArbol = height(Tree);

                return(Tree);
        }break;
        return 0;
    }

    Node<T> * Delete(Node<T> *Tree, Node<T> *pData)
    {
        Node*p;

        if(Tree == NULL)
        {
            return NULL;
        }
        else
            if(pData > Tree->element)    
            {
                Tree -> right = Delete(Tree -> right,pData);
                if(balanceFactor(Tree) == 2)
                    if(balanceFactor(Tree -> left) >= 0)
                        T = LL(T);
                    else
                        T = LR(T);
            }
            else
                if(pData < T -> element)
                {
                    T -> left = Delete(T->left,pData);
                    if(balanceFactor(T)==-2)    
                        if(balanceFactor(T->right)<=0)
                            T=RR(T);
                        else
                            T=RL(T);
                }
                else
                {
                    if(T -> right != NULL)
                    {
                        p = T -> right;

                        while(p -> left != NULL)
                            p = p -> left;

                        T -> element = p -> element;
                        T -> right = Delete(T -> right,p->element);

                        if(balanceFactor(T) == 2)
                            if(balanceFactor (T -> left) >= 0)
                                T=LL(T);
                            else
                                T=LR(T);\
                    }
                    else
                        return(T->left);
                }
        T ->alturaArbol = height(T);
        return(T);
    }

    int height(Node<T> *T)
    {

        int lh,rh;//left height, right height
        if(T == NULL)
            return(0);
        if( T -> left == NULL)
            lh = 0;
        else
            lh = 1 + T -> left -> alturaArbol;

        if(T -> right == NULL)
            rh = 0;
        else
            rh=1+T->right->alturaArbol;

        if(lh > rh)
            return(lh);

        return(rh);
    }

    Node<T> * rotateright(Node<T> *pData)
    {
        Node *changed;
        changed = pData -> left;
        pData -> left = changed -> right;
        changed -> right = pData;
        pData -> alturaArbol = height(pData);
        changed -> alturaArbol = height(changed);
        return(changed);
    }

    Node<T> * rotateleft(Node<T> *pData)
    {
        Node *changed;
        changed = pData -> right;
        pData -> right = changed -> left;
        changed -> left = pData;
        pData -> alturaArbol = height(pData);
        changed -> alturaArbol = height(changed);
        return(changed);
    }

    Node<T> * RR(Node<T> *T)
    {
        T = rotateleft(T);
        return(T);
    }

    Node<T> * LL(Node<T> *T)
    {
        T = rotateright(T);
        return(T);
    }

    Node * LR(Node *T)
    {

        T -> left = rotateleft(T->left);
        T = rotateright(T);
        return(T);
    }

    Node<T> * RL(Node<T> *T)
    {
        T -> right = rotateright(T->right);
        T = rotateleft(T);
        return(T);
    }

    int balanceFactor(Node<T> *T)
    {
        int lh,rh;
        if( T == NULL)
            return(0);
        if(T -> left == NULL)
            lh = 0;
        else
            lh = 1 + T->left->alturaArbol;
        if(T -> right == NULL)
            rh = 0;
        else
            rh = 1 + T->right->alturaArbol;
        return(lh-rh);
    }

    void preorder(Node *T)
    {
        if( T != NULL)
        {
            cout << "Balance factor " << T -> element << " " << balanceFactor(T) << endl;
            preorder(T->left);
            preorder(T->right);
        }
    }

    void inorder(Node *T)
    {
        if( T != NULL)
        {
            inorder(T->left);
            cout << "Balance Factor "<<T -> element<<" " << balanceFactor(T) << endl;
            inorder(T->right);
        }
    }

/*
    bool isEmpty(){
        return !(tamano) // asi retorna false si el arbol tiene contenido
    }

    int getSize(){
        return tamano;
    }

    void setSize(){
        //this->size = LO QUE DEVUELVA EL PROGRAMA EN arbol avl/test.cpp
    }
    */
    Node<T>* getRaiz(){
        return root;
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
#endif