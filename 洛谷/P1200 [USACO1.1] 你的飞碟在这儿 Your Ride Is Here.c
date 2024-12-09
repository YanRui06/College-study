#include <stdio.h> // 包含标准输入输出库，用于输入输出操作
#include <string.h> // 包含字符串处理库，虽然此程序中未直接使用，但通常用于处理字符串
#include <ctype.h> // 包含字符处理库，用于字符大小写转换等

// 函数声明：计算名字对应的数字（名字中所有字母在字母表中的位置乘积）
long long calculate_number(const char *name);

int main() {
    char comet_name[7], team_name[7]; // 定义两个字符数组，用于存储彗星名和小组名，大小设为7以容纳6个字符的名字和1个空字符

    // 读取输入：限制读取的字符数为6，确保不会超出数组大小，%6s自动在末尾添加空字符
    scanf("%6s", comet_name); // 读取彗星名
    scanf("%6s", team_name);  // 读取小组名

    // 调用函数计算名字对应的数字，并取模47得到余数
    long long comet_number = calculate_number(comet_name) % 47; // 彗星名对应的数字取模47
    long long team_number = calculate_number(team_name) % 47;  // 小组名对应的数字取模47

    // 判断两个余数是否相等，并输出相应的结果
    if (comet_number == team_number) { // 如果余数相等
        printf("GO\n"); // 输出"GO"，表示小组需要准备好被带走
    } else { // 如果余数不相等
        printf("STAY\n"); // 输出"STAY"，表示小组不需要被带走
    }

    return 0; // 程序正常结束，返回0
}

// 函数定义：计算名字对应的数字（名字中所有字母在字母表中的位置乘积）
long long calculate_number(const char *name) {
    long long product = 1; // 初始化乘积为1
    while (*name) { // 当字符串未到达末尾时循环
        // 将字符转换为对应的数字（A=1, B=2, ..., Z=26），并与当前乘积相乘
        int value = toupper(*name) - 'A' + 1; // 转换为大写字母并计算其值
        product *= value; // 更新乘积
        name++; // 移动到字符串的下一个字符
    }
    return product; // 返回计算得到的乘积
}