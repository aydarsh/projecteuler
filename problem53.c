#include <stdio.h>
#include <gmp.h>
//How many, not necessarily distinct, values of  nCr, for 1 <= n <= 100, are greater than one-million?

int main(int argc, char **argv)
{
	unsigned long counter=0;
	mpz_t nCr, rfac, nrfac;
	mpz_inits(nCr, rfac, nrfac, 0);
	for(unsigned long n=1; n<=100; n++)
		for(unsigned long r=1; r<=n; r++){
			mpz_fac_ui(nCr, n);
			mpz_fac_ui(rfac, r);
			mpz_fac_ui(nrfac, n-r);
			mpz_divexact(nCr, nCr, rfac);
			mpz_divexact(nCr, nCr, nrfac);
			if (mpz_cmp_ui(nCr, 1000000)>0) counter++;
		}
	 
	gmp_printf("There are %lu numbers above 1000000\n", counter);
	
	mpz_clears(nCr, rfac, nrfac, 0);
	
	return 0;
}

