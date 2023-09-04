#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that copies string to a newly located space in memory
* @str: string to copy to new memory
*
* Return: Pointer to new string
*/

char *_strdup(char *str)
{
int i, count = 0;
char *copy;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
count++;

copy = (char *)malloc(sizeof(char) * (count + 1));
if (copy == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
copy[i] = str[i];

copy[i] = '\0';
return (copy);
}
