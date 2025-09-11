#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints a string literal stderr
 *
 * Return: 1 success, 0 otherwise
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));

	return (1);
}