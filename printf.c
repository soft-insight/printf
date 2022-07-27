#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"

/**
 * _printf - Start function for printf project
 * @format: String to print with formatting options
 * Return: -1 on failure, lenght of printed string otherwise
 */


int _printf(const char *format, ...)
{	
	int (*function)(int len,char *buff, va_list arg);
	op_t f;
	int i = 0;
	int len = 0;
	char *buffer;
	va_list arguments;

	va_start(arguments, format);
	buffer = (char *)malloc(2048*sizeof(char));
	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer[len] = format[i];
			len++;
		}
		if (format[i] == '%')
		{
			i++;
			f = get_func_cha(format[i]);
			function = f.f;
			len = function(len, buffer, arguments);
			
		}
		i++;
	}
	buffer[len] = '\0';
	write(1, &buffer, len);
	free(buffer);
	va_end(arguments);

	return (len);
}
