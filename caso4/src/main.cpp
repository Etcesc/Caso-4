# include <iostream>
# include "Personaje.h"
//# include "Camara.h" // TODO ARREGLAR CLASE CAMARA
# include "Tunel.h"
# include "Puerta.h"
# include "Temporizador.h"

using namespace std;

// Crea el personaje Explorador
class Explorador : public Personaje
{
public:
    Explorador(){
        nombre = "explorador";
        velocidad = 20; // metros por segundo
        cantMaximaUnidades = 8; // minerales maximos que puede cargar
    }
};

// Crea el personaje Carguero
class Carguero : public Personaje
{
public:
    Carguero(){
        nombre = "carguero";
        velocidad = 10; // metros por segundo
        cantMaximaUnidades = 40; // minerales maximos que puede cargar
    }
};

// Crea el personaje Topo
class Topo : public Personaje
{
public:
    Topo(){
        nombre = "topo";
        velocidad = 7; // metros por segundo
        cantMaximaUnidades = 15; // minerales maximos que puede cargar
        puedeCambiarTuneles = true;
    }
};



int main(){

//    Node *root=NULL;
    Explorador nuevoExplorador;
    Carguero nuevoCarguero;
    Topo nuevoTopo;

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
                for(int jugador=1; jugador<=2; jugador++){

                    cout<<"\nTurno del jugador "<<jugador<<endl;
                    cout<<"Comienza temporizador [2 minutos]\n";

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
                
                    cout<<"\nElija su estrategia a utilizar\n";
                    // MENU CON SELECCION DE ESTRATEGIAS

                    // EJECUTA EL THREAD/RECORRIDO DEL ARBOL HASTA QUE SE ACABA EL TIEMPO

                    cout<<"\n\n\n";

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