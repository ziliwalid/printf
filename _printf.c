#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf : returns the printed characters
 *
*/

int _printf(const char *format, ...)
{
	int counter = 0;

	va_list argList;
	va_start(argList, format);
	
	/*Handling the case asked in the task*/
	if(!format || !format[0])
	{
		return (0);
	}
}
