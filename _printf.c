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
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				case_c = va_arg(args, int); /*code ascii (ints)*/
				counter += charPrinter(case_c);
			}
			else if (*format == 's')
			{
				*case_s = va_arg(args, char *);
				counter += str_Handler(case_s);
			}
			else if (*format == '%')
			{
				charPrinter('%');
				counter++;
			}
			else
			{
				charPrinter(*format);
				counter++;
			}
		}
	}
}
