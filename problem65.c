#include <stdio.h>
#include <gmp.h> //GNU Multi Precision library gmplib.org
//Find the sum of digits in the numerator of the 100th convergent of the continued fraction for e.
//Look at Fundamental_recurrence_formulas in wiki

int main(int argc, char **argv)
{
	mpz_t b[100], A[100], n, temp;
	for (int i=0; i<100; i++) {
		mpz_init_set_ui(b[i], 1);
		mpz_init(A[i]);
	}
	
	mpz_set_ui(b[0],2);
	for (int i=0; i<=32; i++) mpz_set_ui(b[3*i+2], 2*i+2);
	
	mpz_set_ui(A[0], 2); mpz_set_ui(A[1], 3);
	for (int i=2; i<100; i++) {
		mpz_mul(b[i], b[i], A[i-1]);
		mpz_add(A[i], b[i], A[i-2]);
	}
	
	mpz_init_set(n, A[99]);
	mpz_init(temp);
	unsigned long sum=0;
	while (mpz_sgn(n)==1){
		sum += mpz_mod_ui(temp, n, 10);
		mpz_fdiv_q_ui(n, n, 10);
	}
	mpz_clears(n, temp, 0);
	
	gmp_printf("A[100]=%Zd, the sum of digits is %u\n", A[99], sum);
	
	for (int i=0; i<100; i++) mpz_clears(b[i], A[i], 0);
		
	return 0;
}

