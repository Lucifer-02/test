#include <stdio.h>
#include <time.h>

void loops(void)
{
	int count = 0;
	for (int i = 0; i < 1000000000; ++i)
	{
		count++;
	}
}
int main()
{
	clock_t start, end;
    double time_consume;

    start = clock();
    loops();
    end = clock();

    time_consume = (double)(end - start)/CLOCKS_PER_SEC;
    printf("this function take %lf seconds\n", time_consume);



}

