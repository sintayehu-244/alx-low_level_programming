#include<main.h>
/**
 * Write a function that capitalizes all words of a string
 * @s: that's our string
 *
 *
 *
 * Return: answer
 */
char *cap_string(char *string);
{
int i = 0;
int z = 1;
char *answer = s;
char *spesh = " \t\n;,.!?\"(){}\0";
while(*string)

{
if ( *string >= 'a' && *string <= 'z' )
{
*string = *string - 32;
}
string++;
}
return (answer);
}
