# include <iostream>
# include "Personaje.h"

using namespace std;

int main(){

    Personaje explorador;
    explorador.setNombre("explorador");
    explorador.setVelocidad(20);
    explorador.setCantMaximaUnidades(8);
    

    Personaje carguero;
    carguero.setNombre("carguero");
    carguero.setVelocidad(10);
    carguero.setCantMaximaUnidades(40);

    Personaje topo;
    topo.setNombre("topo");
    topo.setVelocidad(7);
    topo.setCantMaximaUnidades(15);
    topo.setPuedeCambiar(true);

    // AREA DE PRUEBA DE ATRIBUTOS

    // cout << "Existe un personaje: " + carguero.getNombre() + ", con velocidad: " + to_string(carguero.getVelocidad()) 
    // + " y puede cambiar tuneles: " + to_string(carguero.getPuedeCambiar()) << endl;

    // cout << "Existe un personaje: " + topo.getNombre() + ", con velocidad: " + to_string(topo.getVelocidad()) 
    // + " y puede cambiar tuneles: " + to_string(topo.getPuedeCambiar()) << endl;

    // cout << "Existe un personaje: " + explorador.getNombre() + ", con velocidad: " + to_string(explorador.getVelocidad()) 
    // + " y puede cambiar tuneles: " + to_string(explorador.getPuedeCambiar()) << endl;

};