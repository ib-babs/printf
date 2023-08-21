#include "main.h"
/**
 * printf_num - Print numbers
 * @val: va_list
 * Return: Void
 */
int printf_num(va_list val)
{
	int number = va_arg(val, int);
	int rem; /*Remainder of number after getting divided by 10*/
	int num_cpy = number;
	int i = 0, j = 0, len = 0;
	char *s;

	if (number < 0)
	{
		_putchar('-');
		number = (number - (number + 1)) * number;
	}
	/*Looping through copy of the number to get the length of the number*/
	while (num_cpy != 0)
	{
		len++;
		num_cpy /= 10;
	}
	s = malloc(sizeof(char) * len); /*Allocate memory: Length of the number*/

	while (i < len)
	{
		rem = number % 10;
		number = number / 10;
		s[len - (i + 1)] = rem | '0';
		i++;
	}
	s[i] = '\0';

	/*Output the numbers*/
	while (s[j])
		_putchar(s[j++]);

	return (0);
}
