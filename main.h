#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main.h -- Main header file for _printf
 * Authors: Jaime Rodríguez - Jesús Macías - Marco Antonio Ordóñez
 */

int _printf(const char *format, ...);
int _addstr(char *buffer, char s[],int n);
int _strlen(char *s);
int print_str(char str[], char *buffer, int len);
void reverse(char str[]);
void int_str(long int n, char s[]);
void uint_str(unsigned int n, char s[], unsigned int base);
void uint_str2(long int n, char s[],unsigned int base);
void uint_str3(int n, char s[],unsigned int base);




#endif
