#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 *
 * Rturn: Always 0
 */
void  print_alphabet(void)
{
	char low_alpha;

	for (low_alpha = 'a'; low_alpha <='z'; low_alpha++)
		_putchar(low_alpha);
	_putchar('/n');
}
