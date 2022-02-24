#include <stdio.h>

#include "temperature.h"

int main() {
	Temperature fahrenheit = 53;
	Temperature celsius;

	celsius = toCelsius(fahrenheit);

	Temperature fahrenheitBackConverted = toFahrenheit(celsius);

	printf("%5.1f °F = %5.1f °C = %5.1f °F\n", fahrenheit, celsius, fahrenheitBackConverted);

	return 0;
}
