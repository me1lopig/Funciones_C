// Potencia_recursiva.cpp :
// cálculo de potencias de forma recursiva
//  
//

#include <iostream>
#include<math.h>

using namespace std;

float potencia(int,int);


int main()
{
    
    int base;
    int exponente;

        cout << "Introduce el numero entero base  ";
        cin >> base;

    do
    {

        // control entrada de valores enteros positivos
        cout << "Introduce el numero entero exponente  ";
        cin >> exponente;

    } while (exponente < 0);

    cout << "Valor con funcion estandar " << pow(base, exponente) << endl;
    cout << "Valor con funcion estandar " << potencia(base, exponente) << endl;



    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}


float potencia(int base, int exponente)
{
    float resultado;

    if (exponente == 1)
    {
        resultado = base;
    }
    else
    {
        resultado= base * potencia(base, exponente - 1);
    }
        
    return resultado;
      
}