#include <stdio.h>
#include <gmp.h>
//cat problem13.txt | ./problem13

int main(int argc, char **argv)
{
	mpz_t a[101];
	for (int i=0; i<101; i++) mpz_init_set_ui(a[i], 0);
	for (int i=0; i<101; i++) gmp_scanf("%Zd", a[i]);
	for (int i=0; i<100; i++) mpz_add(a[100], a[100], a[i]);
	
	gmp_printf("%Zd\n", a[100]);
	for (int i=0; i<101; i++) mpz_clear(a[i]);
	
	return 0;
}

