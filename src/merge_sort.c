/*
 * merge_sort.c
 *
 *  Created on: 18 Dec 2019
 *      Author: Danielle
 *      O(nlogn) worst case. Credit to Geeks for Geeks especially (other
 *      resources also utilized in process including visualization tools
 *      for acting as a great source of information and prompting where it
 *      was required.
 */

#include <stdio.h>

void merge_sort(int arr[], int lower, int upper);
void merge(int arr[], int low, int mid, int up);
void print_arr(int arr[], int size_arr);

int main( int argc, const char* argv[] ) {
	int arr_1[] = {8, 5, 9, 3, 1, 4, 10};
	int arr_2[] = {16, 1, 5, 12, 4, 6, 9, 10, 2, 7};

	//Print unsorted arrays
	printf("The unsorted arrays are: \n");
	print_arr(arr_1, 7);
	print_arr(arr_2, 10);

	// Sort the input arrays
	merge_sort(arr_1, 0, 6);
	merge_sort(arr_1, 0, 9);

	// Now print the sorted arrays
	printf("The sorted arrays are: \n");
	print_arr(arr_1, sizeof(arr_1)/sizeof(int));
	print_arr(arr_2, sizeof(arr_2)/sizeof(int));
}


// THINK THAT I AM FAIRLY HAPPY UP TO HERE
void merge(int arr[], int low, int mid, int up) {
	int i, j, k;

	// Determine required size for 2 arrays
	int arr_1_size = mid - low + 1;
	int arr_2_size = up - mid;

	// Initialize the two temporary arrays
	int left[arr_1_size], right[arr_2_size];

	// Now add all elements to their sub-arrays
	for (i = 0; i < arr_1_size; i++) {
		left[i] = arr[low + i];
	}
	for (j = 0; j < arr_2_size; j++) {
		right[j] = arr[mid + 1 + j];
	}

	i = j = 0;
	k = low;

	/*
	 * Now merging aspect of algorithm; definitely the aspect that was
	 * challenging to understand.
	 */
	while (i < arr_1_size && j < arr_2_size) {
		if (left[i] <= right[j]) {
			arr[k] = left[i];
			i++;
		} else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < arr_1_size) {
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < arr_2_size) {
		arr[k] = right[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int lower, int upper) {

	// Determine value as close to middle as possible
	if (lower < upper) {
		int middle = lower + (upper - lower)/2;

	// Continue divide and conquer process through recursion
	merge_sort(arr, lower, middle);
	merge_sort(arr, middle+1, upper);

	merge(arr, lower, middle, upper);
	}
}

// Function to enable program to print array
void print_arr(int arr[], int size_arr) {
	//Print each element of the array
	for (int i = 0; i < size_arr; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}
