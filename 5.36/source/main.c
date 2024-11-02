#include <stdio.h>

int t = 0;

void example_1(int n, char A, char B, char C) {
    if (n == 1) {
        t++;
        printf("盤子從 %c 移到 %c\n", A, C);
    }
    else {
        example_1(n - 1, A, C, B);
        t++;
        printf("盤子從 %c 移到 %c\n", A, C);
        example_1(n - 1, B, A, C);
    }
}

int main() {
    int n;
    printf("請輸入盤子的數量 n: ");
    scanf("%d", &n);

    example_1(n, 'X', 'Y', 'Z'); 
    printf("總共需要 %d 步\n", t);

    return 0;
}
