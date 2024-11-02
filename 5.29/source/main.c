#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z;
    z = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    z = x % y;
    int m = x;
    int n = y;

    while (z) {
        x = y;
        y = z;
        z = x % y;
    }

    printf("%d", m * n / y);
}
