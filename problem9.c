#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int a,b;
	for(a=1; a<=998; a++){
			for(b=a; b<=1000-a; b++) {
				if ((a*a+b*b)==((1000-a-b)*(1000-a-b))) printf("There exists exactly one Pythagorean triplet for which a + b + c = 1000. The product abc = %u\n",a*b*(1000-a-b));
			}
	}
	
	return 0;
}

