#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of short: %zu byte(s)\n", sizeof(short));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long: %zu byte(s)\n", sizeof(long));
printf("Size of long long: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of long double: %zu byte(s)\n", sizeof(long double));
#if __SIZEOF_POINTER__ == 4
printf("Size of pointer: 4 byte(s) (32-bit machine)\n");
#elif __SIZEOF_POINTER__ == 8
printf("Size of pointer: 8 byte(s) (64-bit machine)\n");
#else
printf("Size of pointer: Unknown\n");
#endif
return (0);
}
