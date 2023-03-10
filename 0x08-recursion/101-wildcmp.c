#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contains a * as a special character.
 * Return: 1 if are identical, 0 if not.
 */
int wildcmp(char *n1, char *n2)
{
	if (*n2 == '*' && *(n2 + 1) != '\0' && *n1 == '\0')
		return (0);
	if (*n1 == '\0' && *n2 == '\0')
		return (1);
	if (*n1 == *n2)
		return (wildcmp(n1 + 1, n2 + 1));
	if (*n2 == '*')
		return (wildcmp(n1, n2 + 1) || wildcmp(n1 + 1, n2));
	return (0);
}
