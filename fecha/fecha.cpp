// fecha.cpp : introducir un numero entero y dar la fecha año, mes y dia desde 1/1/2000
// introduciendo un numero entero
// año, mes y dia son pasadas por referencia 
//

#include <iostream>

using namespace std;

void fecha(int, int&, int&, int&); // funcion para el calculo de los años, meses y días

int main()
{
    int dias; // valor de entrada 
    int year=0;
    int mes=0;
    int dia=0;
   

    cout << "Introduce el numeros de dias "; cin >> dias;
    
    fecha(dias, year, mes, dia);

       
    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();

    return 0;
}


void fecha(int dias, int& year, int& mes, int& dia)
{
    // se introduce un numero de dias
    // descompone la  fecha en años, meses y dias

    year = dias / 365; // calculo de los años
    dias %= 365; // dias libres de meses despues de quitarle los años
    
    mes = dias / 30; // calculo de los meses
    dia =dias % 30; // dias libres despues de quitarle los meses

    if (mes == 12)
    {
        // correccion por 12 neses
        mes -= 1;
        year += 1;
    }

    if (dia == 30)
    {
        // correccion por 30 días
        mes += 1;
        dia -= 1;
    }


    // impresion de resutados
    cout << "Numero de anhos " << year << endl;
    cout << "Numero de meses " << mes << endl;
    cout << "Numero de dias " << dia << endl;

    // impresion de formato de fecha
    cout << "\nFormato de fecha " << dia + 1 << "/" << mes+1  << "/" << year + 2000 << endl;



}
