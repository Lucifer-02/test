#include <time.h>
#include <stdio.h>

int main()
{
	clock_t start, end;

	int count1 =0;
	int count2 = 0;

	start = clock();
	for( int i; i<1000000; i++)
	{
		count1 += 2;
	}
	end = clock();

	printf("time consume is: %lf\n", (double)(end - start));

	// start = clock();
	// for( int i; i<1000000; i++)
	// {
	// 	count2 += 2;
	// }
	// end = clock();

	// printf("time consume is: %lf\n", (double)(end - start));


}