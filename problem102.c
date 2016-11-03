#include <stdio.h>

//find the number of triangles for which the interior contains the origin
//cat triangles.txt | ./problem102

int main(int argc, char **argv)
{
	long long int A, B, C, x1, x2, x3, y1, y2, y3, counter=0, isinside=1;
	while (scanf("%lld,%lld,%lld,%lld,%lld,%lld\n",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
		A=y2-y1; B=x1-x2; C=y1*x2-x1*y2;
		if ((A*x3+B*y3+C)*C >= 0) isinside = isinside && 1;
			else isinside = isinside && 0;
	
		A=y3-y1; B=x1-x3; C=y1*x3-x1*y3;
		if ((A*x2+B*y2+C)*C >= 0) isinside = isinside && 1;
			else isinside = isinside && 0;
	
		A=y3-y2; B=x2-x3; C=y2*x3-x2*y3;
		if ((A*x1+B*y1+C)*C >= 0) isinside = isinside && 1;
			else isinside = isinside && 0;
	
		if (isinside) counter++;
		isinside=1;
	}
	printf("counter=%lld\n",counter);
	return 0;
}

