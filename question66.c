#include <stdio.h>

int main() {
    int a[10], b[10], c[20];
    int n, i, j, k = 0, x;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[k++] = a[i];
    for(i = 0; i < n; i++) {
        x = 0;
        for(j = 0; j < k; j++) {
            if(b[i] == c[j]) {
                x = 1;
                break;
            }
        }
        if(x == 0)
            c[k++] = b[i];
    }
    printf("Union Array: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}