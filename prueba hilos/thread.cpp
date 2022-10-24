# include <thread>
# include <iostream>
# include <chrono>
# include <windows.h>
# include "../caso4/src/queue.h"
// # include "Topo.h"
// # include "Explorador.h"
// # include "Carguero.h"

using namespace std;

Queue<int> *nuevaCola = new Queue<int>();


#define NUM_HILO 2

int buffer[20];
int contador = 0;

void productor1(){ // thread productor de TOPO
    int num = 0;
    //Topo *nTopo;
    while (num < 3){
        //int mineralObtenido = nTopo->minar(); // thread donde se obtiene el mineral
        //nuevaCola->enqueue(&mineralObtenido);
        num++;
        cout << "El topo mina... " << endl;
    }
}

void productor2(){ // thread productor de EXPLORADOR
    int num = 0;
    //Explorador *nExplorador;
    while (num < 3){
        //int mineralObtenido = nExplorador->minar(); // thread donde se obtiene el mineral
        //nuevaCola->enqueue(&mineralObtenido);
        num++;
        cout << "El explorador mina... " << endl;
    }
}

void productor3(){ // thread productor de CARGUERO
    int num = 0;
    //Carguero *nCarguero;
    while (num < 3){
        //int mineralObtenido = nCarguero->minar(); // thread donde se obtiene el mineral
        //nuevaCola->enqueue(&mineralObtenido);
        num++;
        cout << "El carguero mina... " << endl;
    }
}

void consumidor(){ // hilo consumidor
    int num = 0;
    Node<int> tareas; // tareas es lo que esta por procesarse en la cola
    while (num < 2){
        this_thread::sleep_for(chrono::seconds(10)); // cada n segundos ejecuta la informacion
        //tareas = nuevaCola->dequeue();
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
