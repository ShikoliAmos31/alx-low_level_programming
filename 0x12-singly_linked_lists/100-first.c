#include "lists.h"
#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first -function that prints a sentence before main function  execution
 *
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
