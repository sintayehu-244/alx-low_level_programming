#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: print lowercase alphabet followed by newline 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
int i=0;
char alph;

while (i++ <= 9)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
}
}
