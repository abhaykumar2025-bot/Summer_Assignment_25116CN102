// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int j,i,n;
    char ch='A';
    printf ("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}