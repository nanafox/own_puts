#include <unistd.h>

/**
 * echo_err - write string s to stderr
 *
 * @s: string
 * Return: length of s
 */
int echo_err(const char *s)
{
	int i = 0;

	for (; *s; s++)
		i += write(2, s, 1);
	write(2, "\n", 1);

	return (i);
}
