#include "main.h"

/*o*
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	_putchar("\n");
	}
}
