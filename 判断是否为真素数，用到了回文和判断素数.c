#include <stdio.h> // 引入标准输入输出库
#include <stdbool.h> // 引入布尔类型库
#include <math.h> // 引入数学库，用于计算平方根等

// 判断一个数是否为素数的函数
bool isPrime(int num) {
    // 如果数小于等于1，则不是素数
    if (num <= 1) return false;
    // 遍历从2到num的平方根的所有整数
    for (int i = 2; i <= sqrt(num); i++) {
        // 如果num能被i整除，则num不是素数
        if (num % i == 0) return false;
    }
    // 如果num不能被2到其平方根之间的任何数整除，则num是素数
    return true;
}

// 计算一个整数的反序数的函数
int reverseNumber(int num) {
    int reversed = 0; // 用于存储反序数的变量
    // 当num不为0时，继续循环
    while (num != 0) {
        int digit = num % 10; // 提取num的最低位数字
        reversed = reversed * 10 + digit; // 将提取的数字添加到reversed的末尾
        num /= 10; // 去掉num的最低位数字
    }
    // 返回反序数
    return reversed;
}

// 判断一个数是否为真素数的函数
bool isTruePrime(int num) {
    // 如果num和其反序数都是素数，则num是真素数
    return isPrime(num) && isPrime(reverseNumber(num));
}

int main() {
    int M, N; // 定义两个整数M和N，用于存储用户输入的区间端点
    scanf("%d %d", &M, &N); // 从标准输入读取M和N的值
    bool first = true; // 定义一个布尔变量first，用于标记是否为第一个打印的真素数
    // 遍历区间[M, N]内的所有整数
    for (int i = M; i <= N; i++) {
        // 如果i是真素数
        if (isTruePrime(i)) {
            // 如果不是第一个打印的真素数，则先打印一个逗号作为分隔符
            if (!first) {
                printf(",");
            }
            // 打印真素数i
            printf("%d", i);
            // 将first标记为false，表示已经打印过至少一个真素数
            first = false;
        }
    }
    // 如果循环结束后first仍为true，则表示没有找到任何真素数，打印"No"
    if (first) {
        printf("No");
    }
    // 打印一个换行符，以美化输出
    printf("\n");
    return 0; // 程序正常结束
}
