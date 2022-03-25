#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/*_addstr - add a string to a buffer
 *@buffer : pointer to a buffer
 *@s : pointer to string
 *@n : size of the buffer
 *Return : new size of buffer
 */
int _addstr(char buffer[], char s[],int n)
{
        int x = n;
        int y = 0;

        while(s[y] != '\0')
        {       buffer[x] = s[y];
                x++;
                y++;
        }
        return(n + y);
}

/*_strlen : find the size of a string
 *@s : pointer to string
 *Return : length of string
 */
int _strlen(char *s)
{
        int i;

        i = 0;

        while (s[i] != '\0')
        {
                i++;
        }

        return (i);
}

/*
 *
 *
 */

int print_str(char *str, char buffer[], int len)
{
        int leng, k;
        leng = _strlen(str);

        for (k = 0; k < leng; k++)
        {
                buffer[len] = str[k];
                len++;
        }
        return (len);
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

 /*int_str - convert a integer to string
  *@n : integer
  *@s : pointer to string
  */
 void int_str(int n, char s[])
 {
         int i, sign;
         /* num = va_arg(arguments, int);*/

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

 void uint_str(unsigned int n, char s[])
 {
         int i;
         /* num = va_arg(arguments, int);*/

     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
  
     s[i] = '\0';
     reverse(s);

 }

