#include <stdio.h>
#include <math.h>

long long n=600851475143;

int main(int argc, char **argv)
{
	int m = ceil(sqrt(n));
	int j;
	for (int i=2; i < m;)
		if ((n%i)==0) {n = n/i; j=i;}
		else i++;
		
	printf("The largest prime factor of 600851475143 is %i\n", j);
	return 0;
}
