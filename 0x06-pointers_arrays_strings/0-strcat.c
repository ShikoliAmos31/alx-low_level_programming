#include "main.h"

/**
* _strcat -function that concatenates two strings
* @dest: destination string (the result will be stored here)
* @src: source string (to be concatenated to the destination)
* Return: pointer to the destination string
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
