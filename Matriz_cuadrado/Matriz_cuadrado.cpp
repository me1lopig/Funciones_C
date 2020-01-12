// Matriz_cuadrado.cpp 
// elevar al cuadrad los elementos de una matriz 
//

#include <iostream>


using namespace std;

// dimensiones de las matrices 
#define COL 3
#define FIL 3

//declaracion de funciones
void cuadrado(int[][COL],int [][COL], int, int); // calcula el cuadrado de los elementos de una matriz
void imprime(int[][COL], int, int); // imprime matriz bidimensional
void introduce(int[][COL], int, int); // introduce los datos de una matriz bidimensinal


int main()
{
    int matriz_1[FIL][COL]; // matriz origen
    int matriz_2[FIL][COL]; // matriz en la que se guarda el resultado de elevar al cuadrado

    // dimensiones de las matrices
   int dim_1 = sizeof(matriz_1) / sizeof(*matriz_1);
   int dim_2 = sizeof(matriz_1[COL]) / sizeof(*matriz_1[COL]);

   // ejecución de las funciones

   // introducimos e imprimimos la matriz base
   cout << " Introducir los elementos de la matriz dato " << endl;
   introduce(matriz_1, FIL, COL);
   cout << "Los elementos de la matriz son" << endl;
   imprime(matriz_1, FIL, COL);

   // calculamos los cuadrados de los elementos y los pasamos a matriz_2
   cout << " \nValor de los elementos de la matriz al cuadrado" << endl;
   cuadrado(matriz_1, matriz_2, FIL, COL);
   imprime(matriz_2, FIL, COL);


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}

void cuadrado(int matriz_1[][COL], int matriz_2[][COL], int dim_1, int dim_2)
{
    // elevamos el cuadrado los elementos de matriz_2
    for (int i=0;i<dim_1;i++)
        for ( int j = 0; j < dim_2; j++)
        {
            matriz_2[i][j] = pow(matriz_1[i][j], 2);
        }
}


void imprime(int array[][COL], int dim_1,int dim_2)
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
            cout << "[" << i+1 << "," <<j+1<< "]="; cin >> array[i][j];
        }
  
    }
    cout << endl;


}