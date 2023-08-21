#include "main.h"
/**
 * printf_bin - Print binary numbers
 * @val: va_list
 * Return: Legnth of thenumber
 */
int printf_bin(va_list val)
{
	unsigned int number = va_arg(val, unsigned int);
	int rem; /*Remainder of number after getting divided by 2*/
	unsigned int num_cpy = number;
	int i = 0, j, len = 0;
	char *s;

	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	while (num_cpy != 0)
	{
		len++;
		num_cpy /= 2;
	}

	s = malloc(sizeof(int) * len); /*Allocate memory: Length of the number*/
	if (s == NULL)
		return (-1);

	while (i < len)
	{
		rem = number % 2;
		number = number / 2;
		s[len - (i + 1)] = rem | '0';
		i++;
	}
	s[i] = '\0';

	/*Output the  binary numbers*/
	j = 0;
	while (s[j])
		_putchar(s[j++]);
	free(s);
	return (j);
}
