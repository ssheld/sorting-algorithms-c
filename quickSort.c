/*
** Author: Stephen Sheldon 3/6/2019
**
** A simple Quick Sort for integers
**
** Time Complexity
** Best Case: O(nlogn)
** Worst Case: O(n^2)
*/

void quick_sort(int arr[], int start, int end)
{
	int pivot, left, right;
	
	if (start < end)
	{
		pivot = partition(arr, start, end);
		quick_sort(arr, start, pivot-1);
		quick_sort(arr, pivot+1, end);
	}
}

int partition(int arr[], int start, int end)
{
	// Counter 
	int i;
	// Divider position of pivot
	int pivotindex;
	
	// Our pivot index will be start however
	// a better pivot would be median-of-three
	pivotindex = start;
	
	for (i = start; i < end; i++)
	{
		if (arr[i] < arr[end])
		{
			swap(arr, i, pivotindex);
			pivotindex++;
		}
	}
	swap(arr, end, pivotindex);
	
	return pivotindex;
}


void swap(int arr[], int i, int j)
{
	int temp = arr[j];
	arr[j] = arr[i];
	arr[i] = temp;
}
