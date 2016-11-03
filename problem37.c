#include <stdio.h>
#include <math.h>

//Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

const int N=1000000;

int main(int argc, char **argv)
{
	short isprime[N+1];
		
	for (int i=0; i <= N; i++) isprime[i]=1;
	isprime[0]=0; isprime[1]=0;
	
	for (int i=2; i*i <= N; i++)
		if (isprime[i])
			for (int j=i*i; j <= N; j+=i) isprime[j]=0;
	
	long int istrunc, num, sum=0;
		
	for (int i=11; i <= 1000000; i+=2)
		if (isprime[i]){	
			istrunc=1;
			num=i;
			while (istrunc && (num > 10)){
				num/=10;
				if (isprime[num])
					istrunc = istrunc && 1;
				else istrunc = istrunc && 0;
			}
			if (isprime[num])
				istrunc = istrunc && 1;
			else istrunc = istrunc && 0;
			
			int m=log10(i);
			num=i;
			while (istrunc && (num > 10)){
				num = num%(long)pow(10, m--);
				if (isprime[num])
					istrunc = istrunc && 1;
				else istrunc = istrunc && 0;
			}
			if (isprime[num])
				istrunc = istrunc && 1;
			else istrunc = istrunc && 0;
			
			//if (istrunc) printf("%d ", i);
			if (istrunc) sum += i;
		}
		
	printf("The sum of the only eleven primes that are both truncatable from left to right and right to left is %ld\n", sum);
	
	return 0;
}
