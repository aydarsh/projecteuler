#include <stdio.h>
#include <math.h>

const int n=1000000;
const int nth=10001;

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
	
	int i, j;		
	for (i=0, j=0; (j < nth)&&(i < size); i++)
		if (isprime[i]) j++;
	printf("%i\n", i-1);
	return 0;
}

