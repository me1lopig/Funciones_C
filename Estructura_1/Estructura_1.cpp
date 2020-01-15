// Estructura_1.cpp 
// ejemplo de paso de estructuras a funciones

//

#include <iostream>

using namespace std;


//declaracion de variables globales

struct persona
{
    char nombre[30];
    int edad;
};

struct persona p1;

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

void mostrardatos(persona p1)
{
    // imprime los datos de la estructuraa
    cout << "El nombre es " << p1.nombre << endl;
    cout << "La edad es " << p1.edad << endl;
}
