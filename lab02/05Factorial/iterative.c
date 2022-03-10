#include "iterative.h"

long factorial_iter(long n) {
	long fact = 1;

	for(long i = 2; i <= n; i++) {
		fact *= i;
	}

	return fact;
}
