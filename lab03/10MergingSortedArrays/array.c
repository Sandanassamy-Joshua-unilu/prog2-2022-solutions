#include<stdio.h>
#include<stdlib.h>

#include "array.h"

/*
 * This function fills an array of given size with random numbers between 0 and 99.
 */
void fill_array(int array[], int size) {
	for(int i = 0; i < size; i++)
		array[i] = rand() % 100;
}

/*
 * This function sorts an array of given size based on the selection sort algorithm.
 */
void sort_array(int array[], int size) {
	int minIndex, temp;

	for(int i = 0; i < size; i++) {
		// find index of current minimum
		minIndex = i;
		for(int j = i; j < size; j++) {
			if(array[j] < array[minIndex]) {
				minIndex = j;
			}
		}

		// swap
		temp = array[i];
		array[i] = array[minIndex];
		array[minIndex] = temp;
	}
}

/*
 * This function prints the contents of an array of given size.
 */
void print_array(int array[], int size) {
	printf("[ ");
	for(int i = 0; i < size; i++)
		printf("%d%c ", array[i], i != size -1 ? ',' : 0);
	printf("]\n");
}
