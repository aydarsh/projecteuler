#include <stdio.h>
#include <gmp.h>
#include <math.h>

//What is the largest n-digit pandigital prime that exists?

const unsigned long N=7654321;

int main(int argc, char **argv)
{
	mpz_t n;
	mpz_init(n);
		
	for (unsigned long i=N; i>7123456; i-=2){
		mpz_set_ui(n, i);
		if (mpz_probab_prime_p (n, 5)) printf("i=%lu\n", i);
	}
	
	mpz_clear(n);
	
	return 0;
}

//after that search among these for a pandigital number by hand and that's 7652413
