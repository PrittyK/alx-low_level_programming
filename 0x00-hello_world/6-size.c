#include <stdio.h>
/**
 * main - entry point for the program
 * description: returns the value of each input type
 * prints the values
 * Return: a value 0; if no error, value of non zero if ther is errors
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d  byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

