// factorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include"funciones.h" //llamada al archivo de encabezado de las funciones

using namespace std;


int main()
{
    // declacion de las variables

    int num1;
    double n_fact;
    double n_suma;


    do 
    {
        cout << "Introduce el numero ";
        cin >> num1;

    } while (num1 < 0);


    // calculo del factorial no recursivo
    n_fact = factorial(num1);

    cout << "Calculo del factorial sin recursividad" << endl;
    cout << "El factorial de " << num1 << " es " << n_fact << endl;

    // calculo del factorial de forma recursiva
    n_fact = factorial_r(num1);

    cout << "Calculo del factorial con recursividad" << endl;
    cout << "El factorial de " << num1 << " es " << n_fact << endl;


    // calculo de la suma  no recursivo
    n_suma = suma(num1);

    cout << "Calculo de la suma de los terminos sin recursividad" << endl;
    cout << "La suma de los terminos de  " << num1 << " es " << n_suma << endl;

    // calculo de la suma de forma recursiva
    n_suma = suma_r(num1);

    cout << "Calculo de la suma de los ternimos con recursividad " << endl;
    cout << "La suma de los terminos de " << num1 << " es " << n_suma << endl;

    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}
