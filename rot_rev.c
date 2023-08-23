#include "main.h"
/**
 * string_rev - Reverse string
 * @val: va_list
 * Return: Length of the reversed string
 */
int string_rev(va_list val)
{
	char *s = va_arg(val, char *);
	unsigned int len = string_len(s);
	int i = len - 1;

	while (i >= 0)
		_putchar(s[i--]);
	return (len);
}
/**
 * rot13 - Rotate 13 character
 * @val: va_list
 * Return: Length of the rotated string
 */
int rot13(va_list val)
{
	char *s = va_arg(val, char *);
	char *myrot = malloc(sizeof(char) * string_len(s) + 1);
	int index;

	if (s == NULL || myrot == NULL)
	{
		free(myrot);
		return (-1);
	}

	for (index = 0; s[index] != '\0'; index++)
	{
		if ((s[index] > 96 && s[index] < 123) || (s[index] > 64 && s[index] < 91))
		{
			if ((s[index] > 64 && s[index] < 91))
				myrot[index] = ((s[index] - 'A' + 13) % 26) + 'A';
			else if ((s[index] > 96 && s[index] < 123))
				myrot[index] = ((s[index] - 'a' + 13) % 26) + 'a';
		}
		else
			myrot[index] = s[index];
	}
	myrot[index] = '\0';

	_puts(myrot);
	free(myrot);
	return (string_len(s));
}
