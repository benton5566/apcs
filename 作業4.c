#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("請輸入一個正整數: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1 + 2 + ... + %d 的值為: %d\n", n, sum);

    return 0;
}
