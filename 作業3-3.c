#include <stdio.h>

int main() {
    int n=10, sum = 0;

    printf("enter a positive integer:\n\n");
    //scanf("%d", &n);
    printf("calculation process:\n\n");
    for(int k=1;k<=n;k++){
    printf("%d!=",k);
    sum=sum+ttsum(k);
    printf("%d\n",ttsum(k));
    }
    printf("\nsum of 1!+2!+...+n!: %d %d \n", n, sum);
    return 0;
}

int ttsum(int n){

    int sum=1,k;

    for (int i = 1; i <= n; i++) {
            //printf("\n %d,%d\n . ", i, sum);
        sum=sum*i;
    }


    return sum;
}
