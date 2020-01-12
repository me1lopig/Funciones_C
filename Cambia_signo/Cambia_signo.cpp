// Cambia_signo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


// declaracion de funciones
template<class tipo>
void signo(tipo[], int);
template<class tipo>
void imprimir(tipo[], int);


int main()
{
    
    // caso de vector entero
    int vector[8] = { 1,2,3,-4,5,7,10,-15 };
    int dim_v = sizeof(vector) / sizeof(*vector);


    // impresion del vector de datos
    cout << "Contenido del vector" << endl;
    imprimir(vector, dim_v);

    // comprobamos el orden interno en el vector
    signo(vector, dim_v);

    // impresion del vector con los signos cambiado
    cout << "\nContenido del vector con el signo cambiado" << endl;
    imprimir(vector, dim_v);


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();

    return 0;
}


template<class tipo>
void signo(tipo vector[], int dim_v)
{
    // comprobar ordenacion creciente de un vector
    for (int i = 0; i < dim_v; i++)
    {
        vector[i] = -vector[i];
    }
}

template<class tipo>
void imprimir(tipo numero[], int dim_v)
{
    // impresion por pantalla del contenido de un vector
    for (int i = 0; i < dim_v; i++)
    {
        cout << "elemento[" << i + 1 << "]= " << numero[i] << endl;
    }
}
