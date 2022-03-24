#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h> 
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i = 0, num, dec;
	char letra;
	va_list arguments;

	va_start(arguments, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%') /* diferente a % */
			write(1, &format[i], 1);
		if (format[i] == '%') 
		{
			i++; /* aumenta un paso */
			switch (format[i])
			{
				case 'c':
					letra = va_arg(arguments, int);
					write(1, &letra, 1);
					break;
				case 'i':
					num = va_arg(arguments, int);
					dec = num / 10;
					dec = dec + '0';
					write(1, &dec, 1);
					num = num % 10;
					num = num + '0';
					write(1, &num, 1);
					break;
				default:
					printf("Error, not valid specifier");
			}
		}
		i++;
	}
}

int main(void)
{
	_printf("a simple char = %d, and a number = %i\n", 'J', 85);
}

	
