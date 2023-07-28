#include <stdio.h>

void new_idea(void) __attribute__ ((constructor));

/**
 * new_idea - prints a sentence before the main
 * function executed
 */

void new_idea(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
