// Suma_vector.cpp : 
// suma de las componentes de un vector
// creamos una plantilla
//

#include <iostream>

using namespace std;

// declaracion de las funciones 
template<class tipo>
tipo Suma_elementos(tipo[],int);
template<class tipo>
void imprimir(tipo[], int);


int main()
{
    const int DIM_V = 5;
    int vector[DIM_V] = { 1,2,3,4,5 }; // caso de vector entero
    float vector2[DIM_V] = { 1.2,3.5,8,7.5,8.6 }; // caso de vector real

    // caso entero
    cout << "La suma del vector  de valores enteros" << endl;
    imprimir(vector, DIM_V);
    cout << "La suma de los elementos es " << Suma_elementos(vector, DIM_V) << endl;


    // caso float
    cout << "\nLa suma del vector  de valores reales" << endl;
    imprimir(vector2, DIM_V);
    cout << "La suma de los elementos es " << Suma_elementos(vector2, DIM_V) << endl;


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();

    return 0;
}


template<class tipo>
tipo Suma_elementos(tipo vector[], int dim_v)
{
    // funcion que calcula la suma de los elementos de un vector
    tipo suma = 0;
    for (int i = 0; i < dim_v; i++)
    {
        suma += vector[i];
    }
    return suma;

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