#include <stdio.h>

#define A 9      // 乘法因子
#define B 11     // 加法因子
#define M 26     // 字母表的大小

// 函数声明
int mod_inverse(int a, int m);
char decrypt_char(char c);

// 主函数
int main() {
    char ciphertext[14]; // 13字符密文加上结束符
    char plaintext[14];   // 存储解密后的明文

    // 输入密文
    printf("请输入13字符的密文: ");
    scanf("%13s", ciphertext);
    
    // 解密过程
    for (int i = 0; i < 13; i++) {
        plaintext[i] = decrypt_char(ciphertext[i]);
    }
    plaintext[13] = '\0'; // 添加字符串结束符

    // 输出明文
    printf("解密后的明文为: %s\n", plaintext);
    
    return 0;
}

// 计算乘法逆元
int mod_inverse(int a, int m) {
    a = a % m;
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1; // 如果没有找到逆元，返回-1
}

// 解密字符
char decrypt_char(char c) {
    int a_inv = mod_inverse(A, M); // 计算逆元
    int y = c - 'a'; // 将字符转换为对应的数值（a=0, b=1, ..., z=25）
    int decrypted_value = (a_inv * (y - B + M)) % M; // 应用解密公式
    return (char)(decrypted_value + 'a'); // 将数值转换回字符
}