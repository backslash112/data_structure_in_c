#include <stdio.h>

int Max1(int x1, int x2)
{
	if (x1 >= x2)
	{
		return x1;
	}
	return x2;
}

typedef int ID;

struct Student
{
	long number;
	char name[10];
	char sex[3];
	ID age;
};

typedef struct Student DataType;

void main(void)
{
	/*
	int t1 = 5, t2 = 8, max;

	max = Max1(t1, t2);
	printf("Max = %d\n", max);
	*/
	struct Student x = { 1000, "Carl", "男", 26 }, y, *p;
	y = x;
	p = &x;
	printf("%d\n", y.age);
	printf("%d\n", p -> age);

	DataType d = { 1000, "Carl", "男", 26 };
	printf("%s\n", d.name);
}