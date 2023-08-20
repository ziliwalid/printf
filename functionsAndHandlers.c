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
 * str_Handler - Prints a string if not null
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
