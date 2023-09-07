/**
 * _len - get length of string
 * @s: string
 * Return: string length
 */
int _len(const char *s)
{
	int i = 0;

	for (; *s; s++, i++)
		;
	return (i);
}
