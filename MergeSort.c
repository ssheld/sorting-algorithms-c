
/*
** Author: Stephen Sheldon 3/6/2019
**
** A simple Merge Sort for integers
** Time Complexity: O(nlogn)
** Space Complexity: O(n) auxiliary
*/

void merge_sort(int arr[], int len)
{
	int *left;
	int *right;
	int i;

	// Base case
	if (len <= 1)
		return;	
	
	// Create left subarray and copy values from main array over
	left = (int *) calloc(len/2, sizeof(int));
	for (i = 0; i < len/2; i++)
		left[i] = arr[i];
		
	// Create right subarray and copy values from main array over
	right = (int *) calloc(len - len/2, sizeof(int));
	for (i = 0; i < len - len/2; i++)
		right[i] = arr[len/2 + i];
	
	// Merge both halves
	merge_sort(left, len/2);
	merge_sort(right, len-len/2);
	
	// Merge arrays back together
	merge(arr, left, len/2, right, len-len/2);
	// Free memory
	free(left);
	free(right);
}

void merge(int arr[], int left[], int leftLen, int right[], int rightLen)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	// Compare elements in both arrays
	while (i < leftLen && j < rightLen)
	{
		if (left[i] <= right[j])
		{
			arr[k] =  left[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = right[j];
			j++;
			k++;
		}	
	}
	
	// Copy remaining elements if there are any
	while (i < leftLen)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < rightLen)
	{
		arr[k] = right[j];
		j++;
		k++;
	}
}
