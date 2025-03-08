#include <stdio.h>

int main() {
    int size;
    
    // Take input for size of square
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Print '*' at borders, space inside
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
