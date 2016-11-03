#include <stdio.h>
//very slow!
#include <math.h>

const int n = 20;

int main(int argc, char **argv)
{
	int a, b, c;
	long long int counter = 0;
	for (int p=3; p <= n; p++){
		if (!(p%100)) printf("p=%i\n",p);
		int m = p/3;
		for (a=1; a <= m; a++) {
			for (b = a, c = p-a-b; b <= c; b++, c--){
				if (a+b>c && !((a*c)%(a+b))) {
						printf("a=%i\t b=%i\t c=%i\n",a,b,c);
						counter++;
				}
			}
			
		}
	}
	
	printf("There are %lli triangles with integer sides, such that BE also integer\n", counter);
	return 0;
}
