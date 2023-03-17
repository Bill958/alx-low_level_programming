#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in upper and lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(tolower(alp[i]));
		putchar(toupper(alp[i]));
	}
	putchar('\n');
	return (0);
}
