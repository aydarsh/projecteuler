#include <stdio.h>

const int N=100000;
int gcd(int x, int y) { int r; while(x){r = y%x; y=x; x=r;} return y;}

int main(int argc, char **argv)
{
    long long int n=0;
    for(unsigned int a=1;a<=N/3;a++){
        for(unsigned int b=a;b<=(N-a)/2;b++) {
            int q=((a*b)%(a+b)) ? (a*b)/(a+b)+1 : (a*b)/(a+b);
            int m=a/gcd(a, b);
            int s=(q%m) ? q/m+1 : q/m;
            n+=(N*a/(a+b) < 2*a-1) ? (a*N/(a+b)-a)/m-s+1 : (a-1)/m-s+1;
        }
		if (!(a%100)) printf("a=%i\n",a);
	}
    printf("There are %lli triangles with integer sides, such that BE also integer\n", n);
    return 0;
}	
