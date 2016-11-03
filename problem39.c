#include <stdio.h>
//#include <math.h>

const int n = 1000;

int main(int argc, char **argv)
{
	int a, b, c, counter, p, max=0, perimeter=0;
	for (p=3; p <= n; p++){
		counter=0;
		if (!(p%1)) printf("p=%i\n",p);
		int m = p/3;
		for (a=1; a <= m; a++) {
			for (b = a, c = p-a-b; b <= c; b++, c--){
				if (a+b>c && (a*a+b*b==c*c)) {
						printf("a=%i\t b=%i\t c=%i\n",a,b,c);
						counter++;
				}
			}
			
		}
		if (counter>max) {
			max=counter;
			perimeter=p;
		}
	}
	
	printf("Maximum number of right triangles for p<=1000 is %i for p=%i\n", max, perimeter);
	return 0;
}
