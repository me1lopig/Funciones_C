// Multiplicar.cpp 
// definir una funcion para multiplicar dos numeros de cualquier tipo
//
//

#include <iostream>

using namespace std;


template<class tipo>
tipo multi(tipo,tipo); // los dos argumentos deben de ser del mismo tipo


int main()
{
    float numf1 = 3.25;
    float numf2 = 5.25;

    int numi1 = 3;
    int numi2 = 6;

    cout.precision(4);
    cout << "El producto de " << numf1<< " y de " << numf2 << " es " << multi(numf1, numf2)<<endl;
    cout << "El producto de " << numi1 << " y de " << numi2 << " es " << multi(numi1, numi2) << endl;
    

    cout << "Pulsa una tecla ";
    cin.get();

    return 0;
}

template<class tipo>
tipo multi(tipo num1,tipo num2)
{
// producto de dos numeros de cualquier tipo
    return num1 * num2;
}

