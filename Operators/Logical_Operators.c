#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("(a>b && b>0) = %d\n", (a > b && b > 0));
    printf("(a>b || b>a) = %d\n", (a > b || b > a));
    printf("!(a>b) = %d\n", !(a > b));

    return 0;
}
