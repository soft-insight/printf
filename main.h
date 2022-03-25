#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _addstr(char *buffer, char s[],int n);
int _strlen(char *s);
int print_str(char str[], char *buffer, int len);
void reverse(char str[]);
void int_str(int n, char s[]);

#endif
