// maximo.cpp :
// obtener el maxmo de tres numeros de cualquir tipo

#include <iostream>


using namespace std;

// declaracion de funciones
template<class tipo>
tipo maximo(tipo,tipo,tipo); // funcion para elevar al cuadrado un numero


int main()
{
    // grupos de datos para calcular el maximo
    int num1 = 32, num2 = 5, num3 = 15;
    float f1 = 15.25, f2 = 26.25, f3 = 12.32;
    char a = 'a', b = 'o', c = 'c';
   
    //impresion de resultados para distintos tipos de valores

    cout << "el maximo de " << num1 << " ," << num2 << ", " << num3 << " es " << maximo(num1, num2, num3) << endl;
    cout << "el maximo de " << f1 << ", " << f2 << ", " << f3 << " es " << maximo(f1, f2, f3) << endl;
    cout << "el maximo de " << a << ", " << b << " ," << c << " es " << maximo(a, b, c) << endl;

    // parada para terminar
    cout << "Pulsa una tecla para terminar ";
    cin.get();

    return 0;
}

template<class tipo>
tipo maximo(tipo valor1,tipo valor2,tipo valor3)
{
    // obtener el mayor valor de los tres introducidos
    tipo max=valor1;
    if (valor2 > max) max = valor2;
    if (valor3 > max) max = valor3;

    return max;
}

