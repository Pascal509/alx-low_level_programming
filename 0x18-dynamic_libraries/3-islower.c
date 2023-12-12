#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: prints all lowercase letters
 * Return: Always(0).
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
