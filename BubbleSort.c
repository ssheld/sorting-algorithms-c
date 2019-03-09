/*
** Author: Stephen Sheldon 3/9/2019
** A simple and inefficient sort, Bubble Sort!
** Time Complexity: O(n^2)
*/

void bubble_sort(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
				swapBubble(arr, j, j + 1);
		}
	}
}

void swapBubble(int arr[], int i, int j)
{
	int temp; 
	temp = arr[j];
	arr[j] = arr[i];	
	arr[i] = temp;
}

