#include <stdio.h>
#include <math.h>

const int N = 20;

int gcd(int x, int y); //Greatest Common Divisor

int main(int argc, char **argv)
{
	int a, b, c=1, r, k, p, q;
	long long int counter = 0;
		for (a=1; a <= N/3; a++)
			for (b=a; b <= (N-a)/2; b++){
				r=gcd(a, b);
				p=a/r; q=b/r;
				printf("gcd(%i, %i)=%i, p=%i, q=%i\n",a,b,r,p,q);
				for (k=b/(p+q); c <= N-a-b; k++) {
					c=k*(p+q);
					if (a+b>c){
					printf("a=%i\t b=%i\t c=%i\n",a,b,c);
					counter++;
					}
				}
			}
		
	printf("There are %lli triangles with integer sides, such that BE also integer\n", counter);
	return 0;
}

int gcd(int x, int y){
	int r;
	while(x){
		r=y%x;
		y=x;
		x=r;
	}
	return y;
}
