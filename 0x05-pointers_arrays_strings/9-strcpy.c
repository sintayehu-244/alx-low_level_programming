#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
dest[i] = *src;
src++;
}

dest[i++] = *src;

return (dest);
}
