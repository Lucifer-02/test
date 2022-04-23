#include <stdio.h>

int main()
{
	int a = 5;
	int *p, **q;
	p = &a;
	q = &p;
	printf("&a is %d\np is: %d\n&p is: %d\nq: %d\n*q is: %d\n", &a, p, &p, q, *q);
}

