#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc -function that allocates memory for an array, using malloc
* @size: array size
* @nmemb: number of array members
* Return: pointer to allocated new memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *output;
if (nmemb == 0 || size == 0)
return (NULL);
output = calloc(nmemb, size);
if (output == NULL)
return (NULL);
else
return (output);
}
