// Matriz_simetrica.cpp 
// comprobar si una matriz es simetrica
//

#include <iostream>

using namespace std;

// dimensiones de las matrices 
#define COL 3 // La matriz es simetrica


//declaracion de funciones
void simetria(int[][COL], int); // calcula el cuadrado de los elementos de una matriz
void imprime(int[][COL], int, int); // imprime matriz bidimensional
void introduce(int[][COL], int, int); // introduce los datos de una matriz bidimensinal

int main()
{
    
    int matriz_1[COL][COL]; // matriz origen


    // dimensiones de las matrices
    int dim_1 = sizeof(matriz_1) / sizeof(*matriz_1);
    int dim_2 = sizeof(matriz_1[COL]) / sizeof(*matriz_1[COL]);

    // ejecución de las funciones

    // introducimos e imprimimos la matriz que queremos comprobar
    cout << " Introducir los elementos de la matriz dato " << endl;
    introduce(matriz_1, COL, COL);
    cout << "Los elementos de la matriz son" << endl;
    imprime(matriz_1, COL, COL);

    // comprobacion de la simatria
    simetria(matriz_1, COL);

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
            cout << "[" << i + 1 << "," << j + 1 << "]="; cin >> array[i][j];
        }
    }
    cout << endl;
}

void simetria(int array[][COL], int dim_1)
{
    // comprobacion de la simetría de una matriz
    // con que solo exista un caso de imcumplimiento ya no es simetrica
    for (int i = 0; i < dim_1; i++)
    {
        for (int j = 0; j < dim_1; j++)
        {
            if (array[i][j]!=array[j][i])
            {
                cout << "La matriz no es simetrica" << endl;
                return;
            }
        }
    }
    cout << "La matriz es simetrica" << endl;
}
