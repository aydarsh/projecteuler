#include <stdio.h>
//Given that L is the length of the wire, 
//for how many values of L<=1,500,000 can 
//exactly one integer sided right angle triangle be formed?

//http://en.wikipedia.org/wiki/Pythagorean_triple
//not finished
const int N = 120;

int main(int argc, char **argv)
{
	int a, b, c, qty=0, p, counter=0;
	for (p=120; p <= N; p+=2){ //The sum of a,b,c is always an even number
		if (!(p%100)) printf("p=%i\n",p);
		qty=0;
		int m = p/3;
		for (a=3; a <= m; a++) {
			for (b = p/2-a, c = p-a-b; (b <= c)&&(qty <= 1); b++, c--){
				if (a+b>c && a<b && a*a+b*b==c*c) {
						printf("a=%i\t b=%i\t c=%i\n",a,b,c);
						qty++;
				}
			}
			
		}
		if (qty==1) counter++;
	}
	
	printf("There are %i values, such that only one right triangle formed\n", counter);
	
	return 0;
}
