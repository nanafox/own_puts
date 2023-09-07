#include <unistd.h>
#include "main.h"

/**
 * echo - write string s to stdout
 *
 * @s: string
 * Return: length of s
 */
int echo(const char *s)
{
	int i = _len(s);

	write(1, s, i);
	write(1, "\n", 1);

	return (i);
}
