// Funciones.cpp : Ejercicios de uso de funciones
//
//

#include <iostream>

using namespace std;

// prototipo de funcion
int encontrarMax(int, int);


int main()
{
    int n1, n2; // numeros de los que vamos a obtener el mayor
   

    cout << "Introduce el primer numero entero  "; cin >> n1;
    cout << "Introduce el segundo numero entero "; cin >> n2;

    cout << "El numero mayor es el " << encontrarMax(n1, n2) << endl;

    cout << "Pulsa una tecla ";
    cin.get();

    return 0;
}


int encontrarMax(int x, int y)
{
    // funcion para la determinacion del valor maximo
    if (x >= y) return x;
    else return y;
  
}
