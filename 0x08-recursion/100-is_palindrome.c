#include "main.h"

/**
* _strlen_recursion - Function used to get length of a string
* @s: The string
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}

/**
* compare_string - Function that compares character of a string
* @s: the string
* @right: largest iterator
* @left: smallest iterator
* Return: int
*/
int compare_string(char *s, int right, int left)
{
if (*(s + left) == *(s + right))
{
if (left == right || left == right + 1)
return (1);
return (0 + compare_string(s, left + 1, right - 1));
}
return (0);
}

/**
* is_palindrome -function that detects if the string is palindrome
* @s: string to be tested
* Return: 0 if its not palindrome
* 1 if its palindrome
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare_string(s, 0, _strlen_recursion(s - 1)));
}
