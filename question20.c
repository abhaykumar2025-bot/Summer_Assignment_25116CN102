#include <stdio.h>

int main() {
    int i, n, largestFactor = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    if (n > 2)
        largestFactor = n;
    printf("Largest Prime Factor =", largestFactor);
    return 0;
}