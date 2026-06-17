// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int j,i,n;
    printf ("Enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}