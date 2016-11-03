#include <stdio.h>

//Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers
const int N=28123, M=6965;

int isabundant(int n);

int main(int argc, char **argv)
{
	int A[M], num[N], j=0;
	for (int i=0; i<M; i++) A[i]=0;
	for (int i=0; i<N; i++) num[i]=1;
	
	for (int i=12; i<=N; i++) 
		if (isabundant(i)){
			A[j]=i;
			j++;
		}
		
	for (int i=0; i<M; i++)
		for (int j=0; j<M; j++)
			if (A[i]+A[j] < N) num[A[i]+A[j]] = 0;
			
	long sum=0;

	for (int i=0; i<N; i++) if (num[i]) sum += i;
	
	printf("The sum is %ld\n", sum);
	
	return 0;
}

int isabundant(int n){
	int sum=1;
	for (int i=2; i<=n/2; i++)
		if (!(n%i)) sum += i;
	
	return (sum > n)?1:0;
}
