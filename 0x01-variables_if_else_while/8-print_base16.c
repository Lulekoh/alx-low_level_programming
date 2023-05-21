#include <stdio.h>
#include <stdlib.h>
/**
 * maun - entry point
 * Description: print all single dugit number of base 10
 * starting from 0, followed by a new lime.
 * Return: Alwats 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
