#include <stdio.h>

int main() {
    int i, n, a[10], b[10], c[20];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for(i = 0; i < n; i++) {
        c[n + i] = b[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}