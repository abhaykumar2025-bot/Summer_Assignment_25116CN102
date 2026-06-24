#include <stdio.h>

int main() {
    int n, i, j = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        int duplicate = 0;

        for (int k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}