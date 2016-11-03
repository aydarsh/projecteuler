#include <stdio.h>
//Which starting number, under one million, produces the longest chain?

int main(int argc, char **argv)
{
	unsigned int grnum=0, num, n, grk=0, k;
	for (num=999999; num >= 1; num--){
		k=0;
		n=num;
		//if(!(n%10000))printf("\nn=%i ",num);
		while(n>1){
			if (n%2) n=3*n+1;
				else n =n/2;
			k++;
			//printf("n=%i ",n);
		}
		if (k > grk){
			grk = k;
			grnum = num;
		}
	}
	printf("\nNumber %i produces a chain of %i numbers\n", grnum, grk+1);
		
	return 0;
}

