// Billetes.cpp :
// repartir importe en billetes tipo
// billetes de 100, 50, 20,10,5 y 1 
//convertir una cantidad en el menor numero de billetes equivalentes
//

#include <iostream>

using namespace std;


void billetes(int);

int main()
{
 
    int cantidad; // valor del importe

    cout << "Introduce la cantidad de dinero "; cin >> cantidad;

    billetes(cantidad); // ejecucion de la funcion

    // parada para terminar
    cout << "Pulsa una tecla para terminar ";
    cin.get();

    return 0;
}

void billetes(int billetes)
{
    //  tipos de billetes de 100, 50, 20,10,5 y 1 

    int tipo[6] = { 100,50,20,10,5,1 }; //tipos de billetes
 
    cout << "La distribucion en billetes es " << endl;

    for (int i = 0; i < 6; i++)
    {
        if (billetes / tipo[i] != 0)
        {
            cout  << billetes / tipo[i] << " billetes de " << tipo[i] << endl;
            billetes %= tipo[i];
        }

    }

}