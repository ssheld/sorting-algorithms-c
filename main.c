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
	printf("3. Merge Sort\n");
	printf("4. Quick Sort\n");
	
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
	else if (choice == 3)
		printf("You chose Merge Sort!\n");
	else if (choice == 4)
		printf("You chose Quick Sort!\n");
	while (!feof (file)) 
	{
		fscanf(file, "%d", &len);
		
		int arr[len];
		
		for (i = 0; i < len; i++)
			fscanf(file, "%d", &arr[i]);
		

		printf("Array before sorting is: ");
		printArray(arr, len);

		if (choice == 1) 
			selection_sort(arr, len);
		else if (choice == 2)
			insertion_sort(arr, len);
		else if (choice == 3)
			merge_sort(arr, len);
		else if (choice == 4)
			quick_sort(arr, 0, len-1);
		
		printf("Array after sorting is: ");
		printArray(arr, len);
		
		printf("\n");
		
	}
	
	fclose(file);
	
	system("PAUSE");

	exit(0);
}
