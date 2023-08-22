#include "main.h"
/**
 * string_len - String length function
 * @str: String
 * Return: Length of the string
 */
int string_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * digit_len - Digit length function
 * @digits: Diigits
 * @divider: Divisor
 * Return: Length of the number
 */
int digit_len(unsigned int digits, int divider)
{
	int i = 0;

	while (digits != 0)
	{
		i++;
		digits /= divider;
	}
	return (i);
}
/**
 * _isdigit - Check for digit value
 * @c: Character
 * Return: 1 if number exist. 0 otherwise
 */
int _isdigit(char c)
{
	return (c > 47 && c < 58);
}
