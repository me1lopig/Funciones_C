// MinimoFile.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

// numero de filas y de columnas
#define FIL 3
#define COL 3


using namespace std;

// declaración de funciones
int minimofila(int[][COL], int, int);
void imprime(int[][COL], int, int); // imprime matriz bidimensional
void introduce(int[][COL], int, int); // introduce los datos de una matriz bidimensinal


int main()
{
    int array[FIL][COL]; // array en el que se va a buscar el mínimo de una fila
    int fila; // fila en la que se va a localizar el mínimo


    // introduccion de los elementos de la matriz
    cout << " Introducir los elementos de la matriz dato " << endl;
    introduce(array, FIL, COL);
    cout << "Los elementos de la matriz son" << endl;
    imprime(array, FIL, COL);


    // entrada de la fila
    cout << "Encontrar el minimo en la fila entre " << 0 << " y " << FIL-1 << endl;
    cin >> fila;

    // calculo del minimo de la fila seleccionada
    cout << "El valor minimo de la fila " << fila << " es " << minimofila(array, fila, COL) << endl;


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}


void imprime(int array[][COL], int dim_1, int dim_2)
{
    // impresion por pantalla del contenido de un vector
    for (int i = 0; i < dim_1; i++)
    {
        for (int j = 0; j < dim_2; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }

}

void introduce(int array[][COL], int dim_1, int dim_2)
{
    // entrada de los datos de la matriz
    for (int i = 0; i < dim_1; i++)
    {
        for (int j = 0; j < dim_2; j++)
        {
            cout << "[" << i  << "," << j  << "]="; cin >> array[i][j];
        }
    }
    cout << endl;
}


int minimofila(int matriz[][COL], int fila, int columnas)
{
    // calcular el mínimo en una fila determinada
    // array[][], filas, columnas, fila a investigar
    // 
    int min = INT_MAX;
    for (int j = 0; j < columnas; j++)
    {
        if (matriz[fila][j] < min)
        {
            min = matriz[fila][j];
        }
    }
    return min;
}