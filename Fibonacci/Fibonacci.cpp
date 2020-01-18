// Fibonacci.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// en este caso las funciones se colocan en el un archivo fibonacci.h
//calculo de la serie de fibonacci mediante recursividad y no recursivo



#include <iostream>
#include "fibonacci_f.h"


using namespace std;



int main()
{
    
    // declacion de las variables

    int num1;

  
    do
    {
        cout << "Introduce el numero entero positivo de numeros de terminos ";
        cin >> num1;

    } while (num1 < 0);

    for (int i = 1; i <= num1; i++)
    {
        cout << "El numero " << i << " es " <<fibonacci_r(i)<< "  "<<fibonacci_f(i)<<endl;
    }


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}


