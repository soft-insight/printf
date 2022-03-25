#include <limits.h>
#include <stdio.h>
#include "main.h"

/*
int main(void)
{
<<<<<<< HEAD
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");

        _printf("a char = %c, a number = %i, and a string: %s.\n", 'H', 8500, "new way");
	_printf("lent = %i and lent2 = %i", len, len2);
=======
	int lent;
	int lent2;
	lent = _printf("Let's try to printf a simple sentence.\n");
    	lent2 = printf("Let's try to printf a simple sentence.\n");
<<<<<<< HEAD
*/
        _printf("a char = %c, a number = %i, and a string: %s.\n", 'H', 8500, "new way 123");
/*	_printf("lent = %i and lent2 = %i", lent, lent2);*/
=======

        _printf("a char = %c, a number = %i, and a string: %s.\n", 'H', 8500, "new way");
>>>>>>> 07f314cf961965ad74f32a211e5a319a3fced811
>>>>>>> 03f8ecce64647431782d3e5941e566881f633d12
	return(0);

}
*/

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n"); 
    return (0);
}


