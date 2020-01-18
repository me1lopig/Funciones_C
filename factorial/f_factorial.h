#pragma once

// uso de funciones desde un archivo externo al principal


// declaracion de funciones
double factorial(int);
double factorial_r(int);


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
	float fact = 1;

	if (num == 0)
	{
		return fact = 1;
	}

	else
	{
		fact = num * factorial_r(num - 1);
	}
	return fact;
}