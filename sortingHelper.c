#include <stdio.h>
/*
** Author: Stephen Sheldon 3/5/2019
**
** Some simple helper functions for
** sorting algorithms.
*/

void printArray(int *arr, int len) {
	int i;
	
	for (i = 0; i < len; i++) 
		printf("%d ", arr[i]);
	
	printf("\n");
}
