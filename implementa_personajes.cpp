#include "carguero.h"
#include "explorador.h"
#include "topo.h"

/*
ESTE ARCHIVO SOLO IMPLEMENTA LOS PERSONAJES COMO OBJETOS
*/

using namespace std;

void main(){

    Explorador nExplorador;
    Carguero nCarguero;
    Topo nTopo;

    // carguero
    nCarguero.setVelocidad(10); // mts x segundo 
    nCarguero.setCantMaximaUnidades(40);
    nCarguero.setPuedeCambiar(false);

    // explorador
    nExplorador.setVelocidad(20); // mts x segundo
    nExplorador.setCantMaximaUnidades(8);
    nExplorador.setPuedeCambiar(false);

    // topo
    nTopo.setVelocidad(7); // mts x segundo
    nTopo.setCantMaximaUnidades(15);
    nTopo.setPuedeCambiar(true);



}