#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 請寫出函式 showletter() 可以生成1個隨機的 A-Z 字元，
// 且每次呼叫 showletter() 生成的字母都需要不一樣。

void showletter() {

    //0到26的亂數
    int random_number = rand() % 26;

    char letter = 'A'+random_number;
    printf("Random number between 0 and 26 is %d, then letter is  %c\n", random_number, letter);
}

int main() {
    int n=4;
    srand(time(NULL));//隨機生成器的種子
    printf("enter how many cards you want to draw\n");
    scanf("%d",&n);//輸入卡牌數
    printf("\your card is:\n");
    for (int i = 1; i <= n; i++) {
        showletter();
    }

    return 0;
}
