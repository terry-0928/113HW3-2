#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

int main(void) 
{
    int b;
    int e;
    double Ans;

    printf("base = ");
    scanf("%d", &b);

    printf("exponent = ");
    scanf("%d", &e);

    Ans = Power(b, e);
    printf("Ans = %f\n", Ans);

    system("pause");
    return 0;
}

double Power(double x, int n) {
    if (n >= 1)
    {
        return x * Power(x, n - 1);
    }
    else
    {
        return 1;
    }
}
