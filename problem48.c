#include <stdio.h>
#include <gmp.h>

int main(int argc, char **argv)
{
	mpz_t n, rem, sum, m;
	mpz_inits(n, rem, sum, m, 0);
	for(unsigned long i=1; i<=1000; i++){
		mpz_ui_pow_ui(n, i, i);
		mpz_add(sum, sum, n);
	}
	
	mpz_set_str(n, "10000000000", 10);
	mpz_fdiv_r(rem, sum, n);
		
	gmp_printf("The last ten digits of the sum 1^1+2^2+3^3+...+1000^1000 is %Zd\n", rem);
	
	mpz_clears(n, rem, sum, m, 0);
	return 0;
}

