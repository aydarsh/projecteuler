#include <stdio.h>
#include <string.h>

//How many triangle words are there in a list of about 2000 common english words?
// t_n=1/2 n(n+1) - triangle number
//cat words.txt | sed -e 's/"//g;s/,/\n/g' | ./problem42

int main(int argc, char **argv)
{
	unsigned int sum, counter=0, n;
	char s[20];
	while(scanf("%s", s)!=EOF){
		sum=0;
		for(int i=0; i<strlen(s); i++){
			sum += s[i]-64;
		}
		
		for(n=1; n*(n+1)<2*sum; n++);
		if (n*(n+1)==2*sum)	counter++;
	}
	printf("There are %d triangle words in a list of about 2000 common english words\n", counter);
	
	return 0;
}

