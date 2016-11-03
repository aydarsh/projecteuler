#include <stdio.h>
#include <gmp.h>
//Considering natural numbers of the form, a^b, where a, b < 100, what is the maximum digital sum?

int main(int argc, char **argv)
{
	unsigned long sum=0, max=0;
	mpz_t n, temp;
	mpz_inits(n, temp, 0);
	for (unsigned long i=1; i<100; i++)
		for (unsigned long j=1; j<100; j++){
			sum=0;
			mpz_ui_pow_ui(n, i, j);
			while (mpz_sgn(n)==1){
				sum += mpz_mod_ui(temp, n, 10);
				mpz_fdiv_q_ui(n, n, 10);
			}
			if (sum>max) max=sum;
		}
	gmp_printf("The maximum sum of digits of a^b is %lu\n", max);
	
	mpz_clears(n, temp, 0);
	
	return 0;
}

