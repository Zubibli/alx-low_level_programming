#include <stdio.h>

void __attribute__((constructor)) tortoise(void);
/**
 * tortoise - constructor function
 * tortoise - prints a string before the main function is executed
 * Description: This is a constructor function that is executed automatically
 * before the main function when the programme starts.
 */
void tortoise(void)/* automatic execution*/
{
	printf("you are beat! and yet, you must allow,\n"
			"i bore my house upon my back!\n");
}
