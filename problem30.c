#include <stdio.h>
#include <math.h>

//Find the sum of all numbers which are equal to the sum of the fifth power of their digits.

int main(int argc, char **argv)
{
	long int num, tempsum, rem, sum=0;
	
	for (long int i=10; i<1000000; i++){
		num=i;
		tempsum=0;
		while(num){
			rem = num%10;
			tempsum += pow(rem, 5);
			num /= 10;
		}
		if (i==tempsum)	sum += tempsum;
	}
	printf("The sum of all numbers which are equal to the sum of the fifth power of their digits is %ld\n", sum);
	return 0;
}
