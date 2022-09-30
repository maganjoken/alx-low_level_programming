#include <stdio.h>
#include "main.h"

/**
 * main - prints the multipilication of two integers
 * @argc: counts arguments
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 3)
	{
		a = ato1(argv[1]);
		b = ato1(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
