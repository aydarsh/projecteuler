#include <stdio.h>
//How many starting numbers below ten million will arrive at 89?

const unsigned int N=10000000;

int main(int argc, char **argv)
{
	unsigned int n, num, rem, sq, counter=0;
	for(n=N; n>1; n--){
		num=n; sq=0;
		while((sq!=89)&&(sq!=1)){
			sq=0;
			while (num){
				rem=num%10;
				sq+=rem*rem;
				num /= 10;
			}
			if (sq==89) counter++;
			num=sq;
		}
	}
	printf("There are %u starting numbers below ten million that will arrive at 89\n", counter);
	
	return 0;
}

