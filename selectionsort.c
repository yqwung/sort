#include "selectionsort.h"


static void swap(int *a, int *b)
{
	int val = 0;

	val = *a;
	*a = *b;
	*b = val;
}


// 选择排序
void selection_sort(int *arr, int n)
{
	int i = 0, j = 0;
	int len = n;
	int min = 0;

	for(i=0; i<len; i++)
	{
		min = i;
		for(j=i+1; j<len; j++)
		{
			if(arr[j] < arr[min])			
			min = j;		
		}
		swap(&arr[i], &arr[min]);
	}
}

