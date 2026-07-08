#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Arithmetic Operators\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    printf("Relational Operators\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n\n", a == b);

    printf("Logical Operators\n");
    printf("(a>b && b>0) = %d\n", (a > b && b > 0));
    printf("(a>b || b>a) = %d\n\n", (a > b || b > a));

    printf("Bitwise Operators\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n\n", a | b);

    printf("Ternary Operator\n");
    printf("Maximum = %d\n", (a > b) ? a : b);

    return 0;
}
