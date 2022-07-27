#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h> /* POSIX */
#include <stdarg.h>
#include <stdint.h>
#include "main.h"


/**
 * main.h -- Main header file for _printf
 * Authors: Jaime Rodríguez - Jesús Macías - Marco Antonio Ordóñez
 *
 * @format: character string  composed of zero or more directives.
 * Return: the number of characters printed excluding the null byte
 */

typedef struct op_funct
{
	char *op_funct;
	int (*f)(int len,char *buff, va_list arg);

} op_t;


int _printf(const char *format, ...);
int _addstr(char *buffer, char s[], int n);
int _strlen(char *s);
int print_str(char str[], char *buffer, int len);
void reverse(char str[]);
void int_str(long int n, char s[]);
void uint_str(unsigned int n, char s[], unsigned int base);
void uint_str2(long int n, char s[], unsigned int base);
void uint_str3(int n, char s[], unsigned int base);
int c_manage(int len, char *buff, va_list arg);
int i_manage(int len, char *buff, va_list arg);
int s_manage(int len, char *buff, va_list arg);
int u_manage(int len, char *buff, va_list arg);
int o_manage(int len, char *buff, va_list arg);
int b_manage(int len, char *buff, va_list arg);
int p_manage(int len, char *buff, va_list arg);
int x_manage(int len, char *buff, va_list arg);
int X_manage(int len, char *buff, va_list arg);
op_t get_func_cha(char c);

#endif
