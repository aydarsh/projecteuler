#include <stdio.h>

//Find the value of n<=1,000,000 for which n/phi(n) is a maximum
//phi(n) - number of numbers less than n which are relatively prime to n

const int N=100000;
unsigned int isprime[100001];

double n_over_phi(int);

int main(int argc, char **argv)
{
	for (int i=0; i <= N; i++) isprime[i]=1;
	isprime[0]=0; isprime[1]=0;
	
	for (int i=2; i*i <= N; i++)
		if (isprime[i])
			for (int j=i*i; j <= N; j+=i) isprime[j]=0;
				
	/*for (int i=2; i <= N; i++){
		if (isprime[i]) printf("%d %d\n", i, isprime[i]);
	}*/
	
	int nmax=0;
	double max=0.0, m;
	for(int n=2; n<N; n++){
		if(!(n%1000)) printf("n=%d\n", n);
		m=n_over_phi(n);
		if(m>max){
			max=m;
			nmax=n;
			printf("max=%.2f, n=%d\n", max, nmax);
		}
	}

	printf("The value of n<=1,000,000 for which n/phi(n) is a maximum equals %d, max=%.2f\n", nmax, max);
	
	return 0;
}

double n_over_phi(int n)
{
	if (isprime[n]) return (double)n/(n-1);
	
	int flag=1, m=n;
	double result=1.0;
	for(int i=2; i<n;)
		if(!(m%i)){
			m=m/i;
			if(flag) result *= (double)i/(i-1);
			flag=0;
		}
		else{
			flag=1;
			i++;
		}
		
	return result;
}
