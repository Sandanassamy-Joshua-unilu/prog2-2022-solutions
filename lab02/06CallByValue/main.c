#include<stdio.h>

void foo(int n) {
	printf("Value of n inside `foo()` before modification: %d\n", n);
	n = 42;
	printf("Value of n inside `foo()` after modification: %d\n", n);
}

int main() {
	int n = 3;
	printf("Value of n in `main` before `foo()`: %d\n", n);
	foo(n);
	printf("Value of n in `main` after `foo()`: %d\n", n);
	return 0;
}
