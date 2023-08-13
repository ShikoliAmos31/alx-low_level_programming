#include<stdio.h>

/**
* main - program that prints all the number of base 16 in lowercase
*
* Return: always 0
*/
int main(void)
{
char j;
int i;

for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
for (j = 'a' ; j <= 'f' ; j++)
putchar(j);
putchar('\n');
return (0);
}

