#include "main.h"

/**
* _strlen - program that returns the length of a string
* @s: string to be counted
* Return: length
*/
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
