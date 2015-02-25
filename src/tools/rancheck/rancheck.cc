#define _XOPEN_SOURCE
// This program prints the first 10 random numbers from rand(), drand48(), random(), and gsl
#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_rng.h>

#define SEED 42

int main( int argc, char** argv ){	int i;	srand( SEED );	srand48( SEED );	srandom( SEED );	gsl_rng *gsl = gsl_rng_alloc( gsl_rng_mt19937 );	gsl_rng_set( gsl, SEED );	for( i = 0; i < 10 ; i++ )		printf( "%d:  srand = %10d,  drand48 = %06.4f,  random = %10ld,  gsl = %lf\n",				i,				rand(),				drand48(),				random(),				gsl_rng_uniform(gsl) );	return( 0 );}
