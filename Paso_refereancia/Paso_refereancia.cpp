// Paso_refereancia.cpp
// ejemplo de paso por referencia
// intercambio de variables
//

#include <iostream>

using namespace std;

// declaracion de funciones
template<class tipo>
void intercambio(tipo&, tipo&); // funcion para elevar al cuadrado un numero

int main()
{

    // grupos de datos para intercambiar
    int num1 = 32, num2 = 5;
    float f1 = 15.25, f2 = 26.25;
    char a = 'a', b = 'o';

   
    // resultados de los itercambio para enteros
    cout << "Ejemplo para enteros" << endl;

    cout << "el valor inicial  es " << num1 << endl;
    cout << "el valor inicial  es " << num2 << endl;

    intercambio(num1, num2);
    cout << "\nIntercambio" << endl;
    cout << "\nel valor final es " << num1 << endl;
    cout << "el valor final es " << num2 << endl;
   
    
    // resultados de los itercambio para reales
    cout << "\nEjemplo para reales" << endl;

    cout << "el valor inicial  es " << f1 << endl;
    cout << "el valor inicial  es " << f2 << endl;

    intercambio(f1, f2);

    cout << "\nIntercambio" << endl;
    cout << "\nel valor final es " << f1 << endl;
    cout << "el valor final es " << f2 << endl;


    // resultados de los itercambio para char
    cout << "\nEjemplo para caracter" << endl;

    cout << "el valor inicial  es " << a << endl;
    cout << "el valor inicial  es " << b << endl;

    intercambio(a, b);

    cout << "\nIntercambio" << endl;
    cout << "\nel valor final es " << a << endl;
    cout << "el valor final es " << b << endl;


    // parada para terminar
    cout << "Pulsa una tecla para terminar ";
    cin.get();

    return 0;	
}

template<class tipo>
void intercambio(tipo& valor1, tipo& valor2)
{
    tipo aux=valor1;
    valor1 = valor2;
    valor2 = aux;
}


