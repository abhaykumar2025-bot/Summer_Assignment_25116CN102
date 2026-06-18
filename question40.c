#include <stdio.h>
int main() {
    int n, i, j, k;
    char ch = 'A';
    printf("Enter the number of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c",'A'+j-1);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}