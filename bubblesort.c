#include "bubblesort.h"


static void swap(int *a, int *b)
{
	int val = 0;
	
	val = *a;
	*a = *b;
	*b = val;
}


// 冒泡排序
void bubble_sort(int *arr, int n)
{
    int i = 0, j = 0;
	int len = n-1;
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<len-i; j++)
		{
			if(arr[j] > arr[j+1])			
				swap(&arr[j], &arr[j+1]);		
		}
	}
}


// 优化冒泡排序
void bubble_sort_1(int *arr, int n)
{
    int i = 0, j = 0;
	int len = n-1;
	int flag = 0;
	
	for(i=0; i<len; i++)
	{
		flag = 0;
		for(j=0; j<len-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				flag = 1;
			}				
		}
		if(0 == flag)
			continue;
	}
}

