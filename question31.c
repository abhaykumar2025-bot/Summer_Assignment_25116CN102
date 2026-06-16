// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,j;
    char ch;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        ch = 'A';
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }printf("\n");
    }
    return 0;
}