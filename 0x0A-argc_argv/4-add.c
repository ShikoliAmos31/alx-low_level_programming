#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - Check if a string contains only digits.
* @str: String to check
*
* Return: 1 if all characters are digits, 0 otherwise.
*/
int check_num(char *str)
{
int count = 0;
while (str[count] != '\0')
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;
if (argc < 2)
{
printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
return (1);
}
for (count = 1; count < argc; count++)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error: %s is not a valid number\n", argv[count]);
return (1);
}
}
printf("Sum: %d\n", sum);
return (0);
}
