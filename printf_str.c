#include "main.h"
/**
 * printf_str - String
 * @val: va_list
 * Return: Function of the string
 */
int printf_str(va_list val)
{
	char *s;
	int len = 0;

	s = va_arg(val, char *);

	if (s == NULL)
		s = "(null)";
	len += _puts(s);
	return (len);
}
/**
 * printf_char - Print character
 * @val: val_list
 * Return: The length of the char
 */
int printf_char (va_list val)
{
	char c = va_arg(val, int);

	_putchar(c);
	return (1);
}

/**
 * printf_special_char - Replace non-character with hexadecimal value
 * @val: va_list
 * Return: Length of the string
*/
int printf_special_char(va_list val)
{
	char *s = va_arg(val, char *);
	char *s_cpy = malloc(sizeof(char) * string_len(s) + 1);
	int i = 0, len = 0;

	if (s == NULL || s_cpy == NULL)
	{
		free(s_cpy);
		return (-1);
	}
	while (s[i])
	{
		if ((s[i] < 32 || s[i] >= 127) && s[i] < 16)
		{
			len += _puts("\\x0");

			if (s[i] >= 0 && s[i] <= 9)
				s_cpy[i] = s[i] + '0';
			else
				s_cpy[i] = 55 + s[i];
		}
		else
			s_cpy[i] = s[i];
		len += _putchar(s_cpy[i]);
		i++;
	}
	free(s_cpy);
	return (len);
}
