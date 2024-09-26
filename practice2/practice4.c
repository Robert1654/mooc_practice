#include <stdio.h>
#include <math.h>

int main() {
    int i = 0;  // 循环次数从0开始
    double x, sum = 0, t = 0, s = 1, a; // 使用double以提高计算精度
    long int l = 1; // 分母初始化为1

    printf("x = ");
    scanf("%lf", &x); // 输入x的值，使用%lf读取double类型

    a = x;  // 初始化分子使其等于x

    do {
        t = s * a / l; // 计算当前项的值
        sum += t;      // 将当前项加到总和中
        a *= x * x;    // 更新分子，下一项的分子为x的平方乘以前的分子
        l *= (2 * i + 2) * (2 * i + 3); // 更新分母
        s = -s;        // 符号改变
        i++;           // 更新循环次数
    } while (fabs(t) >= 1e-6); // 直到当前项的绝对值小于1e-6

    printf("The result is %lf\n", sum); // 输出结果，使用%lf格式
    return 0;
}
