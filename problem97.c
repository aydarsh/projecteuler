#include <stdio.h>
#include <gmp.h>

int main(int argc, char **argv)
{
	mpz_t n, rem, m;
	mpz_inits(n, rem, m, 0);
	mpz_ui_pow_ui(m, 2, 7830457);
	mpz_mul_ui(m, m, 28433);
	mpz_add_ui(m, m, 1);	
	
	mpz_set_str(n, "10000000000", 10);
	mpz_fdiv_r(rem, m, n);
		
	gmp_printf("The last ten digits of the prime number 28433*2^7830457+1 is %Zd\n", rem);
	
	mpz_clears(n, rem, m, 0);
	return 0;
}
