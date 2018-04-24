#include <stdio.h>

#include "bubblesort.h"


void printf_buf(int *buf, int len)
{
    int i=0;

    //printf("Sort : \n");	
	for(i=0; i<len; i++)
	{
		printf("%d ", buf[i]);
	}
	printf("\n");
}


int main()
{
	int i = 0;
    int buf[]={8, 3, 11, 9, 6, 1, 5, 16, 17, 2};
	//int buf[]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(buf)/sizeof(int);

#if 1	
	printf("1 冒泡排序 : \n");
	bubble_sort(buf, n);
	//bubble_sort_1(buf, n);
	printf_buf(buf, n);
#endif
	
	return 0;
}

