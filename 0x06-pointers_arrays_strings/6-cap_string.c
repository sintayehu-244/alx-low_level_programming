#include "main.h"
/**
 * cap_string- a function to function that capitalizes all words of a string
 * @s: that's our string
 *
 *
 *
 * Return: answer
 */
char *cap_string(char *s)
{
int i = 0;
int z = 1;
char *answer = s;
char *spesh = " \t\n;,.!?\"(){}\0";

while (*s)
{
if (z)
{
if (*s >= 'a' && *s <= 'z')
*s = *s - 32;
z = 0;
}
for (i = 0; spesh[i]; i++)
{
if (*s == spesh[i])
z = 1;
}
s++;
}
return (answer);
}
