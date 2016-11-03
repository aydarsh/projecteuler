#include <stdio.h>

//Find the sum of all numbers which are equal to the sum of the factorial of their digits.

long fact(int n);

int main(int argc, char **argv)
{
	long int num, tempsum, rem, sum=0;
	
	for (long int i=10; i<10000000; i++){
		num=i;
		tempsum=0;
		while(num){
			rem = num%10;
			tempsum += fact(rem);
			num /= 10;
		}
		if (i==tempsum){
			printf("%ld\n", i);
			sum += tempsum;
		}
	}
	printf("%ld\n", sum);
	return 0;
}

long fact(int n){
	long value=1;
	for (int i=2; i<=n; i++)
		value *= i;
	return value;
}
