#include "main.h"

/**
 * binary_to_uint - to Convert a binary number to an unsigned int
 * @b:  string representation of the binary number
 *
 * Return: an unsigned int representation of the binary number, otherwise,
 * 0 if b is NULL or the string is invalid (all characters arent 1 or 0)
 */
unsigned int binary_to_uint(const char *b)
{
	int a, i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (a = 0; *(b + a) != '\0'; a++)
	{
		if (!(b[a] == '0' || b[a] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (a - i - 1)));

	return (num);
}

