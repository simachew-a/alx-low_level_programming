#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int n;
	int ln;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        ln = n % 10;
	if (ln  > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ln);
	}
	else if (ln == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ln);
	}
	else 
	{
		printf("last digit of %d is %d and is less than 5\n", n, ln);
	return (0);
	}
}
