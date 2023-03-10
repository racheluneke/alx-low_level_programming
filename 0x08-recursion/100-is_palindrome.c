#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @p: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *p)
{
	if (*p == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(p + 1));
}

/**
 * comparator - compares each character of the string.
 * @p: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int comparator(char *p, int n1, int n2)
{
	if (*(p + n1) == *(p + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(p, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @p: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *p)
{
	if (*p == '\0')
		return (1);
	return (comparator(p, 0, _strlen_recursion(p) - 1));
}
