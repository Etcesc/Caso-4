# include <iostream>
# include "Personaje.h"

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