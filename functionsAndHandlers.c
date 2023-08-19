#include "main.h"
#include <stdio.h>

/**
 * charPrinter - sums nums
 * @c: char param
 * Return: int
 */
int charPrinter(char c)
{
	return (write(1, &c, 1));
}

/**
 *  - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 */

int str_Handler(char *str)
{
	int i =0; /*str position*/
	if (str == NULL)
	{
		 str_Handler("(null)");
		 return str
	}
}
