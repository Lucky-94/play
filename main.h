#include "main.h"
#include <stddef.h>

int _strlen(const char *s);
int power(int base, int power);
/**
 * _strlen-calculates the length of a string
 * @s: pointer to the string
 * Return: an integer
 */
int _strlen(const char *s)
{
	int i, length = 0;

	for (i = 0; s[i]; i++)
		length += 1;
	return (length);
}
/**
 * power-calculates the exponent of a number
 * @base: base number
 * @exp: power to be raised to
 * Return: integer
 */
int power(int base, int exp)
{
	int i = 1, ans = base;

	if (exp == 0)
		return (1);
	while (i < exp)
	{
		ans = ans * base;
		i++;
	}
	return (ans);
}
/**
 * binary_to_uint-converts binary to unsigned int
 * @b: pointer to a string of 0s and 1s
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int length = _strlen(b), i = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (i < length)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		sum += ((b[i] - 48) * power(2, length - 1 - i));
		i++;
	}
	return ((unsigned int)sum);
}
