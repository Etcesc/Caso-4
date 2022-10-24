# include <iostream>
# include <stdlib.h>
# include <windows.h>
# include <string>

//# include "../Personajes/Strats/Normal.h"
//# include "../Personajes/Strats/Riesgoso.h"
//# include "../Personajes/Strats/Seguro.h"

using namespace std;

int main(){

    int alturaArbol=0;
    int cantCam=0;

    //nArbol.insertar(nodo,);
    //Node<string> *nRaiz = nArbol.getRaiz();
    // nArbol.Insertar(nRaiz, nCamara);

   // temporizador(1); // segundos (prueba)


    
    int option;
    do {
        cout<<"\n\n";
        cout << "1. Comenzar partida\n";
        cout << "2. Terminar programa\n";
        cout << "Seleccione una opcion: ";
        cin >> option;
        switch(option)
        {
            case 1: 
                cout<< "Digite la cantidad de camaras con la que van a jugar\n";
                cout<< "[Debe ser un numero del 5 al 15\n";
                cin >> cantCam;
                if(cantCam<5 || cantCam>15){
                    cout<<"numero de camaras fuera de rango, intente de nuevo\n";
                    break;
                }
                else
                for(int jugador=1; jugador<=2; jugador++){

                    cout<<"\nTurno del jugador "<<jugador<<endl;
                    cout<<"Comienza temporizador [2 minutos]\n";
                    //temporizador(120); 

                    int rolA, rolB, rolC;
                    int pj=1;

                    while(pj<=3){
                        cout<<"\nSeleccione su personaje numero "<<pj<<endl;
                        cout<<"1. Explorador\n";
                        cout<<"2. Carguero\n";
                        cout<<"3. Topo\n";
                        if(pj==1){
                            cin>>rolA;
                            cout<<"Ha seleccionado la clase numero "<<rolA<<endl;
                            pj++;
                        }
                        else if(pj==2){
                            cin>>rolB;
                            cout<<"Ha seleccionado la clase numero"<<rolB<<endl;
                            pj++;
                        }
                        else if(pj==3){
                            cin>>rolC;
                            cout<<"Ha seleccionado la clase numero "<<rolC<<endl;
                            pj++;
                        }
                        else
                            cout<<"Seleccione una opción válida"<<endl;
                    }
                    // SE ENVIAN LAS VARIABLES ROL PARA DETERMINAR LOS PERSONAJES ESCOGIDOS
                    int op = 1;
                    int estrategiaA, estrategiaB, estrategiaC;
                    cout<<"\nElija su estrategia a utilizar\n";
                    // MENU CON SELECCION DE ESTRATEGIAS
                    while(op<=1){
                        cout<<"1. Seguro\n";
                        cout<<"2. Riesgoso\n";
                        cout<<"3. Normal\n";
                        if(op==1){
                            cin>>estrategiaA;
                            cout<<"Ha seleccionado la estrategia "<<estrategiaA<<endl;
                            //seguro()
                            op++;
                        }
                        else if(op==2){
                            cin>>estrategiaB;
                            cout<<"Ha seleccionado la estrategia"<<estrategiaB<<endl;
                            //riesgoso();
                            op++;
                        }
                        else if(op==3){
                            cin>>estrategiaC;
                            cout<<"Ha seleccionado la estrategia "<<estrategiaC<<endl;
                            //normal();
                            op++;
                        }
                        else
                            cout<<"Seleccione una opción válida"<<endl;
                    }

                    cout<< "Corriendo programa..."<<endl;

                    // EJECUTA EL THREAD/RECORRIDO DEL ARBOL HASTA QUE SE ACABA EL TIEMPO
                    /*
                    Node *nodo = NULL;
                    for(int i = 0; i < cantCam; i++) {
                        //se va creando la cantidad generada por el random
                        Camara *cam = new Camara();
                        int potenciaMinado = cam->getPotencialMinado();  //dentro de esta tambien se generan minerales y distancia
                        alturaArbol = alturaArbol + cam->getProfundidadCamara();
                        
                        if(alturaArbol >= 720) {
                            cout << "Altura excedida" << endl;
                            alturaArbol = alturaArbol - cam->getProfundidadCamara(); 
                            break;
                        }

                        //nodo = nMina->insertar(nodo, new int(potenciaMinado));   //se agrega nodo a la mina con el potencial
                        cout << "Agregando camara" << endl;
                        //Camara *encontrado = nMina->search(nodo, new int(potenciaMinado));     //se busca para asignarle "contenido", que es la camara
                        //cout << "Minerales: " << encontrado->getUnidadesMineral() << endl;
                        cout << "Numero de camara: " << i << endl;
                    }
                    cout<<"\n\n\n";
*/
                }


            
            break;
            }
    }while(option!=2);

    return 0;
        

    // Crea personajes de juego
    // Explorador nuevoExplorador;
    // Carguero nuevoCarguero;
    // Topo nuevoTopo;

    // AREA DE PRUEBA DE ATRIBUTOS

    //  cout << "Existe un personaje: " + nuevoCarguero.getNombre() + ", con velocidad: " + to_string(nuevoCarguero.getVelocidad()) 
    //  + " y puede cambiar tuneles: " + to_string(nuevoCarguero.getPuedeCambiar()) << endl;

    // cout << "Existe un personaje: " + nuevoTopo.getNombre() + ", con velocidad: " + to_string(nuevoTopo.getVelocidad()) 
    // + " y puede cambiar tuneles: " + to_string(nuevoTopo.getPuedeCambiar()) << endl;

    // cout << "Existe un personaje: " + nuevoExplorador.getNombre() + ", con velocidad: " + to_string(nuevoExplorador.getVelocidad()) 
    // + " y puede cambiar tuneles: " + to_string(nuevoExplorador.getPuedeCambiar()) << endl;

};