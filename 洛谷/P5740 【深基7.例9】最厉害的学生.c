#include <stdio.h>
#include <string.h>

struct student {
    char name[10];
    int a1, a2, a3;
    int sum;
};

int main() {
    int n, i, j = -1; // 初始化j为-1，表示还没有找到最高分的学生
    scanf("%d", &n);
    struct student st[100];

    for (i = 0; i < n; i++) {
        scanf("%9s %d %d %d", st[i].name, &st[i].a1, &st[i].a2, &st[i].a3);
        st[i].sum = st[i].a1 + st[i].a2 + st[i].a3;

        // 检查当前学生的总和是否大于当前记录的最高分
        if (j == -1 || st[i].sum > st[j].sum) {
            j = i; // 更新最高分学生的索引
        }
    }

    // 打印最高分学生的信息
    printf("%s %d %d %d %d\n", st[j].name, st[j].a1, st[j].a2, st[j].a3, st[j].sum);

    return 0;
}
