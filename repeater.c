#include <stdio.h>

int main() {

    int input;

    printf("每輸入一個數字，程式會再印出相同的數字。\n");
    //fill some condition into the following while loop
    //only ONE line code is you need
    //please refer page 4 of homework request
    while (scanf("%d", &input)) {
        printf("%d\n", input);
    }
}
