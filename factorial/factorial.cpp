// factorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include"f_factorial.h" //llamada al archivo de encabezado de las funciones

using namespace std;


int main()
{
    // declacion de las variables

    int num1;
    double n_fact;

    cout << "Introduce el numero ";
    cin >> num1;

    // calculo del factorial no recursivo
    n_fact = factorial(num1);

    cout << "Calculo del factorial sin recursividad" << endl;
    cout << "El factorial de " << num1 << " es " << n_fact << endl;

    // calculo del factorial de forma recursiva
    n_fact = factorial_r(num1);

    cout << "Calculo del factorial con recursividad" << endl;
    cout << "El factorial de " << num1 << " es " << n_fact << endl;


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}
