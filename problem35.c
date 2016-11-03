#include <stdio.h>
#include <math.h>
//How many circular primes are there below one million?
const int N=1000000;

int main(int argc, char **argv)
{
	short isprime[N+1];
	int size = sizeof(isprime)/sizeof(short);
		
	for (int i=0; i < size; i++) isprime[i]=1;
	isprime[0]=0; isprime[1]=0;
	
	int m = ceil(sqrt(N));
	for (int j=2; j < m; j++)
		for (int i=j+1; i < size; i++)
			if (isprime[i]&&((i%j)==0)) isprime[i]=0;
	
	for (int i=2; i < size; i++)
		if (isprime[i]){
			m=ceil(log10(i));
			int num=i, n=1, rem=0, check=1, a[6];
			for(int i=0; i<6; i++) a[i]=2;
			for(n=1; n<=m; n++){
				a[n-1]=num;
				rem=num%10;
				num=num/10+rem*pow(10, m-1);
			}
			for(int i=0; i<m; i++)
				if (!isprime[a[i]]) check=0;
			for(int i=0; i<m; i++)
				if ((!check)&&(ceil(log10(a[i]))==m))
					isprime[a[i]]=0;
		}
		
	int counter=0;
	for(int i=2; i < size; i++)
		if (isprime[i]) counter++;
	
	printf("There are %i circular primes below one million\n", counter);
	return 0;
}
