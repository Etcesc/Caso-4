#include <thread>
#include <iostream>
#include <chrono>
#include "queue.h"

using namespace std;

Queue<int> *nuevaCola = new Queue<int>();


#define NUM_HILO 2

int buffer[20];
int contador = 0;

void productor(void *args){
    
}

void consumidor(){
    int num = 0;
    Node<int> tareas;
    while (num < 2){
        this_thread::sleep_for(chrono::seconds(10));
        tareas = nuevaCola->dequeue();
        num++;
}

// int main(int argc, char* argv[]){
//     temporizador(120); // segundos para jugar o elegir estrategia

//     srand(time(NULL)); // otra semilla de tiempo random
//     pthread_t hilo[NUM_HILO]

    
//     return 0;
// }
