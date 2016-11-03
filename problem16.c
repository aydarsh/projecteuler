#include <stdio.h>
#include <gmp.h>
//The sum of digits of the number 2^1000?

int main(int argc, char **argv)
{
	unsigned long sum=0;
	mpz_t n, temp;
	mpz_inits(n, temp, 0);
	mpz_ui_pow_ui(n, 2, 1000);
	while (mpz_sgn(n)==1){
		sum += mpz_mod_ui(temp, n, 10);
		mpz_fdiv_q_ui(n, n, 10);
	}
	
	gmp_printf("The sum of digits of 2^1000 is %lu\n", sum);
	
	mpz_clears(n, temp, 0);
	
	return 0;
}

