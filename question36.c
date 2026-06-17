// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int j,i,n;
    printf ("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if (i == 1 || i == n || j == 1 || j == n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
