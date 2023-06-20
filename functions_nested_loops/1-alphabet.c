#include "putchar.h"
/**
*prints alphabet - from a to z
*return: always 0
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
