/*
 * bubble_sort.c
 * O(n^2) time
 *  Created on: 27 Nov 2019
 *      Author: danielle
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void bubble_sort(int arr[], int size);
void print_arr(int arr[], int size_arr);

// Driver program
int main( int argc, const char* argv[] )
{
	int arr_a[] = {23, 4, 2, 18, 5};
	int arr_b[] = {3, 31, 4, 27, 0, 2};

	bubble_sort(arr_a, 5);
	print_arr(arr_a, 5);

	bubble_sort(arr_b, 6);
	print_arr(arr_b, 6);
}

//Swap the memory location of integers occupying given memory spaces
void swap(int *a, int *b) {
	int temp_loc = *a;
	*a = *b;
	*b = temp_loc;
}

void bubble_sort(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void print_arr(int arr[], int size_arr) {
	for (int i = 0; i < size_arr; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}
