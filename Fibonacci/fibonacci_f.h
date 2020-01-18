#pragma once
#include<math.h>

// declaración de las funciones

double fibonacci_f(int); // con formula de terminos
double fibonacci_r(int); // con recursión


// definicion de las funciones


double fibonacci_r(int num)
{
	// serie de fibonacci con recursion

	double fibo=0;

	if (num == 1)
	{
		fibo = 0;
	}
	else if (num==2)
	{
		fibo = 1;
	}

	else
	{
		fibo += (fibonacci_r(num-1)+ fibonacci_r(num - 2));
	}

	return fibo;
}

double fibonacci_f(int num)
{
	// serie de fibonacci con fórmula

	num--;
	double fibo = (1 / sqrt(5))*(pow((1+sqrt(5))/2,num)- pow((1 - sqrt(5)) / 2, num));

	return fibo;
}

