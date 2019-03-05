#include <stdio.h>
#include "sorting.h"


int main() {
	
	// File Format: First line is number of integers - n
	//              Followed by integers on n lines 	
	FILE *file = fopen ("sortintegers.txt", "r");
	int i, len;
	int choice;
		

	printf("Welcome to Sorter! Please choose from one of the following algorithms\n");
	printf("1. Selection Sort\n");
	printf("2. Insertion Sort\n");
	
	scanf("%d", &choice);
	
	if (file == NULL) 
	{
		printf("Cannot open file\n");
		exit(0);
	}
		
	if (choice == 1)
		printf("You chose Selection sort!\n");
	else if (choice == 2) 
		printf("You chose Insertion Sort!\n");
	while (!feof (file)) 
	{
		fscanf(file, "%d", &len);
		
		int arr[len];
		
		for (i = 0; i < len; i++)
			fscanf(file, "%d", &arr[i]);
		

		printf("Array after sorting is: ");
		printArray(arr, len);

		if (choice == 1) 
			selection_sort(arr, len);
		else if (choice == 2)
			insertion_sort(arr, len);
		
		printf("Array after sorting is: ");
		printArray(arr, len);
		
	}
	
	fclose(file);

	exit(0);
}
