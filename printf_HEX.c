#include "main.h"
/**
 * printf_HEX - Hex function
 * @val: va_list
 * Return: length of number
 */

int printf_HEX(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int rem; /*Remainder of number after getting divided by 2*/
	unsigned int num_cpy = number;
	int i = 0, j = 0, len = 0;
	char *s;

	if (number == 0)
		return (_putchar('0'));
	while (num_cpy != 0)
	{
		len++;
		num_cpy /= 16;
	}
	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (-1);
	while (i < len)
	{
		rem = number % 16;
		if (rem > 9 && rem <= 15)
			s[len - (i + 1)] = (65 - 10) + rem;
		else
			s[len - (i + 1)] = rem + '0';
		number = number / 16;
		i++;
	}
	s[i] = '\0';

	while (s[j])
		_putchar(s[j++]);
	free(s);
	return (j);
}
