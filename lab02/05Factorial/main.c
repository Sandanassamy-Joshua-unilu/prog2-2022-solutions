#include<stdio.h>

#include "iterative.h"
#include "recursive.h"

int main() {
	long n;
	printf("n = ");
	scanf("%ld", &n);
	printf("n! = %ld\n", factorial_iter(n));
	printf("n! = %ld\n", factorial_rec(n));
	return 0;
}
