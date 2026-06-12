#include <stdio.h>

int main() {
    int n,a, r;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    while (n > 0) {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == a)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.", a);

    return 0;
}