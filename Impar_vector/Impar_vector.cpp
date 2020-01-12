// Impar_vector.cpp :
// selecciona los elementos impares y los pasa a otro vector
// el vector se supone entero
// tomar como ejemplo para el uso de punteros con arrays
//

#include <iostream>

using namespace std;


// declaracion de las funciones
void impares(int[],int[], int,int&); // busca los impares de un vector y los pasa a otro vector
void zeros(int[], int); // genera un vector de ceros
void imprimir(int[], int); // genera un vector de ceros


int main()
{
    
    // declaracion de variables
    int vector[11] = { -1,2,-3,4,5,6,7,8,9,10,11 };
    int impar[11] ;
    int dim_v = sizeof(vector) / sizeof(*vector); // dimesion maxima de los vectores
    int n_imp = 0; // numero de elementos impares de vector

    
    // generacion de los ceros del vector impar_v

    //zeros(impar, dim_v); // generacion de un vector de ceros
    //imprimir(impar, dim_v); // impresion del vector de ceros

    // se imprime el vector inicial
    cout << "\nVector inicial " << endl;
    imprimir(vector, dim_v); // impresion del vector de ceros

    // calculos de localizacion de los impares
    // solo se imprimen los valores necesarios
    cout << "\nVector con los valores impares" << endl;
    impares(vector, impar, dim_v,n_imp);
    imprimir(impar, n_imp); // impresion del vector de ceros
     
            

    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}




void zeros(int array[], int dim_v)
{
    for (int i = 0; i < dim_v; i++)
    {
        // llenamos un vector con ceros
        array[i] = 0;
    }
        
}


void impares(int fuente[], int destino[], int dim_v, int &n)
{
    // solo se obtienen los valores impares
    // el vector sale ordenado

    int j = 0; // subindice del vector destino
    for (int i = 0; i < dim_v; i++)
    {
 
        if (fuente[i] % 2 != 0)
        {      
            destino[j] = fuente[i];
            j++;
        }
    }
    n = j; // valor que se pasa por referencia para el control de elementos de destino
}



void imprimir(int numero[], int dim_v)
{
    // impresion por pantalla del contenido de un vector
    for (int i = 0; i < dim_v; i++)
    {
        cout << "elemento[" << i + 1 << "]= " << numero[i] << endl;
    }
}
