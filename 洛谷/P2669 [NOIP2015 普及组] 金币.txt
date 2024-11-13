#include <stdio.h>  
int main() {
    int k, sum = 0, days = 0;
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= i; j++) {
            days++;
            sum += i;
            if (days == k) {
                printf("%d", sum);
                return 0;
            }
        }
    }

}
