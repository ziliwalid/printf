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

	va_start(argList, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					counter += charPrinter(va_arg(argList, int));
					break;
				case 's':
					counter += str_handler(va_arg(argList, char *));
					break;
				case 'd':
				case 'i':
					counter += int_handler(va_arg(argList, int));
					break;
				default:
					counter++;
					charPrinter('%');
					counter++;
					putchar(*format);
					break;
			}
		}
		else
		{
			counter++;
			charPrinter(*format);
		}
		format++;
	}
	return (counter);
}
