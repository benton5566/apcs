// 範例: 將 1+2+3....+n 的結果計算出來
#include <stdio.h>

int main() {
    int n=5, sum = 0;

    printf("請輸入一個正整數: ");
    //scanf("%d", &n);
    sum=ttsum(n);

    printf("1 + 2 + ... + %d 的值為: %d\n", n, sum);

    return 0;
}

int ttsum(int n){

    int sum=0;
    int i;

    for (int i = 1; i <= n; i++) {
            printf("\n %d,%d ", i, sum);
        sum = sum + i;
    }

    return sum;
}
