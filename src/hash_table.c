/*
 * hash_table.c
 *
 *  Created on: 17/1/2020
 *      Author: danielle
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hashfunc(char arr[], int arr_len); // @suppress("Unused function declaration")
int find_string_len(char char_array[]);

// Initialise struct to handle key-value pairings
struct Dict {
   char key[];
   int index;
};

int main( int argc, const char* argv[] )
{
   //Recording example array of keys
	char keys1[] = {"ffthd", "HGfftyn", "bcdancH"};
	Dict this_dict[]; // @suppress("Type cannot be resolved")
}

int find_string_len(char char_array[]) { // @suppress("No return")
	int i = 0;
	int index;

	while (char_array[i] != '\0') {
	    i++;
	}

	return i;
}

int hashfunc(char arr[], int arr_len) {
	//Implement a simple hashing function
	int total = 0;
	int index;

	for (int i = 0; i<arr_len; i++) {
		total += arr[i];
	}

	index = total % arr_len;

	return index;
}
