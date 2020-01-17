/*
 * hash_table.c
 *
 *  Created on: 17/1/2020
 *      Author: danielle
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hashfunc(char arr[], int arr_len);
int find_string_len(char char_array[]);

// Initialise struct to handle key-value pairings
struct Dict {
   int index;
   char *key;
};

int main( int argc, const char* argv[] )
{
   //Recording example array of keys
	char keys1[] = {"ffthd", "HGfftyn", "bcdancH"};
	int keys1_len = 3;

	struct Dict this_dict[keys1_len];

	//Assign key and index to members of the Dict array and then print them
	for (int i=0; i < keys1_len; i++) {
		//Assign the string as key and then assign it an index number
		this_dict[i].key = &keys1[i]; // @suppress("Field cannot be resolved")
		this_dict[i].index = hashfunc(keys1[i], find_string_len(keys1[i])); // @suppress("Field cannot be resolved")

		//Now print the array of structs
		printf("%d |", this_dict[i].index);
		printf("%f", keys1[i]);
		printf("\n");
	}
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
