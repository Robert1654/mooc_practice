#include <stdio.h>
int main()
{
    int i, j;
    long int sum, t;
    sum = 0;
    do {
        printf("Please enter the number of terms: ");
        if (scanf("%d", &j) != 1) {
            // 如果输入不是整数，则清除输入缓冲区并提示错误
            while (getchar() != '\n'); // 清除缓冲区直到行尾
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        if (j <= 0) {
            printf("Please enter a non-negative number :(\n");
        }
    } while (j <= 0); // 循环直到用户输入一个非负数

    for (i = 1; i <= j; i++) {
        t = 1; // 每次循环开始时重新初始化 t 为 1
        for (int k = 1; k <= i; k++) {
            t *= k; // 计算 i 的阶乘
        }
        sum += t; // 将当前阶乘加到 sum 上
    }
    printf("sum = %ld\n", sum);
    return 0;
}