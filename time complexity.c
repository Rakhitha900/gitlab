#include <stdio.h>

void quadratic_example(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    quadratic_example(n);

    return 0;
}
