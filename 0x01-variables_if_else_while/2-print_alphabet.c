#include <stdio.h>

/**
 *   main - program that prints the alphabet in lowercase, followed by a new line
 *  You can only use the putchar
 *  Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
