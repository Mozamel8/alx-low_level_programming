#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **ptr_ar;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
ptr_ar = malloc(sizeof(int *) * height);

if (ptr_ar == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
ptr_ar[x] = malloc(sizeof(int) * width);
if (ptr_ar[x] == NULL)
{

for (; x >= 0; x--)
free(ptr_ar[x]);
free(ptr_ar);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
ptr_ar[x][y] = 0;
}
return (ptr_ar);
}
