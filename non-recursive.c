#include <stdio.h>
#include <time.h>

#define N 45

/*non-recursive*/

long fibonacci(int);
int a[N];
int a[0] = 0;
int a[1] = 1;

long fibonacci(i)
{
	for (j = 0; j < i; i++)
	{
		if (j == 0 || j == 1)
		{
			return (a[j]);
		}
		else
		{
			a[j] = a[j-1] + a[j-2];
			return (a[j]);
		}
	}
}


int main(void)
{
    int i;
    long l;
    
    clock_t begin, end;
    double time_spent;
    begin = clock();

    for(i = 0; i < N; i++)
    {
        l = fibonacci(i);
        printf("%4d %20ld\n", i, l);
    }

    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f sec\n", time_spent);

    return(0);
}
