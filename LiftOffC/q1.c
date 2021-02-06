#include <stdio.h>

int main()
{
    int p, q;
    int sum, sub, mul, mod, qotient;
    float div;

    printf("Enter any two numbers::\n");
    scanf("%d%d", &p, &q, "\n");

    sum = p + q;
    sub = p - q;
    mul = p * q;
    qotient = p / q;
    div = (float)p / q;
    mod = p % q;

    printf("\n");
    printf("SUM        %d + %d = %d\n", p, q, sum);
    printf("DIFFERENCE %d - %d = %d\n", p, q, sub);
    printf("PRODUCT    %d * %d = %d\n", p, q, mul);
    printf("QUOTIENT   %d / %d = %d\n", p, q, qotient);
    printf("DIVISION   %d / %d = %f\n", p, q, div);
    printf("REMINDER    %d %% %d = %d\n", p, q, mod);

    return 0;
}
