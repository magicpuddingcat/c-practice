/*
 * selection_sort.c
 *
 *	Selection sort implementation. Credit to GeeksforGeeks for resource on
 *	overall algorithmic structure.
 *  Created on: 28 Nov 2019
 *      Author: Danielle
 */

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int num_arr[], int len);
void swap(int *a, int *b);
void print_arr(int arr[], int size_arr);

int main( int argc, const char* argv[] )
{
	//Define both the array and its size
	int arr_1[] = {5,2,7,3,10,15,1};
	int size_arr_1 = sizeof(arr_1)/sizeof(int);

	//Sort and print the array
	selection_sort(arr_1, size_arr_1);
	print_arr(arr_1, size_arr_1);
}

//Selection sort implementation to select and place minimum value in array
void selection_sort(int num_arr[], int len) {

	for (int i = 0; i < len-1; i++) {

		int min_index = i;

		for(int j = i + 1; j < len; j++) {
			if (num_arr[j] < num_arr[min_index]) {
				min_index = j;
			}
		}

		swap(&num_arr[i], &num_arr[min_index]);
	}
}

//Swap the memory location of integers occupying given memory spaces
void swap(int *a, int *b) {
	int temp_loc = *a;
	*a = *b;
	*b = temp_loc;
}

void print_arr(int arr[], int size_arr) {
	//Print each element of the array
	for (int i = 0; i < size_arr; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}


