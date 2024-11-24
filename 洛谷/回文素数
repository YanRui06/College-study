#include<stdio.h>
// 判断数字是否为回文数
int hui(int n)
{
    int t = n;
    int r = 0;
    while (t > 0) {
        r = r * 10 + t % 10;
        t /= 10;
    }
    return n == r;  // 如果是回文数，返回1，否则返回0
}

// 判断数字是否为质数
int zhi(int m)
{
    if (m <= 1) return 0;  // 1 不是质数
    if (m == 2) return 1;   // 2 是质数
    if (m % 2 == 0) return 0; // 排除偶数

    for (int i = 3; i * i <= m; i += 2) // 只检查奇数
    {
        if (m % i == 0)
            return 0; // 如果有因子，说明不是质数
    }
    return 1;  // 是质数
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int p = a; p <= b; p++) {
        if (hui(p) && zhi(p)) {
            printf("%d\n", p);
        }
    }
    return 0;
}
