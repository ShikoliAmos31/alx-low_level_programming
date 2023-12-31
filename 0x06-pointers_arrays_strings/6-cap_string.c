#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
* cap_string - function that capitalizes all words of a string
* @str: string to be capitalized
* Return: A pointer
*/
char *cap_string(char *str)
{
int index = 0;
while (str[index])
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;
if (index == 0 || str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n'
|| str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' || str[index - 1] == '!'
|| str[index - 1] == '?' || str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')'
|| str[index - 1] == '{' || str[index - 1] == '}')
str[index] -= 32;
index++;
return (str);
}
