#include<stdio.h>
int main() {
    int i, n, a[10], start, end, temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    start = 0;
    end = n - 1;

    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}