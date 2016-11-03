#include <stdio.h>

int main(int argc, char **argv)
{
	int sum=0;
	for(int i=3; i<1000; i+=3) 
		sum += i;
	for(int i=5; i<1000; i+=5)
	{
		if (i%15)	sum += i;
	}
	printf("The sum of multiples of 3 and 5 below 1000 is %i\n",sum); 
	return 0;
}

