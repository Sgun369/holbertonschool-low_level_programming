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
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
