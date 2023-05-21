#include <stdio.h>

int main() {

    int n=0;
    for (int i = 2000; i <= 2400; i++) {
        if (i%4==0&&(i%100!=0)||(i%400==0)){
            printf("%d Leap year\n",i);
            n=n+1;
        }else if (i%4!=0){
            //printf("%d Average year\n",i);
            //n=n-1;
        }
    }

    printf("%d",n);

    return 0;
}

