#include "palindrome.h"

/**
 * is_palindrome - Checks if a given integer is a palindrome
 *
 * @n: The integer to check
 *
 * Description: Checks if a given integer is a palindrome.
 * Single digit integers are palindromes
 *
 * Return: 1 if n is a palindrome, if not 0.
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
