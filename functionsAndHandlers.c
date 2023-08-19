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
