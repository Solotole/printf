#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.hi>
/**
 * struct specifiers - structure with 3 members
 * @ch: first member
 * @percent: second member
 * @string: third member
 * Description: structure that holds the various variables passed to _printf
 */
//struct specifiers
{
	char ch;
	char percent;
	char *string;
}s;
int _printf(const char *format, ...);
/**
 * print_buffer - prints contents of buffer if it exists
 * @beffer: array of characters
 * @buff_ind index at which to add next char, represents length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
if (*buff_ind > 0)
	write(1, &buffer[0], *buff_ind);
*buff_ind = 0;
}

#endif
