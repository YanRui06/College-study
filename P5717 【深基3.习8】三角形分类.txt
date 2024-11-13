#include <stdio.h>

int main() {
    int number[3];
    int a, b, c;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &number[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; j < 3; j++) {
                if (number[j] > number[i]) {
                    int temp;
                    temp = number[i];
                    number[i] = number[j];
                    number[j] = temp;
                }
            }
            //printf("%d", number[i]);
        }
        a = number[1];
        b = number[2];
        c = number[0];
        // 判断是否为直角三角形
        if (a * a + b * b == c * c) {
            printf("Right triangle\n");
        }
        // 判断是否为锐角三角形
        else if (a * a + b * b > c * c) {
            printf("Acute triangle\n");
        }
        // 判断是否为钝角三角形（注意：前面已经排除了直角和不能组成三角形的情况）
        else {
            printf("Obtuse triangle\n");
        }

        // 判断是否为等腰三角形（注意：等边三角形也是等腰三角形的一种）
        if (a == b || b == c) {
            printf("Isosceles triangle\n");
        }
        // 判断是否为等边三角形
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }



    return 0;
}