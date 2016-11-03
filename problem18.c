#include <stdio.h>

//find the maximum sum in the triangle
//cat problem18.txt | ./problem18
const int N=15;

int main(int argc, char **argv)
{
	int A[N], B[N];
	for (int i=0; i<N; i++)	A[i]=B[i]=0;
	
	scanf("%d", &A[0]);
	for(int i=1; i<N; i++){
		for(int j=0; j<=i; j++) scanf("%d", &B[j]);
		B[0] += A[0];
		for(int j=1; j<=i; j++) B[j]=(A[j-1]+B[j] > A[j]+B[j])?A[j-1]+B[j]:A[j]+B[j];
		for(int j=0; j<=i; j++) A[j]=B[j];
	}
	int max=0;
	for(int i=0; i<N; i++)
		max=(B[i]>max)?B[i]:max;
	printf("The maximum sum is %d\n", max);
	
	return 0;
}

