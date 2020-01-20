/*
 * hash_table.c
 *
 *  Created on: 17/1/2020
 *      Author: danielle
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

typedef struct {
   int *index;
   char *key;
} HTEntry;

typedef struct {
	int size;
	int num_entries;
	HTEntry** entries;
} HTable;

struct TableEntry* entry_arr[MAX];

int main( int argc, const char* argv[] )
{

}

int hash(int index) {
	return index % MAX;
}

void add() {

}

void delete() {

}

void search() {

}
