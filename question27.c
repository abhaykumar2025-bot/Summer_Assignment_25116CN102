#include <stdio.h>
int sumdigits(int);
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumdigits(num));

    return 0;
}
int sumdigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumdigits(n / 10);
}