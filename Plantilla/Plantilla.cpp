// Plantilla.cpp : ejemplo de plantillas de funcion
//La idea de las plantillas es usar varios tipos de datos de entrada para dar mas versatilidad
// a la funcion
//

#include <iostream>

using namespace std;

// prototipo de funcion y plantilla

// plantilla para calcular el valor absoluto de un numero de cualquier tipo
template<class TIPOD>
void MostraAbsoluto(TIPOD);


int main()
{
    int num_i;
    float num_f;

    cout << "Calculo de valores absolutos " << endl;
    cout << "Introduce el numero entero "; cin >> num_i;
    cout << "Introduce el numero real "; cin >> num_f;

    cout << "resultados " << endl;

    MostraAbsoluto(num_i);
    MostraAbsoluto(num_f);
    

    cout << "Pulsa una tecla ";
    cin.get();

    return 0;
}


template<class TIPOD>
void MostraAbsoluto(TIPOD numero)
{
    TIPOD aux; // declaracioin de una variable auxiliar multitipo
    if (numero < 0) aux = -numero;
    else aux = numero;

    cout << "El valor absoluto de "<<numero<<" es " << aux << endl;
}

