#include <stdio.h>

/*
** Author: Stephen Sheldon 3/5/2019
**
** A simple Selection Sort for integers
** Runtime: O(n^2)
*/

void selection_sort(int *arr, int len) 
{
	int i, j, min, temp;
	
	for (i = 0; i < len; i++) 
	{
		min = i;
		// Find min in current array relative to current min
		for (j = i+1; j < len; j++) 
			if (arr[j] < arr[min]) 
				min = j;
		
		// Swap here
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void printArray(int *arr, int len) {
	int i;
	
	for (i = 0; i < len; i++) 
		printf("%d ", arr[i]);
	
	printf("\n");
}

int main() {
	
	// File Format: First line is number of integers - n
	//              Followed by integers on n lines 	
	FILE *file = fopen ("sortintegers.txt", "r");
	int i, len;
		
	if (file == NULL) 
	{
		printf("Cannot open file\n");
		exit(0);
	}
		
	while(!feof (file)) 
	{
		fscanf(file, "%d", &len);
		
		int arr[len];
		
		for(i = 0; i < len; i++)
			fscanf(file, "%d", &arr[i]);
		
		printf("Array before sorting is: ");
		printArray(arr, len);
		
		selection_sort(arr, len);
		
		printf("Array after sorting is: ");
		printArray(arr, len);
	}
	
	fclose(file);

	exit(0);
}
