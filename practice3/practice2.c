#include<stdio.h>
void move(char A,char B);


void move(char A,char B)
{
    printf("%c-->%c\n",A,B);
}

void s1(int n,char one,char two,char three)
{
    if (n==1)
    {
        move(one,three);
    }
    else
    {
        s1(n-1,one,three,two);
        move(one,three);
        s1(n-1,two,one,three);
    }
}

void main()
{
    int n;
    printf("input the number");
    scanf("%d",&n);
    s1(n,'A','B','C');
    return 0;
}