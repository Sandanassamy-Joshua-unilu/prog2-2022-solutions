#include <stdio.h>

int main() {
	int fahrenheit = 76;
	int celsius;

	// wrong version
	celsius =  (5/9) * (fahrenheit-32);
	printf("%d °F = %d °C\n", fahrenheit, celsius);

	// correct version 1: avoid truncation through reordering
	celsius = 5 * (fahrenheit - 32) / 9;
	printf("%d °F = %d °C\n", fahrenheit, celsius);

	// correct version 2: make one operand a floating-point number
	celsius =  5/9.0 * (fahrenheit-32);
	printf("%d °F = %d °C\n", fahrenheit, celsius);

	// correct version 3: casting the value to be a floating-point number
	celsius =  ((float) 5/9) * (fahrenheit-32);
	printf("%d °F = %d °C\n", fahrenheit, celsius);

	// correct version 4: use the proper type and format specifier
	double celsiusDecimal = 5/9.0 * (fahrenheit-32);
	printf("%d °F = %010.5f °C\n", fahrenheit, celsiusDecimal);

	return 0;
}
