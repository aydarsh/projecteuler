#include <stdio.h>
#include <gmp.h>

int main(int argc, char **argv)
{
	unsigned long n, counter=0;
	mpz_t fn;
	mpz_init(fn);
	
	for(n=1000; counter < 1000; n++){
		mpz_fib_ui(fn, n);
		counter=0;
		while (mpz_sgn(fn)==1){
			mpz_fdiv_q_ui(fn, fn, 10);
			counter++;
		}
	}
		
	mpz_clear(fn);
	printf("The first term in the Fibonacci sequence to contain 1000 digits is %lu\n",n-1);
	return 0;
}

