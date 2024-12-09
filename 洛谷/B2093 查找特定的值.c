#include <stdio.h>  

int main() {
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    int x;
    scanf("%d", &x);
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            found = i;
            break;
        }
    }
    printf("%d\n", found);
    return 0;
}