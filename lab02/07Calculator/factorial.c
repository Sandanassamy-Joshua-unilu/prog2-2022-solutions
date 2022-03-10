#include "factorial.h"

long factorial(int n) {
	long fact; int i;

	for (fact = 1, i = 2; i <= n; fact *= i++);

	return fact;
}
