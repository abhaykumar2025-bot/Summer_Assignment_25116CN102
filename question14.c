#include <stdio.h>

int main() {
    int n, i,n1 = 0, n2 = 1, n3;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 1)
        printf("The %dst Fibonacci term is %d", n, n1);
    else if (n == 2)
        printf("The %dnd Fibonacci term is %d", n, n2);
    else {
        for (i = 3; i <= n; i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("The %dth Fibonacci term is %d", n, n2);
    }
    return 0;
}