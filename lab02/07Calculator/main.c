#include<stdio.h>

#include "basic.h"
#include "factorial.h"

int main() {
	int stop = 0;
	char choice, buffer;
	float op1, op2;
	int n;

	// loop needed for ongoing menu
	while (!stop) {
		printf("Choose an arithmetic operation with '+', '-', '*', '/', '!' or press 'q' to quit: ");
		scanf("%c", &choice);

		switch (choice) {
		case '+':
			printf("Enter two values to be added, separated by a space: ");
			scanf("%f %f", &op1, &op2);
			printf("%.2f + %.2f = %.2f\n", op1, op2, add(op1, op2));
			break;
		case '-':
			printf("Enter two values to be subtracted, separated by a space: ");
			scanf("%f %f", &op1, &op2);
			printf("%.2f - %.2f = %.2f\n", op1, op2, subtract(op1, op2));
			break;
		case '*':
			printf("Enter two values to be multiplied, separated by a space: ");
			scanf("%f %f", &op1, &op2);
			printf("%.2f * %.2f = %.2f\n", op1, op2, multiply(op1, op2));
			break;
		case '/':
			printf("Enter two values to be divided, separated by a space: ");
			scanf("%f %f", &op1, &op2);
			if (op2 != 0) {
				printf("%.2f / %.2f = %.2f\n", op1, op2, divide(op1, op2));
			} else {
				printf("Thou shalt not divide by zero!\n");
			}
			break;
		case '!':
			printf("Enter a value to calculate its factorial: ");
			if (scanf("%d", &n) == 1 && n >= 0) {
				printf("%d! = %ld\n", n, factorial(n));
			} else {
				printf("Factorials can only be calculated for non-negative integers!\n");
			}
			break;
		case 'q':
			stop = 1;
			printf("Adiós!\n");
			break;
		default:
			printf("Unrecognized operation: %c\n", choice);
			break;
		}

		// flush the buffer
		while((buffer = getchar()) != EOF && buffer != '\n');
	}

	return 0;
}
