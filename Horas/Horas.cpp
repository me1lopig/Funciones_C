// Horas.cpp 
// definir una funcion en la que se introduzca un valor temporal y de en tres variables pasadas por referencia
// horas, minutos y segundos
//

#include <iostream>

using namespace std;

void tiempo(int, int&, int&, int&);


int main()
{
    int horas;
    int minutos;
    int segundos;
    int tsegundos; // valor de la variable a introducir

    cout << "Introduce el tiempo  "; cin >> tsegundos;


    cout << "El tiempo es segundos a desglosar es " << tsegundos << "sg " << endl;

    tiempo(tsegundos, horas, minutos, segundos);

    cout<<"\nEl desglose es " << endl;
    cout << "horas " << horas << endl;
    cout << "minutos " << minutos << endl;
    cout << "segundos " << segundos << endl;



    // parada para terminar
    cout << "Pulsa una tecla para terminar ";
    cin.get();

    return 0;
}


void tiempo(int tsegundos, int& horas, int& minutos, int& segundos)
{
    // funcion que da descompuesto en horas, segundos y minutos un valor temporal

    // pasamos a minutos
    horas = tsegundos / (3600);
    minutos = (tsegundos - horas * 60*60)/60;
    segundos = tsegundos -minutos*60- horas*60*60;

      

}
