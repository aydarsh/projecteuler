#include <stdio.h>
#include <string.h>
//Find some digits in a fractional part of a number and multiply what you get

int main(int argc, char **argv)
{
	char s1[10], s2[1100000];
	strcpy(s2, "");
	int i;
	for(i=1; i<190000; i++){
		sprintf(s1, "%d", i);
		strcat(s2, s1);
	}
	printf("The product of those digits is %d\n", (s2[0]-48)*(s2[9]-48)*(s2[99]-48)*(s2[999]-48)*(s2[9999]-48)*(s2[99999]-48)*(s2[999999]-48));
	
	return 0;
}

