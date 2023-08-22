#include "main.h"
/**
 * get_format - Function to get format
 * @s: String format
 * Return: Call function
 */
int (*get_format(char *s))(va_list val)
{
	convert_fmt map[] = {
		{"c", printf_char},
		{"s", printf_str},
		{"%", printf_37},
		{"d", printf_num},
		{"i", printf_num},
		{"b", printf_bin},
		{"X", printf_HEX},
		{"x", printf_hex},
		{"u", printf_unsigned_int},
		{"o", printf_oct},
		{NULL, NULL}
	};
	int i = 0;

	while (map[i].fmt)
	{
		if (map[i].fmt[0] == *s)
			return (map[i].f);
		i++;
	}
	return (NULL);
}
/**
 * get_func -  Get function
 * @c: Character from format
 * @val: va_list
 * Return: 0
 */
int get_func(char *c, va_list val)
{
	int (*printf_func)(va_list) = get_format(c);

	if (printf_func)
		return (printf_func(val));
	return (0);
}
