#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long int rev=0, n=0, num=0, rem=0, max=0;
	
	for (int i=999; i>=100; i--)
		for (int j=999; j>=100; j--){
			num=i*j;
			n=num; rev=0; rem=0;
			while(num != 0){
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
			}
			if ((n==rev)&&(max<n)) max=n;
		}
	printf("The largest palindrome made from the product of two 3-digit numbers is %lu\n", max);
		
	return 0;
}

