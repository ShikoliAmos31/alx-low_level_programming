#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2-dimensional grid
* @grid: multidimensional array
* @height: height of the grid
*
* Return: no return.
*/
void free_grid(int **grid, int height)
{
if (grid != NULL && height > 0)
{
for (; height > 0; height--)
{
free(grid[height - 1]);
}
free(grid);
}
}
