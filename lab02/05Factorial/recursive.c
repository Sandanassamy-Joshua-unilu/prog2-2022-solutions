#include "recursive.h"

long factorial_rec(long n) {
	if(n == 0) {
		return 1;
	} else {
		return n * factorial_rec(n-1);
	}
}
