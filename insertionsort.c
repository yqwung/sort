#include "insertionsort.h"


// 插入排序
void insertion_sort(int *arr, int n)
{
	int i = 0, j = 0;
	int val = 0;

	for(i=1; i<n; i++)
	{
		val = arr[i];
		j = i - 1;
		while( j >= 0 && arr[j] > val )
		{
			arr[j+1] = arr[j];
			j--;
		}	
		arr[j+1] = val;
	}
}

