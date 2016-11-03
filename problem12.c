#include <stdio.h>
#include <math.h>
//What is the value of the first triangle number to have over five hundred divisors?

int main(int argc, char **argv)
{
	unsigned int counter=0, num=1, i=1, n, j, k;
	while(counter <= 500){
		num += ++i;
		counter=1;
		
		n=num, k=0;
		for (j=2; j <= num/2;)
				if ((n%j)==0) {n = n/j; k++;}
				else {j++; counter *= (k+1); k=0;}
		printf("num=%i, counter=%i\n",num,counter);
	}
	printf("The first triangle number to have over five hundred divisors is %i\n", num);
	return 0;
}
