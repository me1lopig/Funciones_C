// Ordenacion_vector.cpp 
// coprobar si un vector está ordenado
// se comprueba si el orden es creciente
//

#include <iostream>

using namespace std;

// declaracion de funciones
template<class tipo>
void Comprueba_orden(tipo[], int);
template<class tipo>
void imprimir(tipo [], int );

int main()
{
    // caso de vector entero
    int vector[8] = { 1,2,3,4,5,7,10,15 };
    int dim_v = sizeof(vector) / sizeof(*vector);


    // impresion del vector de datos
    cout << "Contenido del vector" << endl;
    imprimir(vector, dim_v);
    
    // comprobamos el orden interno en el vector
    Comprueba_orden(vector, dim_v);

    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();

    return 0;
}


template<class tipo>
void Comprueba_orden(tipo vector[], int dim_v)
{
    // comprobar ordenacion creciente de un vector
    for (int i = 0; i < dim_v-1; i++)
    {
        if (vector[i] > vector[i + 1])
        {
            cout << "El vector no esta ordenado en orden creciente " << endl;
            return ; // salimos de la fucion
        }

    }
    cout<<"El vector esta ordenado " << endl;


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