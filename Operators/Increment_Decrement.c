#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial Value = %d\n", a);

    printf("Post Increment = %d\n", a++);
    printf("Value After Post Increment = %d\n", a);

    printf("Pre Increment = %d\n", ++a);

    printf("Post Decrement = %d\n", a--);
    printf("Value After Post Decrement = %d\n", a);

    printf("Pre Decrement = %d\n", --a);

    return 0;
}
