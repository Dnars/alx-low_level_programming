#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() -  RAND_MAX / 2;
	l = n % 10;

	if(1 > 5){
		printf("Last digit of %d id %d and is greater than 5\n", n, l)
	}
	if(1 == 0){
		printf("Last digit of %d is %d and is 0\n", n, l)
	}
	if(1 < 6 && 1 != 0){
		printf("Last digit of %d is %d and isnless than 6 and not 0\n", n, l)
	}

	return (0);
}
