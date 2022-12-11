#include <stdio.h>
/**
 * main - entry point for the program
 * description: returns the value of each input type
 * prints the values
 * Return: a value 0; if no error, value of non zero if ther is errors
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int ll;
	float f;

	printf("size of char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of long int: %d  byte(s)\n", sizeof(li));
	printf("size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("size of a float: %d byte(s)\n" sizeof(f));
	return (0);
}
