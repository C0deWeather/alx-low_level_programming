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
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	write(2, str, len);

	return (1);
}
