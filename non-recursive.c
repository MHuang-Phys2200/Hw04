#include <stdio.h>
#include <time.h>

#define N 45

/*non-recursive*/

long fibonacci(int);

	
long fibonacci(i)
{
	int a = 0, b = 1, c;
	int j;
	
	for (j = 1; j < i; j++)
	{
		if ( i == 0)
		{
			c = a;
		}
		else if ( i == 1)
		{
			c = b;
		}
		else if ( i >= 2)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
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
