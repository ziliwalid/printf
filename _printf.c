#include "main.h"

/**
 * _printf - Does printing magic
 * @format: format parameter
 * Return: number of characters printed
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
					counter += charPrinter(va_arg(argList, int)); /*ascii code int*/
					break;
				case 's':
					counter += str_handler(va_arg(argList, char *));
					break;
				case 'd':
				case 'i':
					counter += int_handler(va_arg(argList, int));
					break;
				default:
					charPrinter('%');
					counter++;
					charPrinter(*format);
					counter++;
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

