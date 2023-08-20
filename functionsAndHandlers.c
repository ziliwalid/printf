#include "main.h"

/**
 * charPrinter - our own personal putchar
 * @c: char param
 * Return: int
 */
int charPrinter(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_handler - Prints a string if not null
 * @str: string param
 * Return: returns the number of the chars in the str
 */
int str_handler(char *str)
{
	int i = 0;

	while (str[i])
	{
		charPrinter(str[i]);
		i++;
	}
	return (i);
}

/**
  * int_handler - prints a string either neg or pos
  * @n: num pram
  * Return: num of ints
  */
int int_handler(int n)
{
	int counter = 0;
	int temp, numDigits, i, divisor, digit;


	if (n == 0)
		return (charPrinter('0'));/* Print '0' directly*/
	if (n < 0)
	{
		charPrinter('-');
		counter++;
		n = -n;
	}
	temp = n;
	numDigits = 0;
	while (temp > 0)
	{
		temp /= 10;
		numDigits++;
	}

	while (numDigits > 0)
	{
		divisor = 1;
		for (i = 1; i < numDigits; i++)
		{
			divisor *= 10;
		}
		digit = n / divisor;
		charPrinter(digit + '0');
		counter++;
		n %= divisor;
		numDigits--;
	}

	return (counter);
}
