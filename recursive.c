#include <stdio.h>
#include <time.h>

#define N 45

/*recursive*/

long fibonacci(int);
long a[N];

long fibonacci(i)
{
    a[0] = 0;
    a[1] = 1;
    if (i == 0)
        return(a[i]);
    else if (i == 1)
        return(a[i]);
    else
        a[i] = a[i - 2] + a[i - 1];
        return(a[i]);
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
