// Multiplicar.cpp 
// definir una funcion para multiplicar dos numeros de cualquier tipo
// se usa una plantilla con dos tipo de variable de entrada 
// se define una funcion para elevar al cuadrado un numero
//

#include <iostream>

using namespace std;

// prototipo de plantillas a usar
template<class tipo,class tipo2>
tipo multi(tipo,tipo2); // funcion para multiplicar dos variables

template<class tipo>
tipo cuad(tipo); // funcion para elevar al cuadrado un numero

template<class tipo1>
tipo1 elev(tipo1,int); // funcion para elevar un numero a otro entero


int main()
{
    float numf1 = 3.14;
    float numf2 = 5.25;

    int numi1 = 2;
    int numi2 = 3;

    // multiplicacion con flotantes, enteros y mixto
    //cout.precision(4);
    cout << "El producto de " << numf1<< " y de " << numf2 << " es " << multi(numf1, numf2)<<endl;
    cout << "El producto de " << numi1 << " y de " << numi2 << " es " << multi(numi1, numi2) << endl;  
    cout << "El producto de " << numf1 << " y de " << numi2 << " es " << multi(numf1, numi2) << endl;

    // cuadrados con la funcion de multiplicar y con la de elevar al cudrado
    
    cout << "Elevacion al cuadrado con la funcion multiplicar de " << numf1 << " es " << multi(numf1, numf1) << endl;
    cout << "Elevacion al cuadrado con la funcion cuad de " << numf1 << " es " << cuad(numf1) << endl;

    // valor de un numero elevado a un entero

    cout << "El numero " << numf1 << " elevado a  " << numi2 << " es " << elev(numf1, numi2) << endl;

    cout << "Pulsa una tecla para terminar ";
    cin.get();

    return 0;
}

template<class tipo,class tipo2>
tipo multi(tipo num1,tipo2 num2)
{
// producto de dos numeros de cualquier tipo
    return num1 * num2;
}

template<class tipo>
tipo cuad(tipo num)
{
    // elevacion al cuadrado de un valor
    return num * num;
}

template<class tipo1>
tipo1 elev(tipo1 x, int n)
{
    tipo1 cal=1;

    for (int i = 0; i < n; i++)
    {
        cal =cal*x;
    }
    return cal;
}