#include <stdio.h>
#define MaxSize 100
typedef int DataType;
#include "SeqList.c"

void main(void)
{
	SeqList myList;
	int i, x, n = 10;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	ListInitiate(&myList);
	for(i = 0; i < n; i++)
	{
		if(ListInsert(&myList, i, a[i]) == 0)
		{
			printf("错误!\n");
			return;
		}
	}

	n = ListLength(myList);

	for(i = 0; i < n; i++)
	{
		if(ListGet(myList, i, &x) == 0)
		{
			printf("错误!\n");
			return;
		}
		else printf("%d\n", x);
	}
}