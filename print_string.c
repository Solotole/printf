#include "main.h"

/**
 * print_s - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

