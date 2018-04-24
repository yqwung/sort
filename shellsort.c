#include "shellsort.h"


// 希尔排序
void shell_sort(int *arr, int n)
{
	int i = 0, j = 0;
	int step = 0;
	int val = 0;

	for(step = n / 2; step > 0; step /= 2)    // 这里设置步进
	{
		for(i = step; i < n; i++)             // 这里就是插入排序算法，可以看上一节插入排序，对比一下
		{
			val = arr[i];
			j = i - step;
			while(j >= 0 && arr[j] > val)
			{
				arr[j+step] = arr[j];
				j -= step;
			}
			arr[j+step] = val;
		}
	}
}

