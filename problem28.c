#include <stdio.h>

//What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?

int main(int argc, char **argv)
{
	long long sum=1;
	int d=0, a1=1;
	
	for (int i=0; d < 1000; i++)
		if (!(i%4)){
			d += 2;
			a1 += d;
			sum += (2*a1 + 3*d)*2;
		}
		else a1 += d;
	
	printf("The sum of the numbers on the diagonals in a 1001 by 1001 spiral is %lld\n", sum);
	
	return 0;
}

