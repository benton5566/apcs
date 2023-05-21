#include <stdio.h>

int main() {
    int n=5, sum = 0;

    printf("請輸入一個正整數: ");
    //scanf("%d", &n);
    sum=ttsum(n);

    printf("\n 1 * 2 * … * n =: %d %d \n", n, sum);

    return 0;
}

int ttsum(int n){

    int sum=1;
    int i;

    for (int i = 1; i <= n; i++) {
            printf("\n %d,%d . ", i, sum);
        sum = sum*i;
    }

    return sum;
}
