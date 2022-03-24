#include <limits.h> 
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>


int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
 /* reverse:  reverse string s in place */
 void reverse(char str[])
{
    int i, len, temp;  
    len = _strlen(str); /* use strlen() to get the length of str string*/  
      
    /* use for loop to iterate the string*/   
    for (i = 0; i < len/2; i++)  
    {  
        /* temp variable use to temporary hold the string*/  
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    } 
 }



 /* int_str:  convert n to characters in s */
 void int_str(int n, char s[])
 {
     int i, sign;

     if ((sign = n) < 0)  
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }






void _printf(const char *format, ...)
{
        int i = 0, k, num;
        char letra;
	char *str;
	int len;
	char nstr[100];
        va_list arguments;

        va_start(arguments, format);

        while(format[i] != '\0')
        {
                if (format[i] != '%')
                        write(1, &format[i], 1);
                if (format[i] == '%')
                {
                        i++;
                        switch (format[i])
                        {
                                case 'c':
                                        letra = va_arg(arguments, int);
                                        write(1, &letra, 1);
					break;
                                case 'i':
					num = va_arg(arguments, int);
					int_str(num, nstr);
					write(1, &nstr, 4);
					break;
				case 's':
					str = va_arg(arguments, char *);
					len = _strlen(str);
					for (k = 0; k < len; k++)
						write(1, &str[k], 1);
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
        _printf("a simple char = %c, and a number = %i, and a string = %s.\n", 'H', 8500, "a new coding");
	return(0);
}
