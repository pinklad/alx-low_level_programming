#include "main.h"
#include <stdio.h>
/**
 * main - prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
