#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"

int c_manage(int len, char *buff, va_list arg)
{
	int lett = '0';

	lett = va_arg(arg, int);
        buff[len] = (char )lett;
        len++;
	return len;
}

int i_manage(int len, char *buff,  va_list arg)
{	int num = 0;
	char *str;
	str = (char *)malloc(sizeof(char)*20);

	num = va_arg(arg, int);
        int_str(num, str);
        len = _addstr(buff, str, len);
	free(str);
	return len;
}

int d_manage(int len, char *buff, va_list arg)
{	int num = 0;
	char *str;
        str = (char *)malloc(sizeof(char)*20);

	num = va_arg(arg, int);
        int_str(num, str);
	len = _addstr(buff, str, len);
	free(str);
	return len;
}
int s_manage(int len, char *buff, va_list arg)
{
	char *str;
        str = (char *)malloc(sizeof(char)*20);

	str = va_arg(arg, char *);
        if (str == NULL)
        	str = "(null)";
        len = _addstr(buff, str, len);
	free(str);
	return len;
}

int u_manage(int len, char *buff, va_list arg)
{	unsigned int ui = 0;
	char *ustr;
        ustr = (char *)malloc(sizeof(char)*20);

	ui = va_arg(arg, unsigned int);
        uint_str(ui, ustr, 10);
        len = _addstr(buff, ustr, len);
	free(ustr);
	return len;
}

int o_manage(int len, char *buff, va_list arg)
{	unsigned int ui = 0;
        char *ustr;
        ustr = (char *)malloc(sizeof(char)*20);

	ui = va_arg(arg, unsigned int);
        uint_str(ui, ustr, 8);
        len = _addstr(buff, ustr, len);
	free(ustr);
	return len;
}

int b_manage(int len, char *buff, va_list arg)
{	unsigned int ui = 0;
        char *ustr;
        ustr = (char *)malloc(sizeof(char)*20);

	ui = va_arg(arg, unsigned int);
        uint_str(ui, ustr, 2);
        len = _addstr(buff, ustr, len);
	free(ustr);
	return len;
}
int x_manage(int len, char *buff, va_list arg)
{	unsigned int ui = 0;
        char *ustr;
        ustr = (char *)malloc(sizeof(char)*20);

	ui = va_arg(arg, unsigned int);
        uint_str(ui, ustr, 16);
        len = _addstr(buff, ustr, len);
	free(ustr);
	return len;
}

int X_manage(int len, char *buff, va_list arg)
{	unsigned int ui = 0;
        char *ustr;
        ustr = (char *)malloc(sizeof(char)*20);

	ui = va_arg(arg, unsigned int);
        uint_str3(ui, ustr, 16);
        len = _addstr(buff, ustr, len);
	free(ustr);
	return len;
}

int p_manage(int len,char *buff, va_list arg)
{	intptr_t adrr;
	long int *adr;
        char *ustr;
        ustr = (char *)malloc(sizeof(char)*20);

	adr = va_arg(arg, long int *);
        adrr = (uintptr_t)adr;
        uint_str2(adrr, ustr, 16);
        len = _addstr(buff, ustr, len);
	free(ustr);
	return len;
}
