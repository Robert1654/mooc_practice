#include<stdio.h>
void Add(int *x);
{
    int a[3]={0,1,2};
    Add(a);
}
void Add(int *x)
{
    *x=(*x)+1;
    x++;
    *x=(*x)+1;
    x++;
    *x=(*x)+1;
}