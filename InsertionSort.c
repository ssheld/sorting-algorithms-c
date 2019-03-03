#include <stdio.h> 

/*
** Author: Stephen Sheldon 3/3/2019
*/

void insertion_sort(int *arr, int len) {
	int key, j;
	for (int i = 1; i < len; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main() {
	
	int arr[] = {4, 5, 4, 3, 2, 9, 44, 2, 3, 5, 5, 5, 3, 0};
	int len = 14;
	
	insertion_sort(arr, len);
	
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	
	exit(0);
}
