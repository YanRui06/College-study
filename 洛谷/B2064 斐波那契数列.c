#include <stdio.h>  

// 计算斐波那契数列的第a项  
int fibonacci(int a) {  
    if (a <= 0) return 0; // 假设斐波那契数列从第1项开始，F(0)不是有效的输入  
    if (a == 1) return 1;  
    if (a == 2) return 1;  
      
    int x[a + 1]; // 局部数组，大小为a+1  
    x[1] = x[2] = 1;  
    for (int i = 3; i <= a; i++) {  
        x[i] = x[i - 1] + x[i - 2];  
    }  
    return x[a];  
}  
  
int main() {  
    int n;  
    scanf("%d", &n);  
    for (int i = 0; i < n; i++) {  
        int a;  
        scanf("%d", &a);  
        printf("%d\n", fibonacci(a));  
    }  
    return 0;  
}