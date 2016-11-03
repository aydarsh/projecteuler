#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	long sum=0;
	for(int i=1; i<=100; sum += i, i++);
	sum *= sum;
	for(int i=1; i<=100; sum -= (i*i), i++);
	printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %li\n",sum);
	return 0;
}

