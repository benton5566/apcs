//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

//int main() {
// 初始化隨機數生成器的種子
//    srand(time(NULL));
// 生成一個範圍在0到99之間的亂數
//    int random_number = rand() % 26;
//
//    char letter = 'A'+random_number;
//    printf("Random number between 0 and 26 is %d, then letter is  %c\n", random_number, letter);

//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 請寫出函式 showletter() 可以生成1個隨機的 A-Z 字元，
// 且每次呼叫 showletter() 生成的字母都需要不一樣。
void showletter() {


    int random_number = rand() % 26;

    char letter = 'A'+random_number;
    printf("Random number between 0 and 26 is %d, then letter is  %c\n", random_number, letter);

}

int main() {
    srand(time(NULL));

    showletter();
    showletter();
    showletter();

    return 0;
}
