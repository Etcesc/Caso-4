#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void temporizador(int s)
{
    while (true)
    {
        if (s == 0)
        {
            break;
            // puede hacerse un return importante para determinar el fin del juego
        }
        cout<<s--;
        Sleep(1000);
    }
}

// codigo de prueba 
// int main(){
//     timer(10);
//     cout << "hola";
// }