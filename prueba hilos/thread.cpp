# include <thread>
# include <iostream>
# include <chrono>
# include <windows.h>
//# include "../caso4/src/queue.h"
# include <queue>
# include "../Personajes/Tipos/Personaje.h"
// # include "../Personajes/Tipos/Topo.h"
// # include "../Personajes/Tipos/Explorador.h"
// # include "../Personajes/Tipos/Carguero.h"

using namespace std;

Queue<int> *nuevaCola; //= new queue<int>();    


#define NUM_HILO 2

int buffer[20];
int contador = 0;

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


void productor1(){ // thread productor de TOPO
    int num = 0;
    Topo *nTopo;
    while (num < 3){
        int mineralObtenido = nTopo->minar(); // thread donde se obtiene el mineral
        nTopo.min
        nuevaCola->enqueue(&mineralObtenido);
        num++;
        cout << "El topo mina... " << endl;
    }
}

void productor2(){ // thread productor de EXPLORADOR
    int num = 0;
    Explorador *nExplorador;
    while (num < 3){
        int mineralObtenido = nExplorador->minar(); // thread donde se obtiene el mineral
        nuevaCola->enqueue(&mineralObtenido);
        num++;
        cout << "El explorador mina... " << endl;
    }
}

void productor3(){ // thread productor de CARGUERO
    int num = 0;
    Carguero *nCarguero;
    while (num < 3){
        int mineralObtenido = nCarguero->minar(); // thread donde se obtiene el mineral
        nuevaCola->enqueue(&mineralObtenido);
        num++;
        cout << "El carguero mina... " << endl;
    }
}

void consumidor(){ // hilo consumidor
    int num = 0;
    Node<int> tareas; // tareas es lo que esta por procesarse en la cola
    while (num < 2){
        this_thread::sleep_for(chrono::seconds(5)); // cada n segundos ejecuta la informacion
        tareas = nuevaCola->dequeue();
        cout << "El consumidor CONSUME" << endl;
        num++;
    }
}

int main(){
    thread hiloCarguero(productor3);
    thread hiloTopo(productor1);
    thread hiloExplorador(productor2);

    thread hiloConsumidor(consumidor);
    
    hiloCarguero.join();
    hiloTopo.join();
    hiloExplorador.join();

    hiloConsumidor.join();
}

// int main(int argc, char* argv[]){
//     temporizador(120); // segundos para jugar o elegir estrategia

//     srand(time(NULL)); // otra semilla de tiempo random
//     pthread_t hilo[NUM_HILO]

    
//     return 0;
// }
