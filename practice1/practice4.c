#include<stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    while (sum<=9000)  /*当i小于100时执行循环*/
    {
        sum = sum + i;   /* 求和 */
        i++;
    }
    printf("sum = %d\ni = %d\n",sum,i);
}