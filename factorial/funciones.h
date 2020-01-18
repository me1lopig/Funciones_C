#pragma once

// uso de funciones desde un archivo externo al principal


// declaracion de funciones
double factorial(int);
double factorial_r(int);
double suma(int);
double suma_r(int);



// desarrollo de las funciones
double factorial(int num)
{
	// factorial sin recursividad
	float fact = 1;

	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}



double factorial_r(int num)
{
	// factorial con recursividad
	// tarda mas en dar infinito que el no recursivo
	double fact = 1;

	if (num == 0)
	{
		 fact = 1;
	}

	else
	{
		fact = num * factorial_r(num - 1);
	}
	return fact;
}

double suma(int num)
{
	// suma no recursiva
	double suma = num;

	for (int i = num; i >0; i--)
	{
		suma +=(i-1);
	}
	
	return suma;
}



double suma_r(int num)
{
	// suma con recursividad
	double suma = 0;

	if (suma <= num)
	{
		suma += (num+suma_r(num - 1));
	}

	return suma;
}
