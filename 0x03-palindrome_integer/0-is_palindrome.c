#include "palindrome.h"

/**
 * is_palindrome - check if given integer is a palindrome
 *
 * @n: given integer to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(unsigned long n)
{
	unsigned long num = n, switch_num = 0;

	if (n < 10)
		return (1);

	while (num > 0)
	{
		switch_num = switch_num * 10 + num % 10;
		num = num / 10;
	}

	if (n == switch_num)
		return (1);
	else
		return (0);
}
