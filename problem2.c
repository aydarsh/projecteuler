#include <stdio.h>

int main(int argc, char **argv)
{
	long sum=2;
	for (int m=1, n=2, k=3; k <= 4000000; m=n, n=k, k=m+n)
		if (!(k%2)) sum += k;
	
	printf("The sum of the even-valued terms of the Fibonacci sequence not greater than 4000000 equals %li\n", sum);
	return 0;
}

