#include <stdio.h>

int main() {
    int arr[100], n, i, x;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == x) {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = x - 1;
        }
    }
    printf("Element not found.");
    return 0;
}