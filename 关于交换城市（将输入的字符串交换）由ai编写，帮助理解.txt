c
#include <stdio.h>
#include <string.h>
 
#define NUM_CITIES 5
#define MAX_CITY_LEN 20
 
// 函数声明
void sortCities(char cities[][MAX_CITY_LEN], int numCities);
void reverseOutput(char cities[][MAX_CITY_LEN], int numCities);
 
// 排序函数，使用冒泡排序算法
void sortCities(char cities[][MAX_CITY_LEN], int numCities) {
    int i, j;
    char temp[MAX_CITY_LEN];
    for (i = 0; i < numCities - 1; i++) {
        for (j = 0; j < numCities - i - 1; j++) {
            if (strcmp(cities[j], cities[j + 1]) > 0) {
                // 交换城市名称
                strcpy(temp, cities[j]);
                strcpy(cities[j], cities[j + 1]);
                strcpy(cities[j + 1], temp);
            }
        }
    }
}
 
// 逆序输出函数
void reverseOutput(char cities[][MAX_CITY_LEN], int numCities) {
    int i;
    printf("逆序输出为:\n");
    for (i = numCities - 1; i >= 0; i--) {
        printf("%s\n", cities[i]);
    }
}
 
int main() {
    char cities[NUM_CITIES][MAX_CITY_LEN];
    int i;
 
    // 提示用户输入城市名称
    printf("请输入%d个城市的拼音名称：\n", NUM_CITIES);
    for (i = 0; i < NUM_CITIES; i++) {
        // 读取用户输入的城市名称
        scanf("%19s", cities[i]); // 使用 %19s 以防止缓冲区溢出
    }
 
    // 对城市名称进行排序
    sortCities(cities, NUM_CITIES);
 
    // 以逆序的方式输出排序后的城市名称
    reverseOutput(cities, NUM_CITIES);
 
    return 0;
}

代码说明：
头文件包含：
#include <stdio.h>：包含标准输入输出库。
#include <string.h>：包含字符串处理库。
宏定义：
#define NUM_CITIES 5：定义要处理的城市数量。
#define MAX_CITY_LEN 20：定义每个城市名称的最大长度。
函数声明：
void sortCities(char cities[][MAX_CITY_LEN], int numCities);
void reverseOutput(char cities[][MAX_CITY_LEN], int numCities);
排序函数 sortCities：
使用冒泡排序算法对城市名称进行排序。
逆序输出函数 reverseOutput：
逆序输出排序后的城市名称。
主函数 main：
声明一个二维字符数组 cities 来存储城市名称。
提示用户输入城市名称，并使用 scanf 函数读取用户输入。
调用 sortCities 函数对城市名称进行排序。
调用 reverseOutput 函数以逆序方式输出排序后的城市名称。
注意事项：
在 scanf 函数中使用 %19s 而不是 %s 是为了防止缓冲区溢出。这是因为 cities 数组的每个元素都是一个长度为 MAX_CITY_LEN（即20）的字符数组，但我们需要为字符串的结尾空字符 \0 留出空间，所以最多只能读取19个字符。
