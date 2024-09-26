#include<stdio.h>
int main()
{
    int i,sum;
    for (i = 1,sum = 0; i <= 100; i++)
    {
        sum += i;/* code */
    }
    printf("sum = %d\n",sum);
    return 0;
}