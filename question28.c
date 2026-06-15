#include <stdio.h>
int reverse(int , int);
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse number = %d\n", reverse(num, 0));

    return 0;
}
int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}