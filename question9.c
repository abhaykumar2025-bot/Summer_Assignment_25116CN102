#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            break;
        }
    }
    if (i == n) {
        printf("Prime");
    }

    return 0;
}