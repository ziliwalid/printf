#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Does printing magic
 * @format: format param
 * Return: number of stuff that we printed
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list argList;
	char case_c, case_s;

	va_start(argList, format);
	/*Handling the case asked in the task*/
	if (!format || !format[0])
	{
		return (0);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				case_c = va_arg(args, int); /*code ascii (ints)*/
				charPrinter(case_c);
				counter++;
			}
		}
	}
}
