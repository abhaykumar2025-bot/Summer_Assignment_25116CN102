#include <stdio.h>
int main(){
    int a[10], b[10];
    int n, i, j;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("Intersection Array: ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i] == b[j]){
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}