#include <stdio.h>

int main() {
    int i = 1;  // Start from the first natural number

    while (i * i <= 10) {
        i++;
        int square = i * i;  // Calculate the square of i
        printf("%d ", square);
    }

    printf("\n");
    return 0;
}
