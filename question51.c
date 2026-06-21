#include <stdio.h>

int main() {
    int n, a[10], i;
    int large, small;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    large = a[0];
    small = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > large) {
            large = a[i];
        }

        if (a[i] < small) {
            small = a[i];
        }
    }

    printf("Largest element = %d\n", large);
    printf("Smallest element = %d\n", small);

    return 0;
}