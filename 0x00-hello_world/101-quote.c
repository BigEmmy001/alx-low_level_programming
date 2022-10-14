#include <unistd.h>

/**
 * main - write to stdout
 * Return: Always 0
 */
int main(void)
{
	write(1, "and thst piece ofart is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
