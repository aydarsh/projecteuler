#include <stdio.h>

//Evaluate the sum of all the amicable numbers under 10000.
const int N=10000;

int d(int n);

int main(int argc, char **argv)
{
	int temp=0, amicablesum=0;
	
	for(int j=1; j<N; j++)
		if (((temp=d(j))<N)&&(d(temp)==j)&&(temp != j))
			amicablesum += j+temp;

	printf("%d\n", amicablesum/2);
	return 0;
}

int d(int n){
	int sum=1;
	for (int i=2; i<=n/2; i++)
		if(!(n%i)) sum += i;
	return sum;
}
