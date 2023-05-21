#include <stdio.h>

int main() {
    int n=5, sum = 0;

    printf("請輸入一個正整數: ");
    //scanf("%d", &n);
    for(int k=1;k<=n;k++){
    sum=sum+ttsum(k);
    }
    printf("\n 1! + 2! + … + n!的值: %d %d \n", n, sum);

    return 0;
}

int ttsum(int n){

    int sum=1;

    for (int i = 1; i <= n; i++) {
            printf("\n %d,%d . ", i, sum);
        sum = sum*i;
    }

    return sum;
}
