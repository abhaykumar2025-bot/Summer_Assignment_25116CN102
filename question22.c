#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, r;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        r = binary % 10;
        decimal = decimal + r * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Decimal number = %d", decimal);
    return 0;
}