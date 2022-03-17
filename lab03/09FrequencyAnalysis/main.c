#include<stdio.h>
#include<ctype.h>

#define ALPHABET_SIZE 26

int main() {

	int letters[ALPHABET_SIZE], c;

	// initialization of the frequency table
	for(int i = 0; i < ALPHABET_SIZE; )
		letters[i++] = 0;

	// input read in
	while((c = getchar()) != EOF) {
		// case-insensitive
		c = toupper(c);

		if(c >= 'A' && c <= 'Z')
			letters[c - 'A']++;
	}

	// print frequency table
	for(int i = 0; i < ALPHABET_SIZE; ++i)
		printf("%c: %5d\n", 'A' + i, letters[i]);

	return 0;
}
