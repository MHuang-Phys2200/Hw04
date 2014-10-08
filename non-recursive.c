#include <stdio.h>
#include <time.h>

#define N 45

/*non-recursive*/

long fibonacci(int);
int a = 0;
int b = 1;

long fibonacci(j)
{
	int i;
	for (i = 0; i < N; i++)
	{
		if (j == 0)
		{
			return(a);
		}
		else if (j == 1)
		{
			return(b);
		}
		else
		{
			int c = a + b;
			a = b;
			b = c;
		return(c);
		}
	}
}


int main(void)
{
    int i;
    long l;
   
    clock_t begin, end;
    double time_spent;
    begin == clock();

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
