#include<stdio.h>
int main()  //该代码用于找出10至100中所有的素数
{
    int i,j;
    for(i=10;i<=100;i++)    //设置i的范围为10到100
    {
        j = 2;  //j从2开始增加
        do{
            if( i % j ==0)  //判断i能否被j整除
            {
                break;  //如果能则i非素数，跳出此循环
            }
            j++;    //如果不能则j加1
        }while( j < i); //当i=j时退出循环
        if( i == j ){
            printf("%d\n",i); //输出素数i
        }
    }
    return 0;
}