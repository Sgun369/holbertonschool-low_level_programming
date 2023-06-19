#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit < 10; digit++)
{
putchar('0' + digit);
}
for (digit = 0; digit < 6; digit++)
{
putchar('a' + digit);
}
putchar('\n');
return (0);
}
