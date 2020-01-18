// Suma_complejos.cpp 
// suma de numeros complejos
// producto de coplejos
//

#include <iostream>

using namespace std;

struct complex
{
    float real;
    float imag;
};


// declaracion de las funciones a usar
void pedirdatos();
struct complex suma_complex(struct complex, struct complex); //suma dos mumeros complejos
struct complex producto_complex(struct complex, struct complex); //producto de  dos mumeros complejos
void mostrardatos(struct complex);


// definición de las variables de los numeros complejos
struct complex z1,z2; // numeros a sumar
struct complex suma; // suma de los numeros complejos


int main()
{

    struct complex suma_c,prod_c; // a

    pedirdatos();
    suma_c=suma_complex(z1, z2);
    prod_c = producto_complex(z1, z2);

    cout << "Resultado de la suma" << endl;
    mostrardatos(suma_c);

    cout << "\nResultado del produco" << endl;
    mostrardatos(prod_c);



    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}


void pedirdatos()
{
    // funcion para la entradad de datos de una estructura
    cout << "Primer numero " << endl;
    cout << "x= ";
    cin >> z1.real;

    cout << "iy= ";
    cin >> z1.imag;
    cout << endl;
    
    // entrada del segundo numero

    cout << "Segundo numero " << endl;
    cout << "x= ";
    cin >> z2.real;

    cout << "iy= ";
    cin >> z2.imag;
    cout << endl;

}

struct complex suma_complex(struct complex n1, struct complex n2)
{
    struct complex suma; // variable en la que se almacena la suma

    suma.real = n1.real + n2.real;
    suma.imag = n1.imag + n2.imag;

    return suma;

}

struct complex producto_complex(struct complex n1, struct complex n2)
{
    struct complex producto; // variable en la que se almacena la suma

    producto.real = n1.real * n2.real-n1.imag*n2.imag;
    producto.imag = n1.real*n2.imag+n1.imag*n2.real;

    return producto;

}



void mostrardatos(struct complex n)
{
    // imprime los datos de la estructuras
    cout << endl;
    cout << "Parte real " << n.real << endl;
    cout << "Parte imaginaria " << n.imag << endl;

}