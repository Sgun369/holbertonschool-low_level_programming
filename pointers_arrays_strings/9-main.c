#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[198];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, Write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}