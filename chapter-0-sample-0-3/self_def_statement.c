#include <stdio.h>

// typedef float DataType;

// DataType Max(DataType x1, DataType x2)
// {
	
// }

// void main(void)
// {
// 	DataType x1 = 10.2, x2 = 2.1, max;
// 	max = Max(x1, x2);
// 	printf("max=%f\n", max);
// }


typedef int DataType;

DataType Max(DataType x1, DataType x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	return x2;
}

void main(void)
{
	DataType x1 = 10, x2 = 2, max;
	max = Max(x1, x2);
	printf("max=%d\n", max);
}