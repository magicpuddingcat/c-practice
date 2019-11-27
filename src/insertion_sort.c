/*
 * insertion_sort.c
 * between O(n) and O(n^2) time; best and worst case
 *  Created on: 23 Nov 2019
 *      Author: danielle
 */

void insertion_sort(int numarray[], int arraylen);

int main( int argc, const char* argv[] )
{
	int a[] = {4,3,1,6};
	int b[] = {9,5,3,10,1,4,2,11,6};

	insertion_sort(a, 4);
	insertion_sort(b, 9);
}

void insertion_sort(int numarray[], int arraylen) {

	for (int current = 1; current < arraylen; current++) {
		//Maintain a record of the current element in the array
		int this_element = numarray[current];

		int previous = current - 1;

		while (previous >= 0 && numarray[previous] >= numarray[current]) {
			numarray[current] = numarray[previous];
			numarray[previous] = this_element;
			current = previous;
			previous = previous - 1;
		}
		}

	for (int i = 0; i < arraylen; i++) {
		printf("%d ", numarray[i]);
	}

	printf("\n");
}
