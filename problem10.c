#include <stdio.h>
#include <math.h>
//the sum of all the primes below two million
const int n=2000000;

int main(int argc, char **argv)
{
	short isprime[n+1];
	int size = sizeof(isprime)/sizeof(short);
	
	for (int i=0; i < size; i++) isprime[i]=1;
	isprime[0]=0; isprime[1]=0;
	
	int m = ceil(sqrt(n));
	for (int j=2; j < m; j++)
		for (int i=j+1; i < size; i++)
			if (isprime[i]) if ((i%j)==0) isprime[i]=0;
	
	long long sum = 0;
	for (int i=0; i < size; i++)
		if (isprime[i]) sum += i;
	printf("The sum of all the primes below two million is %lli\n", sum);
	
	return 0;
}

