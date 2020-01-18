// fechas_2.cpp 
// introducir dos fechas e inidicar cual es la mayor
// las funciones solo pueden hacer una sola cosa

#include <iostream>

using namespace std;

struct fecha
{
    // estructura tipo fecha
    int dias;
    int mes;
    int anho;
};

// declaracion de las funciones a usar
void pedirdatos(struct fecha&); // funcion para solicitar datos se para por referencia
void mostrardatos(struct fecha); // imprime los valores de la variable
int numero_dias(struct fecha); // pasamos a dias la fecha introducida
void fecha_mayor(struct fecha,int, struct fecha,int); // selecciona la fecha mayor

// declaracion de las variables fecha
struct fecha fecha1;
struct fecha fecha2;

int main()
{
    int dias_fecha1;
    int dias_fecha2;
    
    // solicitud de los datos

    pedirdatos(fecha1);
    pedirdatos(fecha2);
   
    // calculamos los dias equivalentes
    dias_fecha1 = numero_dias(fecha1);
    dias_fecha2 = numero_dias(fecha2);

    // comparacion de fechas
    fecha_mayor(fecha1,dias_fecha1,fecha2,dias_fecha2);

    // parada para terminar
    cout << "\nPulsa una tecla para terminar ";
    cin.get();
    return 0;
}

void pedirdatos(struct fecha &data)
{
    // funcion para la entradad de datos de las fechas
    // los datos se introducen por referencia

    cout << "\nIntroducir fecha " << endl;

    cout << "dias= ";cin >> data.dias;
    cout << "meses= ";cin >> data.mes; 
    cout << "anhos= ";cin >> data.anho;
}

void mostrardatos(struct fecha data)
{
    // imprime los datos de la estructuras
    cout << data.dias << "/" << data.mes << "/" << data.anho << endl;
}


int numero_dias(struct fecha data)
{
    // pasamos el dato  fecha a dias 
     int n_dias = data.dias + 30 * data.mes + 365 * data.anho;

     return n_dias;
}

void fecha_mayor(struct fecha fecha1,int dias_fecha1, struct fecha fecha2,int dias_fecha2)
{

    if (dias_fecha1 > dias_fecha2)
    {
        cout << "La fecha mayor es ";
        mostrardatos(fecha1);
        cout << endl;
    }
    if (dias_fecha2 > dias_fecha1)
    {
        cout << "La fecha mayor es ";
        mostrardatos(fecha2);
        cout << endl;
    }

    if (dias_fecha1 == dias_fecha2) cout << "Las fechas son iguales";

}