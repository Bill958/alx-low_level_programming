#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	
	for (i = 0; i < 26; i++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
