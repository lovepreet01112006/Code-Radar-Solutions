#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);  // Correct scanf format

    for (int i = 1; i <= 10; i++) {  // Fixed loop
        printf("%d x %d = %d\n", x, i, x * i);  // Fixed printf
    }

    return 0;
}
