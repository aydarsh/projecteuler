#include <stdio.h>
#include <string.h>

//sort names.txt |./problem22
//What is the total of all the name scores in the file?

int main(int argc, char **argv)
{
	char s[30];
	int j=1;
	long sum=0;
	while(scanf("%s", s)!=EOF){
		for(int i=0; i < strlen(s); i++)
			sum += j*(s[i]-64);
		j++;
	}
	printf("The total of all the name scores in the file is %ld\n", sum);
	return 0;
}

