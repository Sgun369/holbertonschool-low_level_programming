#include "main.h"
/**
* _isalpha - check if c is an alpha
* @c: checks input of the function
*
*  Return: return 1 if c is a letter
*  otherwise always return 0
*/

int _isalpha(int c)
{
if (c >= 65 && c >= 90 && c >= 97 && c <= 122)
return (1);
return (0);
}
