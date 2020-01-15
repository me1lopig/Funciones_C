// Estructura_1.cpp 
// ejemplo de paso de estructuras a funciones
// ojo con la declaracon de variable struct para funciones
// hay que colocar struct nombre en la declaración y en la definición
// 
//

#include <iostream>

using namespace std;


//declaracion de variables globales

struct persona
{
    char nombre[30];
    int edad;
};

struct persona p1; // declaracion de la variable de tipo persona

// declaracion y prototipado de variables 
void pedirdatos();
void mostradatos(struct persona);


int main(void)
{


    pedirdatos();// entrada de datos

    mostradatos(p1); // salidad de los datos introducidos


    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}


void pedirdatos()
{
    // funcion para la entradad de datos de una estructura
    cout << "nombre de la persona ";
    cin.getline(p1.nombre, 30, '\n');

    cout << "Introduce la edad ";
    cin >> p1.edad;

}

void mostradatos(struct persona p)
{
    // imprime los datos de la estructuras
    cout << endl;
    cout << "El nombre es " << p.nombre << endl;
    cout << "La edad es " << p.edad << endl;
}

