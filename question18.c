#include <stdio.h>
int main() {
    int n, temp, r, s = 0, fact, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        r = temp % 10;
        fact = 1;
        for (i = 1; i <= r; i++) {
            fact *= i;
        }
        s += fact;
        temp /= 10;
    }
    if (s == n)
        printf("Strong Number");
    else
        printf("not a Strong Number");
    return 0;
}