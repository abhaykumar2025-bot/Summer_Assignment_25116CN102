#include <stdio.h>
int armstrong(int n) {
    int temp = n, r, s= 0;
    while (temp != 0) {
        r = temp % 10;
        s = s + r*r*r;
        temp = temp / 10;
    }
    if (s == n)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}