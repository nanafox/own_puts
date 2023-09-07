#include <unistd.h>
#include "main.h"

/**
 * echo_err - write string s to stderr
 *
 * @s: string
 * Return: length of s
 */
int echo_err(const char *s)
{
	int i = _len(s);

	write(2, s, i);
	write(2, "\n", 1);

	return (i);
}
