#include <unistd.h>

/**
 * echo - write string s to stdout
 *
 * @s: string
 * Return: length of s
 */
int echo(const char *s)
{
	int i = 0;

	for (; *s; s++)
		i += write(1, s, 1);
	write(1, "\n", 1);

	return (i);
}
