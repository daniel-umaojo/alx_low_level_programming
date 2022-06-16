#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: New file on last digits of integers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	if (digit < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	return (0);
}
