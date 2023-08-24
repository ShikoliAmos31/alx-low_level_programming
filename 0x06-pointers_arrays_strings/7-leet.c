#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* leet - function that encodes string with 1337speak
* @n: input string
* Return: n string
*/
char *leet(char *n)
{
int i, j;
char s1[] = "aAeEoOtTiI";
char s2[] = "4433007711";
char *result = strdup(n);

for (i = 0; result[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (result[i] == s1[j])
{
result[i] = s2[j];
break;
}
}
}
return (n);
}
