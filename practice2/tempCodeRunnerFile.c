#include <stdio.h>
int main()
{
    int i, j ;
    long int sum, t;
    sum = 0;
    t = 1;
    printf("Please enter the number of terms:");
    scanf("%d", &j );
    if ( j <= 0)
    {
        printf("Please enter a non-negative number :(\n");
        return 1;
    }
    for ( i=1 ; i <= j ; i++)
    {
        sum += t;
        t *= i+1;/* code */
    }
    printf("sum = %ld\n",sum);
    return 0;
}