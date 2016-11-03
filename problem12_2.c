#include <stdio.h>
#include <math.h>
//What is the value of the first triangle number to have over five hundred divisors?

int main(int argc, char **argv)
{
	unsigned int counter=0, num=1, i=2, j;
	while(counter <= 500){
		num = i*(i+1)/2;
		counter=1;
		for (j=2; j <= num; j++)
				if (!(num%j)) counter++;
		i++;		
		//printf("num=%i, counter=%i\n",num,counter);
	}
	printf("The first triangle number to have over five hundred divisors is %i\n", num);
	return 0;
}
