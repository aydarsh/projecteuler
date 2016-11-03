#include <stdio.h>
#include <math.h>
//cat base_exp.txt | ./problem99

int main(int argc, char **argv)
{
	unsigned int base[1000], exp[1000], n=0;
	for (int i=0; i<1000; i++)
		scanf("%d,%d", &base[i], &exp[i]);
	
	double max=0.0, num=0.0;
	for(int i=0; i<1000; i++){
		num=exp[i]*log(base[i]);
		if (num>max){
			max=num;
			n=i;
		}
	}
	
	printf("%d\n", n+1);
	return 0;
}
