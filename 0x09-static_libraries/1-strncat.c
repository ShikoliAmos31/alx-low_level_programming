#include <string.h>

/**
* _strncat - function that concatenates two strings
* @dest: destination string
* @src: source string
* @n: number of bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
