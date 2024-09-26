#include<stdio.h>
int main()  //本代码为百钱百鸡问题的穷举解法，每种鸡的数量大于等于1
{
    int i , j , k = 0;  //定义三种鸡的数量
    for( i =1; i < 33; i++) //母鸡的数量从1到32变化
    {
        for( j = 1; j < 50; j ++)   //公鸡的数量从1到49变化
        {
            k = 100- i - j; //求出小鸡的数量
            if(3* i +2* j + k /3 == 100 && k > 0 && k %3 == 0)   //计算三种鸡所花价钱是否正好为100，同时小鸡数量应大于0
            {
                printf("the number of hen is %d\nthe number of cock is %d\nthe number of chicken is %d\n",i,j,k);   //输出结果
            }
        }
    }
    return 0;
}