#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"
#include <string.h>

op_t get_func_cha(char c)
{
	op_t ops[] = {
		{"c", c_manage},
		{"i", i_manage},
		{"s", s_manage},
		{"u", u_manage},
		{"o", o_manage},
		{"b", b_manage},
		{"p", p_manage},
		{"x", x_manage},
                {"X", X_manage},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op_funct != NULL)
	{
		if (strcmp(&c, ops[i].op_funct) == 0)
			break;
		i++;
	}
	return (ops[i]);
}
