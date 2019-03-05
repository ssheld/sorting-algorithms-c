/*
** Author: Stephen Sheldon 3/3/2019
** A simple insertion sort
** Runtime: O(n^2)
*/

void insertion_sort(int *arr, int len) 
{
	int key, i, j;
	for (i = 1; i < len; i++) 
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
