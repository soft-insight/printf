#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"



int _printf(const char *format, ...)
{
	int i = 0, num;
	int len = 0;
	unsigned int ui;
 	char letter;
        char *str;
	char ustr[64];

	char buffer[sizeof(char) * 512];
	char nstr[64];
	

        va_list arguments;

        va_start(arguments, format);

        while(format[i] != '\0')
        {
                if (format[i] != '%')
		{
			buffer[len] = format[i];
			len++;
		}
                if (format[i] == '%')
                {
                        i++;
                        switch (format[i])
                        {
                                case 'c':
                                        letter = va_arg(arguments, int);
                                        /*write(1, &letra, 1);*/
					buffer[len] = letter;
					len++;
					break;
                                case 'i':
					num = va_arg(arguments, int);
					int_str(num, nstr);
					/*write(1, &nstr, 4);*/
					len = _addstr(buffer, nstr, len);
					break;
				case 'd':
					num = va_arg(arguments, int);
					int_str(num, nstr);
					/*write(1, &nstr, 4);*/
					len = _addstr(buffer, nstr, len);
					break;
				case 's':
                                       
				       	str = va_arg(arguments, char *);
					/*print_str(str, buffer, len);*/
					len = _addstr(buffer, str, len);
                                        /* write(1, &str[k], 1);*/
                                        break;
				case 'u':
					ui = va_arg(arguments, unsigned int);
					uint_str(ui, ustr, 10);
					len = _addstr(buffer, ustr, len);
					break;
				case 'o':
					ui = va_arg(arguments, unsigned int);
					uint_str(ui, ustr, 8);
					len = _addstr(buffer, ustr, len);
					break;
				case '%':
					buffer[len] = '%';
					len++;
					break;
				
                                default:
					--i;
					buffer[len] = format[i];
					len++;
                        }
                }
                i++;
        }
	buffer[len] = '\0';
	write(1, &buffer, len);
	va_end(arguments);

	return (len);
}
