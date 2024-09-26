#include <stdio.h>
#include <math.h>
int main()  //此代码目的为根据泰勒展开式求sin(x)的值，直到最后一项绝对值小于1e-6为止
{
    int i = 1;  //i代表循环次数
    long int l = 1; //l代表分母的绝对值
    float x , sum = 0 , t = 0 , s = 1 , a ; //sum为总和，t为每一项的值，初始为0；s为符号项，初始为正；a为分子的值
    printf("x = ");
    scanf("%f",&x); //输入x的值
    a = x;  //初始化分子使其等于x
    while(fabs(t)>=1e-6||i==1)    //当最后一项绝对值小于1e-6时退出循环
    {
        t = s * a / l;  //求出每一项的值
        sum += t;   //将每一项相加
        a = a * x * x;  //下一项的分子
        l = l * 2 * i * (2*i+1);    //下一项的分母
        s *= -1;    //符号改变
        i++;
    }
    printf("the result is %f", sum);
    return 0;
}