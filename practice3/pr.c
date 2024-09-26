#include<stdio.h>
int main()
{
    int a,b,i;
    for(i=0;i<13;i++)
    {
        printf("input the password:");
        scanf("%d",&a);
        b = (( a - 11)*3)%26;
        printf("the key is %d\n",b);
    }
    return 0;
}