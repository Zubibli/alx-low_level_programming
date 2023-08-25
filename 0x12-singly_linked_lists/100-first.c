#include <stdio.h>

void __attribute__((constructor)) tortoise(void);
/**
 * totoise - prints a string before the main function is executed
 */
void tortoise(void)
{
	printf("you are beat! and yet, you must allow,\n"
			"i bore my house upon my back!\n");
}
