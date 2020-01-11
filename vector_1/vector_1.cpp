// vector_1.cpp 
// se define una funcion que eleve al cuadrao los elementos de un vector que se almacena en otro vector
//

#include <iostream>


using namespace std;

// declaracion de las funciones 
void cuadrado(int[],int[],int);
void imprimir(int[], int);



int main()
{
    const int DIMENSION = 5; // valor de la dimension de los vectores
    // variables globales
    int array_int[DIMENSION] = { 2,4,6,8,10 }; // vector fuente
    int array_cuad[DIMENSION] = { 0,0,0,0,0 }; // vector contenedor
    int dim_array = sizeof(array_int) / sizeof(*array_int); // dimension (por su se decide cambiar el valor constante
       

    // llamada a la función
    cuadrado(array_int, array_cuad, dim_array);
    
    cout << "Vector inicial" << endl;
    imprimir(array_int, dim_array);

    cout << "\nVector calculado" << endl;
    imprimir(array_cuad, dim_array);
 
    
    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();

    return 0;
}



void cuadrado(int numero[],int cuadrado[],int dim_v)
{
    for (int i = 0; i < dim_v; i++)
    {
        cuadrado[i] = numero[i] * numero[i];
    }


}

void imprimir(int numero[], int dim_v)
{
    // impresion por pantalla del contenido de un vector
    for (int i = 0; i < dim_v; i++)
    {
        cout << "elemento["<<i+1<<"]= " << numero[i] << endl;
    }
}