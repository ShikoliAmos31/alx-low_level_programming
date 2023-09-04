#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array of integers
* @width: number of columns
* @height: number of rows
* Return: Pointer to the 2D array
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **output;

if (width <= 0 || height <= 0)
return (NULL);

output = malloc(sizeof(int *) * height);
if (output == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
output[i] = malloc(sizeof(int) * width);
if (output[i] == NULL)
{
for (j = 0; j < i; j++)
free(output[j]);
free(output);
return (NULL);
}
for (j = 0; j < width; j++)
output[i][j] = 0;
}
return (output);
}
