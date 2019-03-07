/*
** Author: Stephen Sheldon 3/5/2019
**
** A simple Selection Sort for integers
** Time Complexity: O(n^2)
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



