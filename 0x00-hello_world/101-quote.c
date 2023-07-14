#include <unistd.h>

/**
* main - Entry point
* Description: the code will make use of the write function
* Return: return error 1
*/

int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, str, 59);
return (1);
}
