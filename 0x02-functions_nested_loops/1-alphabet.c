#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Description: print the alphabet, in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
}
