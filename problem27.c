#include <stdio.h>

//n² + an + b, where |a|<1000 and |b|<1000
//Find the product of the coefficients, a and b, for the quadratic
// expression that produces the maximum number of primes for consecutive
// values of n, starting with n = 0.

const int N=100000;

int main(int argc, char **argv)
{
	short isprime[N+1];
		
	for (int i=0; i <= N; i++) isprime[i]=1;
	isprime[0]=0; isprime[1]=0;
	
	for (int i=2; i*i <= N; i++)
		if (isprime[i])
			for (int j=i*i; j <= N; j+=i) isprime[j]=0;
	isprime[2]=0;//not suitable for us
	
	int a, b, n, max=0, a_times_b=0;
	for (a=-999; a<1000; a+=2)
		for (b=3; b<1000; b+=2)
			if (isprime[b]){
				for (n=0; n*n+a*n+b>0 && isprime[n*n+a*n+b]; n++);			
				if (n>max){
					max=n;
					a_times_b=a*b;
				}
			}
	printf("a*b=%d, number of consecutive primes is %d\n", a_times_b, max);
	
	return 0;
}

