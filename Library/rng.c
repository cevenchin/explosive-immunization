#ifndef RNG_H
#define RNG_H
        #include "rng.h"
#endif

// TO USE GSL RNG
//void initialize_rng(int seed){
//        gsl_rng_env_setup();
//
//        T = gsl_rng_default;
//        rrr = gsl_rng_alloc(T);
//
//	gsl_rng_set(rrr,seed);
//	return ;
//}

void initialize_rng(int seed){
	srand(seed);
	return ;
}
