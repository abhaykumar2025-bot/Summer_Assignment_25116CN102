#include <stdio.h>
int palin(int n) {
    int a= n, s= 0, rem;
    while (n != 0) {
        rem = n % 10;
        s = s* 10 + rem;
        n = n / 10;
    }
    if (a == s)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (palin(num))
        printf("%d is a Palindrome number", num);
    else
        printf("%d is not a Palindrome number.", num);

    return 0;
}